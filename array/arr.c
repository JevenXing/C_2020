/*
 * @Description    :
 * @Date           : 2020-06-08 09:28:17
 * @LastEditors    : JEVEN
 * @LastEditTime   : 2020-06-08 15:55:20
 * @FilePath       : \C_2020\array\arr.c
 */
#include <ctype.h>   //字符分析函数
#include <math.h>    //科学运算
#include <stdbool.h> //bool类型
#include <stdio.h>   //系统IO
#include <stdlib.h>  //
#include <string.h>  //字符串处理
void stop() {
    printf("\n任意键结束当前程序...");
    setbuf(stdin, NULL);
    getchar();
}

void Log() { printf("log:program start!\n"); }

void arrZhiZhen() { //一维数组
    int a[] = {1, 2, 3, 4, 5};
    int *b = a + 4;
    printf("%d,%d,%d,%d,%d \n", a[0], a[1], a[2], a[3], a[4]);
    printf("%p,%p,%p,%p,%p\n,", &a[0], &a[1], &a[2], &a[3], &a[4]);
    printf("%p,%p,%p,%d\n", a, a + 1, &a[1], *b);
}
//二维数组 声明
void tuoarr() {
    int a[2][3];
    int b[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    //二维数组中的元素是通过使用下标（即数组的行索引和列索引）来访问
    int *c = b[2, 1];
    printf("====%d\n", *c);
}
int main() {
    Log();
    // arrZhiZhen();
    tuoarr();
    stop();
    return 0;
}