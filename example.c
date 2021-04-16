#include <stdio.h>

#define NOT(x) !x
#define OR(x, y) (x || y)
#define AND(x, y) (x && y)
#define OUTPUT(...) __VA_ARGS__

#define FIRST(A, ...) A
#define REST(A, ...) __VA_ARGS__

#define NTH_1(...) FIRST(__VA_ARGS__)

#define NTH_2(...) NTH_1(REST(__VA_ARGS__))
#define NTH_3(...) NTH_2(REST(__VA_ARGS__))
#define NTH_4(...) NTH_3(REST(__VA_ARGS__))
#define NTH_5(...) NTH_4(REST(__VA_ARGS__))
#define NTH_6(...) NTH_5(REST(__VA_ARGS__))
#define NTH_7(...) NTH_6(REST(__VA_ARGS__))
#define NTH_8(...) NTH_7(REST(__VA_ARGS__))
#define NTH_9(...) NTH_8(REST(__VA_ARGS__))


#define __sum__AND_1(__sum__INPUT_1, __sum__INPUT_2, __sum__INPUT_3) AND(NTH_1(__sum__INPUT_1), NTH_1(__sum__INPUT_2))
#define __sum__AND_2(__sum__INPUT_1, __sum__INPUT_2, __sum__INPUT_3) AND(NTH_1(__sum__INPUT_1), NTH_1(__sum__INPUT_3))
#define __sum__OR_3_1(__sum__INPUT_1, __sum__INPUT_2, __sum__INPUT_3) OR_3(NTH_1(__sum__INPUT_1), NTH_1(__sum__INPUT_2), NTH_1(__sum__INPUT_3))
#define __sum__AND_3_1(__sum__INPUT_1, __sum__INPUT_2, __sum__INPUT_3) AND_3(NTH_1(__sum__INPUT_1), NTH_1(__sum__INPUT_2), NTH_1(__sum__INPUT_3))
#define __sum__AND_3(__sum__INPUT_1, __sum__INPUT_2, __sum__INPUT_3) AND(NTH_1(__sum__INPUT_2), NTH_1(__sum__INPUT_3))
#define __sum__OR_3_2(__sum__INPUT_1, __sum__INPUT_2, __sum__INPUT_3) OR_3(NTH_1(__sum__AND_1(__sum__INPUT_1, __sum__INPUT_2, __sum__INPUT_3)), NTH_1(__sum__AND_2(__sum__INPUT_1, __sum__INPUT_2, __sum__INPUT_3)), NTH_1(__sum__AND_3(__sum__INPUT_1, __sum__INPUT_2, __sum__INPUT_3)))
#define __sum__OUTPUT_1(__sum__INPUT_1, __sum__INPUT_2, __sum__INPUT_3) OUTPUT(NTH_1(__sum__OR_3_2(__sum__INPUT_1, __sum__INPUT_2, __sum__INPUT_3)))
#define __sum__NOT_1(__sum__INPUT_1, __sum__INPUT_2, __sum__INPUT_3) NOT(NTH_1(__sum__OR_3_2(__sum__INPUT_1, __sum__INPUT_2, __sum__INPUT_3)))
#define __sum__AND_4(__sum__INPUT_1, __sum__INPUT_2, __sum__INPUT_3) AND(NTH_1(__sum__NOT_1(__sum__INPUT_1, __sum__INPUT_2, __sum__INPUT_3)), NTH_1(__sum__OR_3_1(__sum__INPUT_1, __sum__INPUT_2, __sum__INPUT_3)))
#define __sum__OR_1(__sum__INPUT_1, __sum__INPUT_2, __sum__INPUT_3) OR(NTH_1(__sum__AND_4(__sum__INPUT_1, __sum__INPUT_2, __sum__INPUT_3)), NTH_1(__sum__AND_3_1(__sum__INPUT_1, __sum__INPUT_2, __sum__INPUT_3)))
#define __sum__OUTPUT_2(__sum__INPUT_1, __sum__INPUT_2, __sum__INPUT_3) OUTPUT(NTH_1(__sum__OR_1(__sum__INPUT_1, __sum__INPUT_2, __sum__INPUT_3)))
#define sum(__sum__INPUT_1, __sum__INPUT_2, __sum__INPUT_3) __sum__OUTPUT_1(__sum__INPUT_1, __sum__INPUT_2, __sum__INPUT_3), __sum__OUTPUT_2(__sum__INPUT_1, __sum__INPUT_2, __sum__INPUT_3)

#define __sum_8__sum_1(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17) sum(NTH_1(__sum_8__INPUT_16), NTH_1(__sum_8__INPUT_8), NTH_1(__sum_8__INPUT_17))
#define __sum_8__sum_2(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17) sum(NTH_1(__sum_8__INPUT_7), NTH_1(__sum_8__INPUT_15), NTH_1(__sum_8__sum_1(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17)))
#define __sum_8__sum_3(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17) sum(NTH_1(__sum_8__INPUT_6), NTH_1(__sum_8__INPUT_14), NTH_1(__sum_8__sum_2(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17)))
#define __sum_8__sum_4(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17) sum(NTH_1(__sum_8__INPUT_5), NTH_1(__sum_8__sum_3(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17)), NTH_1(__sum_8__INPUT_13))
#define __sum_8__sum_8(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17) sum(NTH_1(__sum_8__INPUT_1), NTH_1(__sum_8__INPUT_9), NTH_1(__sum_8__sum_7(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17)))
#define __sum_8__sum_7(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17) sum(NTH_1(__sum_8__INPUT_2), NTH_1(__sum_8__INPUT_10), NTH_1(__sum_8__sum_6(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17)))
#define __sum_8__sum_6(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17) sum(NTH_1(__sum_8__INPUT_11), NTH_1(__sum_8__INPUT_3), NTH_1(__sum_8__sum_5(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17)))
#define __sum_8__sum_5(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17) sum(NTH_1(__sum_8__INPUT_12), NTH_1(__sum_8__INPUT_4), NTH_1(__sum_8__sum_4(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17)))
#define __sum_8__OUTPUT_1(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17) OUTPUT(NTH_1(__sum_8__sum_8(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17)))
#define __sum_8__OUTPUT_2(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17) OUTPUT(NTH_2(__sum_8__sum_8(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17)))
#define __sum_8__OUTPUT_9(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17) OUTPUT(NTH_2(__sum_8__sum_1(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17)))
#define __sum_8__OUTPUT_8(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17) OUTPUT(NTH_2(__sum_8__sum_2(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17)))
#define __sum_8__OUTPUT_7(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17) OUTPUT(NTH_2(__sum_8__sum_3(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17)))
#define __sum_8__OUTPUT_6(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17) OUTPUT(NTH_2(__sum_8__sum_4(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17)))
#define __sum_8__OUTPUT_5(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17) OUTPUT(NTH_2(__sum_8__sum_5(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17)))
#define __sum_8__OUTPUT_4(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17) OUTPUT(NTH_2(__sum_8__sum_6(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17)))
#define __sum_8__OUTPUT_3(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17) OUTPUT(NTH_2(__sum_8__sum_7(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17)))
#define sum_8(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17) __sum_8__OUTPUT_1(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17), __sum_8__OUTPUT_2(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17), __sum_8__OUTPUT_3(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17), __sum_8__OUTPUT_4(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17), __sum_8__OUTPUT_5(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17), __sum_8__OUTPUT_6(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17), __sum_8__OUTPUT_7(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17), __sum_8__OUTPUT_8(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17), __sum_8__OUTPUT_9(__sum_8__INPUT_1, __sum_8__INPUT_2, __sum_8__INPUT_3, __sum_8__INPUT_4, __sum_8__INPUT_5, __sum_8__INPUT_6, __sum_8__INPUT_7, __sum_8__INPUT_8, __sum_8__INPUT_9, __sum_8__INPUT_10, __sum_8__INPUT_11, __sum_8__INPUT_12, __sum_8__INPUT_13, __sum_8__INPUT_14, __sum_8__INPUT_15, __sum_8__INPUT_16, __sum_8__INPUT_17)

#define __AND_3__AND_2(__AND_3__INPUT_1, __AND_3__INPUT_2, __AND_3__INPUT_3) AND(NTH_1(__AND_3__AND_1(__AND_3__INPUT_1, __AND_3__INPUT_2, __AND_3__INPUT_3)), NTH_1(__AND_3__INPUT_3))
#define __AND_3__AND_1(__AND_3__INPUT_1, __AND_3__INPUT_2, __AND_3__INPUT_3) AND(NTH_1(__AND_3__INPUT_2), NTH_1(__AND_3__INPUT_1))
#define __AND_3__OUTPUT_1(__AND_3__INPUT_1, __AND_3__INPUT_2, __AND_3__INPUT_3) OUTPUT(NTH_1(__AND_3__AND_2(__AND_3__INPUT_1, __AND_3__INPUT_2, __AND_3__INPUT_3)))
#define AND_3(__AND_3__INPUT_1, __AND_3__INPUT_2, __AND_3__INPUT_3) __AND_3__OUTPUT_1(__AND_3__INPUT_1, __AND_3__INPUT_2, __AND_3__INPUT_3)

#define __OR_3__OR_2(__OR_3__INPUT_1, __OR_3__INPUT_2, __OR_3__INPUT_3) OR(NTH_1(__OR_3__OR_1(__OR_3__INPUT_1, __OR_3__INPUT_2, __OR_3__INPUT_3)), NTH_1(__OR_3__INPUT_3))
#define __OR_3__OR_1(__OR_3__INPUT_1, __OR_3__INPUT_2, __OR_3__INPUT_3) OR(NTH_1(__OR_3__INPUT_2), NTH_1(__OR_3__INPUT_1))
#define __OR_3__OUTPUT_1(__OR_3__INPUT_1, __OR_3__INPUT_2, __OR_3__INPUT_3) OUTPUT(NTH_1(__OR_3__OR_2(__OR_3__INPUT_1, __OR_3__INPUT_2, __OR_3__INPUT_3)))
#define OR_3(__OR_3__INPUT_1, __OR_3__INPUT_2, __OR_3__INPUT_3) __OR_3__OUTPUT_1(__OR_3__INPUT_1, __OR_3__INPUT_2, __OR_3__INPUT_3)

#define __wrapped_sum_8__sum_8_1(__wrapped_sum_8__INPUT_1, __wrapped_sum_8__INPUT_2, __wrapped_sum_8__INPUT_3, __wrapped_sum_8__INPUT_4, __wrapped_sum_8__INPUT_5, __wrapped_sum_8__INPUT_6, __wrapped_sum_8__INPUT_7, __wrapped_sum_8__INPUT_8, __wrapped_sum_8__INPUT_9, __wrapped_sum_8__INPUT_10, __wrapped_sum_8__INPUT_11, __wrapped_sum_8__INPUT_12, __wrapped_sum_8__INPUT_13, __wrapped_sum_8__INPUT_14, __wrapped_sum_8__INPUT_15, __wrapped_sum_8__INPUT_16, __wrapped_sum_8__INPUT_17) sum_8(NTH_1(__wrapped_sum_8__INPUT_1), NTH_1(__wrapped_sum_8__INPUT_2), NTH_1(__wrapped_sum_8__INPUT_3), NTH_1(__wrapped_sum_8__INPUT_4), NTH_1(__wrapped_sum_8__INPUT_5), NTH_1(__wrapped_sum_8__INPUT_6), NTH_1(__wrapped_sum_8__INPUT_7), NTH_1(__wrapped_sum_8__INPUT_8), NTH_1(__wrapped_sum_8__INPUT_9), NTH_1(__wrapped_sum_8__INPUT_10), NTH_1(__wrapped_sum_8__INPUT_11), NTH_1(__wrapped_sum_8__INPUT_12), NTH_1(__wrapped_sum_8__INPUT_13), NTH_1(__wrapped_sum_8__INPUT_14), NTH_1(__wrapped_sum_8__INPUT_15), NTH_1(__wrapped_sum_8__INPUT_16), NTH_1(__wrapped_sum_8__INPUT_17))
#define __wrapped_sum_8__OUTPUT_1(__wrapped_sum_8__INPUT_1, __wrapped_sum_8__INPUT_2, __wrapped_sum_8__INPUT_3, __wrapped_sum_8__INPUT_4, __wrapped_sum_8__INPUT_5, __wrapped_sum_8__INPUT_6, __wrapped_sum_8__INPUT_7, __wrapped_sum_8__INPUT_8, __wrapped_sum_8__INPUT_9, __wrapped_sum_8__INPUT_10, __wrapped_sum_8__INPUT_11, __wrapped_sum_8__INPUT_12, __wrapped_sum_8__INPUT_13, __wrapped_sum_8__INPUT_14, __wrapped_sum_8__INPUT_15, __wrapped_sum_8__INPUT_16, __wrapped_sum_8__INPUT_17) OUTPUT(NTH_1(__wrapped_sum_8__sum_8_1(__wrapped_sum_8__INPUT_1, __wrapped_sum_8__INPUT_2, __wrapped_sum_8__INPUT_3, __wrapped_sum_8__INPUT_4, __wrapped_sum_8__INPUT_5, __wrapped_sum_8__INPUT_6, __wrapped_sum_8__INPUT_7, __wrapped_sum_8__INPUT_8, __wrapped_sum_8__INPUT_9, __wrapped_sum_8__INPUT_10, __wrapped_sum_8__INPUT_11, __wrapped_sum_8__INPUT_12, __wrapped_sum_8__INPUT_13, __wrapped_sum_8__INPUT_14, __wrapped_sum_8__INPUT_15, __wrapped_sum_8__INPUT_16, __wrapped_sum_8__INPUT_17)))
#define __wrapped_sum_8__OUTPUT_2(__wrapped_sum_8__INPUT_1, __wrapped_sum_8__INPUT_2, __wrapped_sum_8__INPUT_3, __wrapped_sum_8__INPUT_4, __wrapped_sum_8__INPUT_5, __wrapped_sum_8__INPUT_6, __wrapped_sum_8__INPUT_7, __wrapped_sum_8__INPUT_8, __wrapped_sum_8__INPUT_9, __wrapped_sum_8__INPUT_10, __wrapped_sum_8__INPUT_11, __wrapped_sum_8__INPUT_12, __wrapped_sum_8__INPUT_13, __wrapped_sum_8__INPUT_14, __wrapped_sum_8__INPUT_15, __wrapped_sum_8__INPUT_16, __wrapped_sum_8__INPUT_17) OUTPUT(NTH_2(__wrapped_sum_8__sum_8_1(__wrapped_sum_8__INPUT_1, __wrapped_sum_8__INPUT_2, __wrapped_sum_8__INPUT_3, __wrapped_sum_8__INPUT_4, __wrapped_sum_8__INPUT_5, __wrapped_sum_8__INPUT_6, __wrapped_sum_8__INPUT_7, __wrapped_sum_8__INPUT_8, __wrapped_sum_8__INPUT_9, __wrapped_sum_8__INPUT_10, __wrapped_sum_8__INPUT_11, __wrapped_sum_8__INPUT_12, __wrapped_sum_8__INPUT_13, __wrapped_sum_8__INPUT_14, __wrapped_sum_8__INPUT_15, __wrapped_sum_8__INPUT_16, __wrapped_sum_8__INPUT_17)))
#define __wrapped_sum_8__OUTPUT_3(__wrapped_sum_8__INPUT_1, __wrapped_sum_8__INPUT_2, __wrapped_sum_8__INPUT_3, __wrapped_sum_8__INPUT_4, __wrapped_sum_8__INPUT_5, __wrapped_sum_8__INPUT_6, __wrapped_sum_8__INPUT_7, __wrapped_sum_8__INPUT_8, __wrapped_sum_8__INPUT_9, __wrapped_sum_8__INPUT_10, __wrapped_sum_8__INPUT_11, __wrapped_sum_8__INPUT_12, __wrapped_sum_8__INPUT_13, __wrapped_sum_8__INPUT_14, __wrapped_sum_8__INPUT_15, __wrapped_sum_8__INPUT_16, __wrapped_sum_8__INPUT_17) OUTPUT(NTH_3(__wrapped_sum_8__sum_8_1(__wrapped_sum_8__INPUT_1, __wrapped_sum_8__INPUT_2, __wrapped_sum_8__INPUT_3, __wrapped_sum_8__INPUT_4, __wrapped_sum_8__INPUT_5, __wrapped_sum_8__INPUT_6, __wrapped_sum_8__INPUT_7, __wrapped_sum_8__INPUT_8, __wrapped_sum_8__INPUT_9, __wrapped_sum_8__INPUT_10, __wrapped_sum_8__INPUT_11, __wrapped_sum_8__INPUT_12, __wrapped_sum_8__INPUT_13, __wrapped_sum_8__INPUT_14, __wrapped_sum_8__INPUT_15, __wrapped_sum_8__INPUT_16, __wrapped_sum_8__INPUT_17)))
#define __wrapped_sum_8__OUTPUT_4(__wrapped_sum_8__INPUT_1, __wrapped_sum_8__INPUT_2, __wrapped_sum_8__INPUT_3, __wrapped_sum_8__INPUT_4, __wrapped_sum_8__INPUT_5, __wrapped_sum_8__INPUT_6, __wrapped_sum_8__INPUT_7, __wrapped_sum_8__INPUT_8, __wrapped_sum_8__INPUT_9, __wrapped_sum_8__INPUT_10, __wrapped_sum_8__INPUT_11, __wrapped_sum_8__INPUT_12, __wrapped_sum_8__INPUT_13, __wrapped_sum_8__INPUT_14, __wrapped_sum_8__INPUT_15, __wrapped_sum_8__INPUT_16, __wrapped_sum_8__INPUT_17) OUTPUT(NTH_4(__wrapped_sum_8__sum_8_1(__wrapped_sum_8__INPUT_1, __wrapped_sum_8__INPUT_2, __wrapped_sum_8__INPUT_3, __wrapped_sum_8__INPUT_4, __wrapped_sum_8__INPUT_5, __wrapped_sum_8__INPUT_6, __wrapped_sum_8__INPUT_7, __wrapped_sum_8__INPUT_8, __wrapped_sum_8__INPUT_9, __wrapped_sum_8__INPUT_10, __wrapped_sum_8__INPUT_11, __wrapped_sum_8__INPUT_12, __wrapped_sum_8__INPUT_13, __wrapped_sum_8__INPUT_14, __wrapped_sum_8__INPUT_15, __wrapped_sum_8__INPUT_16, __wrapped_sum_8__INPUT_17)))
#define __wrapped_sum_8__OUTPUT_5(__wrapped_sum_8__INPUT_1, __wrapped_sum_8__INPUT_2, __wrapped_sum_8__INPUT_3, __wrapped_sum_8__INPUT_4, __wrapped_sum_8__INPUT_5, __wrapped_sum_8__INPUT_6, __wrapped_sum_8__INPUT_7, __wrapped_sum_8__INPUT_8, __wrapped_sum_8__INPUT_9, __wrapped_sum_8__INPUT_10, __wrapped_sum_8__INPUT_11, __wrapped_sum_8__INPUT_12, __wrapped_sum_8__INPUT_13, __wrapped_sum_8__INPUT_14, __wrapped_sum_8__INPUT_15, __wrapped_sum_8__INPUT_16, __wrapped_sum_8__INPUT_17) OUTPUT(NTH_5(__wrapped_sum_8__sum_8_1(__wrapped_sum_8__INPUT_1, __wrapped_sum_8__INPUT_2, __wrapped_sum_8__INPUT_3, __wrapped_sum_8__INPUT_4, __wrapped_sum_8__INPUT_5, __wrapped_sum_8__INPUT_6, __wrapped_sum_8__INPUT_7, __wrapped_sum_8__INPUT_8, __wrapped_sum_8__INPUT_9, __wrapped_sum_8__INPUT_10, __wrapped_sum_8__INPUT_11, __wrapped_sum_8__INPUT_12, __wrapped_sum_8__INPUT_13, __wrapped_sum_8__INPUT_14, __wrapped_sum_8__INPUT_15, __wrapped_sum_8__INPUT_16, __wrapped_sum_8__INPUT_17)))
#define __wrapped_sum_8__OUTPUT_6(__wrapped_sum_8__INPUT_1, __wrapped_sum_8__INPUT_2, __wrapped_sum_8__INPUT_3, __wrapped_sum_8__INPUT_4, __wrapped_sum_8__INPUT_5, __wrapped_sum_8__INPUT_6, __wrapped_sum_8__INPUT_7, __wrapped_sum_8__INPUT_8, __wrapped_sum_8__INPUT_9, __wrapped_sum_8__INPUT_10, __wrapped_sum_8__INPUT_11, __wrapped_sum_8__INPUT_12, __wrapped_sum_8__INPUT_13, __wrapped_sum_8__INPUT_14, __wrapped_sum_8__INPUT_15, __wrapped_sum_8__INPUT_16, __wrapped_sum_8__INPUT_17) OUTPUT(NTH_6(__wrapped_sum_8__sum_8_1(__wrapped_sum_8__INPUT_1, __wrapped_sum_8__INPUT_2, __wrapped_sum_8__INPUT_3, __wrapped_sum_8__INPUT_4, __wrapped_sum_8__INPUT_5, __wrapped_sum_8__INPUT_6, __wrapped_sum_8__INPUT_7, __wrapped_sum_8__INPUT_8, __wrapped_sum_8__INPUT_9, __wrapped_sum_8__INPUT_10, __wrapped_sum_8__INPUT_11, __wrapped_sum_8__INPUT_12, __wrapped_sum_8__INPUT_13, __wrapped_sum_8__INPUT_14, __wrapped_sum_8__INPUT_15, __wrapped_sum_8__INPUT_16, __wrapped_sum_8__INPUT_17)))
#define __wrapped_sum_8__OUTPUT_7(__wrapped_sum_8__INPUT_1, __wrapped_sum_8__INPUT_2, __wrapped_sum_8__INPUT_3, __wrapped_sum_8__INPUT_4, __wrapped_sum_8__INPUT_5, __wrapped_sum_8__INPUT_6, __wrapped_sum_8__INPUT_7, __wrapped_sum_8__INPUT_8, __wrapped_sum_8__INPUT_9, __wrapped_sum_8__INPUT_10, __wrapped_sum_8__INPUT_11, __wrapped_sum_8__INPUT_12, __wrapped_sum_8__INPUT_13, __wrapped_sum_8__INPUT_14, __wrapped_sum_8__INPUT_15, __wrapped_sum_8__INPUT_16, __wrapped_sum_8__INPUT_17) OUTPUT(NTH_7(__wrapped_sum_8__sum_8_1(__wrapped_sum_8__INPUT_1, __wrapped_sum_8__INPUT_2, __wrapped_sum_8__INPUT_3, __wrapped_sum_8__INPUT_4, __wrapped_sum_8__INPUT_5, __wrapped_sum_8__INPUT_6, __wrapped_sum_8__INPUT_7, __wrapped_sum_8__INPUT_8, __wrapped_sum_8__INPUT_9, __wrapped_sum_8__INPUT_10, __wrapped_sum_8__INPUT_11, __wrapped_sum_8__INPUT_12, __wrapped_sum_8__INPUT_13, __wrapped_sum_8__INPUT_14, __wrapped_sum_8__INPUT_15, __wrapped_sum_8__INPUT_16, __wrapped_sum_8__INPUT_17)))
#define __wrapped_sum_8__OUTPUT_8(__wrapped_sum_8__INPUT_1, __wrapped_sum_8__INPUT_2, __wrapped_sum_8__INPUT_3, __wrapped_sum_8__INPUT_4, __wrapped_sum_8__INPUT_5, __wrapped_sum_8__INPUT_6, __wrapped_sum_8__INPUT_7, __wrapped_sum_8__INPUT_8, __wrapped_sum_8__INPUT_9, __wrapped_sum_8__INPUT_10, __wrapped_sum_8__INPUT_11, __wrapped_sum_8__INPUT_12, __wrapped_sum_8__INPUT_13, __wrapped_sum_8__INPUT_14, __wrapped_sum_8__INPUT_15, __wrapped_sum_8__INPUT_16, __wrapped_sum_8__INPUT_17) OUTPUT(NTH_8(__wrapped_sum_8__sum_8_1(__wrapped_sum_8__INPUT_1, __wrapped_sum_8__INPUT_2, __wrapped_sum_8__INPUT_3, __wrapped_sum_8__INPUT_4, __wrapped_sum_8__INPUT_5, __wrapped_sum_8__INPUT_6, __wrapped_sum_8__INPUT_7, __wrapped_sum_8__INPUT_8, __wrapped_sum_8__INPUT_9, __wrapped_sum_8__INPUT_10, __wrapped_sum_8__INPUT_11, __wrapped_sum_8__INPUT_12, __wrapped_sum_8__INPUT_13, __wrapped_sum_8__INPUT_14, __wrapped_sum_8__INPUT_15, __wrapped_sum_8__INPUT_16, __wrapped_sum_8__INPUT_17)))
#define __wrapped_sum_8__OUTPUT_9(__wrapped_sum_8__INPUT_1, __wrapped_sum_8__INPUT_2, __wrapped_sum_8__INPUT_3, __wrapped_sum_8__INPUT_4, __wrapped_sum_8__INPUT_5, __wrapped_sum_8__INPUT_6, __wrapped_sum_8__INPUT_7, __wrapped_sum_8__INPUT_8, __wrapped_sum_8__INPUT_9, __wrapped_sum_8__INPUT_10, __wrapped_sum_8__INPUT_11, __wrapped_sum_8__INPUT_12, __wrapped_sum_8__INPUT_13, __wrapped_sum_8__INPUT_14, __wrapped_sum_8__INPUT_15, __wrapped_sum_8__INPUT_16, __wrapped_sum_8__INPUT_17) OUTPUT(NTH_9(__wrapped_sum_8__sum_8_1(__wrapped_sum_8__INPUT_1, __wrapped_sum_8__INPUT_2, __wrapped_sum_8__INPUT_3, __wrapped_sum_8__INPUT_4, __wrapped_sum_8__INPUT_5, __wrapped_sum_8__INPUT_6, __wrapped_sum_8__INPUT_7, __wrapped_sum_8__INPUT_8, __wrapped_sum_8__INPUT_9, __wrapped_sum_8__INPUT_10, __wrapped_sum_8__INPUT_11, __wrapped_sum_8__INPUT_12, __wrapped_sum_8__INPUT_13, __wrapped_sum_8__INPUT_14, __wrapped_sum_8__INPUT_15, __wrapped_sum_8__INPUT_16, __wrapped_sum_8__INPUT_17)))
#define wrapped_sum_8(__wrapped_sum_8__INPUT_1, __wrapped_sum_8__INPUT_2, __wrapped_sum_8__INPUT_3, __wrapped_sum_8__INPUT_4, __wrapped_sum_8__INPUT_5, __wrapped_sum_8__INPUT_6, __wrapped_sum_8__INPUT_7, __wrapped_sum_8__INPUT_8, __wrapped_sum_8__INPUT_9, __wrapped_sum_8__INPUT_10, __wrapped_sum_8__INPUT_11, __wrapped_sum_8__INPUT_12, __wrapped_sum_8__INPUT_13, __wrapped_sum_8__INPUT_14, __wrapped_sum_8__INPUT_15, __wrapped_sum_8__INPUT_16, __wrapped_sum_8__INPUT_17) __wrapped_sum_8__OUTPUT_1(__wrapped_sum_8__INPUT_1, __wrapped_sum_8__INPUT_2, __wrapped_sum_8__INPUT_3, __wrapped_sum_8__INPUT_4, __wrapped_sum_8__INPUT_5, __wrapped_sum_8__INPUT_6, __wrapped_sum_8__INPUT_7, __wrapped_sum_8__INPUT_8, __wrapped_sum_8__INPUT_9, __wrapped_sum_8__INPUT_10, __wrapped_sum_8__INPUT_11, __wrapped_sum_8__INPUT_12, __wrapped_sum_8__INPUT_13, __wrapped_sum_8__INPUT_14, __wrapped_sum_8__INPUT_15, __wrapped_sum_8__INPUT_16, __wrapped_sum_8__INPUT_17), __wrapped_sum_8__OUTPUT_2(__wrapped_sum_8__INPUT_1, __wrapped_sum_8__INPUT_2, __wrapped_sum_8__INPUT_3, __wrapped_sum_8__INPUT_4, __wrapped_sum_8__INPUT_5, __wrapped_sum_8__INPUT_6, __wrapped_sum_8__INPUT_7, __wrapped_sum_8__INPUT_8, __wrapped_sum_8__INPUT_9, __wrapped_sum_8__INPUT_10, __wrapped_sum_8__INPUT_11, __wrapped_sum_8__INPUT_12, __wrapped_sum_8__INPUT_13, __wrapped_sum_8__INPUT_14, __wrapped_sum_8__INPUT_15, __wrapped_sum_8__INPUT_16, __wrapped_sum_8__INPUT_17), __wrapped_sum_8__OUTPUT_3(__wrapped_sum_8__INPUT_1, __wrapped_sum_8__INPUT_2, __wrapped_sum_8__INPUT_3, __wrapped_sum_8__INPUT_4, __wrapped_sum_8__INPUT_5, __wrapped_sum_8__INPUT_6, __wrapped_sum_8__INPUT_7, __wrapped_sum_8__INPUT_8, __wrapped_sum_8__INPUT_9, __wrapped_sum_8__INPUT_10, __wrapped_sum_8__INPUT_11, __wrapped_sum_8__INPUT_12, __wrapped_sum_8__INPUT_13, __wrapped_sum_8__INPUT_14, __wrapped_sum_8__INPUT_15, __wrapped_sum_8__INPUT_16, __wrapped_sum_8__INPUT_17), __wrapped_sum_8__OUTPUT_4(__wrapped_sum_8__INPUT_1, __wrapped_sum_8__INPUT_2, __wrapped_sum_8__INPUT_3, __wrapped_sum_8__INPUT_4, __wrapped_sum_8__INPUT_5, __wrapped_sum_8__INPUT_6, __wrapped_sum_8__INPUT_7, __wrapped_sum_8__INPUT_8, __wrapped_sum_8__INPUT_9, __wrapped_sum_8__INPUT_10, __wrapped_sum_8__INPUT_11, __wrapped_sum_8__INPUT_12, __wrapped_sum_8__INPUT_13, __wrapped_sum_8__INPUT_14, __wrapped_sum_8__INPUT_15, __wrapped_sum_8__INPUT_16, __wrapped_sum_8__INPUT_17), __wrapped_sum_8__OUTPUT_5(__wrapped_sum_8__INPUT_1, __wrapped_sum_8__INPUT_2, __wrapped_sum_8__INPUT_3, __wrapped_sum_8__INPUT_4, __wrapped_sum_8__INPUT_5, __wrapped_sum_8__INPUT_6, __wrapped_sum_8__INPUT_7, __wrapped_sum_8__INPUT_8, __wrapped_sum_8__INPUT_9, __wrapped_sum_8__INPUT_10, __wrapped_sum_8__INPUT_11, __wrapped_sum_8__INPUT_12, __wrapped_sum_8__INPUT_13, __wrapped_sum_8__INPUT_14, __wrapped_sum_8__INPUT_15, __wrapped_sum_8__INPUT_16, __wrapped_sum_8__INPUT_17), __wrapped_sum_8__OUTPUT_6(__wrapped_sum_8__INPUT_1, __wrapped_sum_8__INPUT_2, __wrapped_sum_8__INPUT_3, __wrapped_sum_8__INPUT_4, __wrapped_sum_8__INPUT_5, __wrapped_sum_8__INPUT_6, __wrapped_sum_8__INPUT_7, __wrapped_sum_8__INPUT_8, __wrapped_sum_8__INPUT_9, __wrapped_sum_8__INPUT_10, __wrapped_sum_8__INPUT_11, __wrapped_sum_8__INPUT_12, __wrapped_sum_8__INPUT_13, __wrapped_sum_8__INPUT_14, __wrapped_sum_8__INPUT_15, __wrapped_sum_8__INPUT_16, __wrapped_sum_8__INPUT_17), __wrapped_sum_8__OUTPUT_7(__wrapped_sum_8__INPUT_1, __wrapped_sum_8__INPUT_2, __wrapped_sum_8__INPUT_3, __wrapped_sum_8__INPUT_4, __wrapped_sum_8__INPUT_5, __wrapped_sum_8__INPUT_6, __wrapped_sum_8__INPUT_7, __wrapped_sum_8__INPUT_8, __wrapped_sum_8__INPUT_9, __wrapped_sum_8__INPUT_10, __wrapped_sum_8__INPUT_11, __wrapped_sum_8__INPUT_12, __wrapped_sum_8__INPUT_13, __wrapped_sum_8__INPUT_14, __wrapped_sum_8__INPUT_15, __wrapped_sum_8__INPUT_16, __wrapped_sum_8__INPUT_17), __wrapped_sum_8__OUTPUT_8(__wrapped_sum_8__INPUT_1, __wrapped_sum_8__INPUT_2, __wrapped_sum_8__INPUT_3, __wrapped_sum_8__INPUT_4, __wrapped_sum_8__INPUT_5, __wrapped_sum_8__INPUT_6, __wrapped_sum_8__INPUT_7, __wrapped_sum_8__INPUT_8, __wrapped_sum_8__INPUT_9, __wrapped_sum_8__INPUT_10, __wrapped_sum_8__INPUT_11, __wrapped_sum_8__INPUT_12, __wrapped_sum_8__INPUT_13, __wrapped_sum_8__INPUT_14, __wrapped_sum_8__INPUT_15, __wrapped_sum_8__INPUT_16, __wrapped_sum_8__INPUT_17), __wrapped_sum_8__OUTPUT_9(__wrapped_sum_8__INPUT_1, __wrapped_sum_8__INPUT_2, __wrapped_sum_8__INPUT_3, __wrapped_sum_8__INPUT_4, __wrapped_sum_8__INPUT_5, __wrapped_sum_8__INPUT_6, __wrapped_sum_8__INPUT_7, __wrapped_sum_8__INPUT_8, __wrapped_sum_8__INPUT_9, __wrapped_sum_8__INPUT_10, __wrapped_sum_8__INPUT_11, __wrapped_sum_8__INPUT_12, __wrapped_sum_8__INPUT_13, __wrapped_sum_8__INPUT_14, __wrapped_sum_8__INPUT_15, __wrapped_sum_8__INPUT_16, __wrapped_sum_8__INPUT_17)

#define test__all test_sum && test_sum_8 && test_wrapped_sum_8

int main(void) {
	printf("tests:\n");
	int i;	printf("\tsum:\n");
	int tests_sum__inputs[8][3] = {{0, 0, 0}, {0, 0, 1}, {0, 1, 0}, {1, 0, 0}, {0, 1, 1}, {1, 1, 0}, {1, 0, 1}, {1, 1, 1}};
	int tests_sum__outputs[8][3] = {{0, 0}, {0, 1}, {0, 1}, {0, 1}, {1, 0}, {1, 0}, {1, 0}, {1, 1}};
	for (i = 0; i < 8; i++) {
		int output[2] = {sum(tests_sum__inputs[i][0], tests_sum__inputs[i][1], tests_sum__inputs[i][2])};
		printf("\t\t[%d, %d, %d] => [%d, %d]: %s\n", tests_sum__inputs[i][0], tests_sum__inputs[i][1], tests_sum__inputs[i][2], tests_sum__outputs[i][0], tests_sum__outputs[i][1], ((tests_sum__outputs[i][0] == output[0]) && (tests_sum__outputs[i][1] == output[1])) ? "passed" : "failed");
	}
	printf("\tsum_8:\n");
	int tests_sum_8__inputs[7][17] = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0}, {0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0}, {0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0}};
	int tests_sum_8__outputs[7][17] = {{0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 1}, {0, 0, 0, 0, 0, 0, 0, 0, 1}, {0, 0, 0, 0, 0, 0, 0, 1, 0}, {0, 0, 0, 0, 0, 0, 0, 1, 0}, {0, 0, 0, 0, 0, 0, 0, 1, 0}, {0, 0, 0, 0, 0, 0, 1, 0, 0}};
	for (i = 0; i < 7; i++) {
		int output[9] = {sum_8(tests_sum_8__inputs[i][0], tests_sum_8__inputs[i][1], tests_sum_8__inputs[i][2], tests_sum_8__inputs[i][3], tests_sum_8__inputs[i][4], tests_sum_8__inputs[i][5], tests_sum_8__inputs[i][6], tests_sum_8__inputs[i][7], tests_sum_8__inputs[i][8], tests_sum_8__inputs[i][9], tests_sum_8__inputs[i][10], tests_sum_8__inputs[i][11], tests_sum_8__inputs[i][12], tests_sum_8__inputs[i][13], tests_sum_8__inputs[i][14], tests_sum_8__inputs[i][15], tests_sum_8__inputs[i][16])};
		printf("\t\t[%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d] => [%d, %d, %d, %d, %d, %d, %d, %d, %d]: %s\n", tests_sum_8__inputs[i][0], tests_sum_8__inputs[i][1], tests_sum_8__inputs[i][2], tests_sum_8__inputs[i][3], tests_sum_8__inputs[i][4], tests_sum_8__inputs[i][5], tests_sum_8__inputs[i][6], tests_sum_8__inputs[i][7], tests_sum_8__inputs[i][8], tests_sum_8__inputs[i][9], tests_sum_8__inputs[i][10], tests_sum_8__inputs[i][11], tests_sum_8__inputs[i][12], tests_sum_8__inputs[i][13], tests_sum_8__inputs[i][14], tests_sum_8__inputs[i][15], tests_sum_8__inputs[i][16], tests_sum_8__outputs[i][0], tests_sum_8__outputs[i][1], tests_sum_8__outputs[i][2], tests_sum_8__outputs[i][3], tests_sum_8__outputs[i][4], tests_sum_8__outputs[i][5], tests_sum_8__outputs[i][6], tests_sum_8__outputs[i][7], tests_sum_8__outputs[i][8], ((tests_sum_8__outputs[i][0] == output[0]) && (tests_sum_8__outputs[i][1] == output[1]) && (tests_sum_8__outputs[i][2] == output[2]) && (tests_sum_8__outputs[i][3] == output[3]) && (tests_sum_8__outputs[i][4] == output[4]) && (tests_sum_8__outputs[i][5] == output[5]) && (tests_sum_8__outputs[i][6] == output[6]) && (tests_sum_8__outputs[i][7] == output[7]) && (tests_sum_8__outputs[i][8] == output[8])) ? "passed" : "failed");
	}
	printf("\twrapped_sum_8:\n");
	int tests_wrapped_sum_8__inputs[7][17] = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0}, {0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0}, {0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0}};
	int tests_wrapped_sum_8__outputs[7][17] = {{0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 1}, {0, 0, 0, 0, 0, 0, 0, 0, 1}, {0, 0, 0, 0, 0, 0, 0, 1, 0}, {0, 0, 0, 0, 0, 0, 0, 1, 0}, {0, 0, 0, 0, 0, 0, 0, 1, 0}, {0, 0, 0, 0, 0, 0, 1, 0, 0}};
	for (i = 0; i < 7; i++) {
		int output[9] = {wrapped_sum_8(tests_wrapped_sum_8__inputs[i][0], tests_wrapped_sum_8__inputs[i][1], tests_wrapped_sum_8__inputs[i][2], tests_wrapped_sum_8__inputs[i][3], tests_wrapped_sum_8__inputs[i][4], tests_wrapped_sum_8__inputs[i][5], tests_wrapped_sum_8__inputs[i][6], tests_wrapped_sum_8__inputs[i][7], tests_wrapped_sum_8__inputs[i][8], tests_wrapped_sum_8__inputs[i][9], tests_wrapped_sum_8__inputs[i][10], tests_wrapped_sum_8__inputs[i][11], tests_wrapped_sum_8__inputs[i][12], tests_wrapped_sum_8__inputs[i][13], tests_wrapped_sum_8__inputs[i][14], tests_wrapped_sum_8__inputs[i][15], tests_wrapped_sum_8__inputs[i][16])};
		printf("\t\t[%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d] => [%d, %d, %d, %d, %d, %d, %d, %d, %d]: %s\n", tests_wrapped_sum_8__inputs[i][0], tests_wrapped_sum_8__inputs[i][1], tests_wrapped_sum_8__inputs[i][2], tests_wrapped_sum_8__inputs[i][3], tests_wrapped_sum_8__inputs[i][4], tests_wrapped_sum_8__inputs[i][5], tests_wrapped_sum_8__inputs[i][6], tests_wrapped_sum_8__inputs[i][7], tests_wrapped_sum_8__inputs[i][8], tests_wrapped_sum_8__inputs[i][9], tests_wrapped_sum_8__inputs[i][10], tests_wrapped_sum_8__inputs[i][11], tests_wrapped_sum_8__inputs[i][12], tests_wrapped_sum_8__inputs[i][13], tests_wrapped_sum_8__inputs[i][14], tests_wrapped_sum_8__inputs[i][15], tests_wrapped_sum_8__inputs[i][16], tests_wrapped_sum_8__outputs[i][0], tests_wrapped_sum_8__outputs[i][1], tests_wrapped_sum_8__outputs[i][2], tests_wrapped_sum_8__outputs[i][3], tests_wrapped_sum_8__outputs[i][4], tests_wrapped_sum_8__outputs[i][5], tests_wrapped_sum_8__outputs[i][6], tests_wrapped_sum_8__outputs[i][7], tests_wrapped_sum_8__outputs[i][8], ((tests_wrapped_sum_8__outputs[i][0] == output[0]) && (tests_wrapped_sum_8__outputs[i][1] == output[1]) && (tests_wrapped_sum_8__outputs[i][2] == output[2]) && (tests_wrapped_sum_8__outputs[i][3] == output[3]) && (tests_wrapped_sum_8__outputs[i][4] == output[4]) && (tests_wrapped_sum_8__outputs[i][5] == output[5]) && (tests_wrapped_sum_8__outputs[i][6] == output[6]) && (tests_wrapped_sum_8__outputs[i][7] == output[7]) && (tests_wrapped_sum_8__outputs[i][8] == output[8])) ? "passed" : "failed");
	}
	return 0;
}