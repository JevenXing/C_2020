#include <math.h>
#include <stdio.h>
#include <stdbool.h>//包含了_Bool typedef _Bool bool

void kongyuju() { //循环 空语句
    int x;
    while (scanf("%d", &x) == 1) //跳过输入到第1个非空白字符或数字
        printf("观察x=%d\n", x);
}
void FuDianShuBiJiao() { // fabs :浮点值的绝对值（即，没有代数符 号的值）
    if (1 / 3L == 1 / 3L)
        printf("√\n");
    else {
        printf("×\n");
    }

    if (fabs(3.33) == fabs(3.33))
        printf("√\n");
    else {
        printf("×\n");
    }
}
int main() {
    // kongyuju();
    FuDianShuBiJiao();
    
    return 0;
}