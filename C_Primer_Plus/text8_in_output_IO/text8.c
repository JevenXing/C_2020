/*
 * @Description    :
 * @Date           : 2020-06-02 16:39:06
 * @LastEditors    : JEVEN
 * @LastEditTime   : 2020-06-03 15:12:39
 * @FilePath       : \C_2020\C_Primer_Plus\text8_in_output\text8.c
 */

#include <ctype.h>   //字符分析函数
#include <math.h>    //科学运算
#include <stdbool.h> //bool类型
#include <stdio.h>   //系统IO
#include <string.h>  //字符串处理
void stop() {
    printf("\n等待输入字符结束当前程序...");
    setbuf(stdin, NULL);
    getchar();
}
void Log() { printf("log:___________program start!\n"); }
void echo() { //输入验证练习
    char ch; 
    while ((ch = getchar()) != '#') { //复习:运算符优先级
        //!=运算符先于赋值符,getchar将缓冲区内字符存入 ch 然后将ch的值与'#'对比
        putchar(ch);
    }
}

int main() {
    Log();
    echo();
    stop();
    return 0;
}
