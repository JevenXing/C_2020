#include <float.h>
#include <limits.h>
#include <stdio.h>
int main() {
    int a = INT_MAX;
    int b = INT_MIN;
    long long c = LLONG_MAX;
    char d = CHAR_MAX;
    char e = CHAR_BIT; //位数

    float f = FLT_MANT_DIG; //尾数位数
    float g = FLT_DIG;      // float 最少有效数字位数 (十进制)
    float h = FLT_MAX;      // float最大正数
    float l = FLT_MIN;      //全部精度最小正数
    float m = FLT_EPSILON;
    float n = FLT_MAX_10_EXP;
    float o = FLT_MIN_10_EXP;
    printf("Some number limits for this system:\n");
    printf("Biggest int: %d\n", INT_MAX);
    printf("Smallest long long: %lld\n", LLONG_MIN);
    printf("One byte = %d bits on this system.\n", CHAR_BIT);
    printf("Largest double: %e\n", DBL_MAX);
    printf("Smallest normal float: %e\n", FLT_MIN);
    printf("float precision = %d digits\n", FLT_DIG);
    printf("float epsilon = %e\n", FLT_EPSILON);
    return 0;
}