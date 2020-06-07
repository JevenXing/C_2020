/*
 * @Description    :
 * @Date           : 2020-06-07 20:14:57
 * @LastEditors    : JEVEN
 * @LastEditTime   : 2020-06-07 20:28:16
 * @FilePath       : \C_2020\C_Primer_Plus\3data type and C\variable.c
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
    stop();
    return 0;
}