import json

def defineFunction(description):
	result = ''

	unique_elements = {}
	elements_inputs = {}
	for w in description['wires']:
		unique_elements[w['from']] = None
		unique_elements[w['to']] = None
		element = w['to'].split('[')[0]
		if not (element in elements_inputs):
			elements_inputs[element] = {}
		input_index = w['to'][:-1].split('[')[-1]
		try:
			elements_inputs[element][int(input_index)] = w['from']
		except ValueError:
			elements_inputs[element][0] = w['from']

	inputs_number = len(list(filter(lambda e: e.split('_')[0] == 'INPUT', unique_elements)))
	outputs_number = len(list(filter(lambda e: e.split('_')[0] == 'OUTPUT', unique_elements)))

	macros_prefix = '__' + description['name'] + '__'
	inputs_string = ', '.join([f'{macros_prefix}INPUT_{n}' for n in range(1, inputs_number+1)])
	
	for e in elements_inputs.keys():
		result += "#define %s%s(%s) %s(%s)\n" % (
			macros_prefix,
			e,
			inputs_string,
			e.split('_')[0],
			', '.join([(f'{macros_prefix}{i}({inputs_string})') if (i.split('_')[-2] != f'INPUT') else f'{macros_prefix}{i}' for i in elements_inputs[e].values()])
		)
	
	result += '#define %s(%s) %s' % (
		description['name'],
		inputs_string,
		', '.join([f'{macros_prefix}OUTPUT_{n}({inputs_string})' for n in range(1, outputs_number+1)])
	)

	# result += '\n'
	# result += '\n'.join([f'#undef {macros_prefix}{e}' for e in elements_inputs.keys()])
	
	return result, outputs_number

def compile(file_path):
	result = '''#include <stdio.h>
#include <stdlib.h>

#define NOT(x) (!(x))
#define OR(x, y) ((x) || (y))
#define AND(x, y) ((x) && (y))
#define OUTPUT(x) (x)

'''
	program = None
	with open('example.json', 'r') as f:
		program = json.load(f)

	max_outputs_number = 1
	definitions = ''
	for description in program:
		definition, outputs_number = defineFunction(description)
		definitions += '\n\n' + definition
		max_outputs_number = max(max_outputs_number, outputs_number)

	result += '''
#define FIRST(A, ...) A
#define REST(A, ...) __VA_ARGS__

#define NTH_0(...) FIRST(__VA_ARGS__)
'''
	for i in range(1, max_outputs_number):
		result += f'#define NTH_{i}(...) NTH_{i-1}(REST(__VA_ARGS__))\n'

	result += definitions

	result += '''

int main(void) {
	printf("%d", xorxor(0, 1));
}'''

	return result