/*
 * @Description    :
 * @Date           : 2020-06-08 00:14:14
 * @LastEditors    : JEVEN
 * @LastEditTime   : 2020-06-08 01:18:25
 * @FilePath       : \C_2020\C_Primer_Plus\5Expression statement\pp.c
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

int main() {

    Log();
    int a = 12, c = 0;
    c = a++ + ++a + a++;
    printf("%d.\n", c);
    stop();
    return 0;
}