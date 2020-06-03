/*
 * @Description    :
 * @Date           : 2020-06-02 16:39:06
 * @LastEditors    : JEVEN
 * @LastEditTime   : 2020-06-04 00:05:16
 * @FilePath       : \C_2020\C_Primer_Plus\text8_in_output_IO\text8.c
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

void echo_EOF() {//EOF验证
    //键盘如何输入-1值,结束当前程序呢?
    //系统自行模拟键盘输入时的结尾标记,Ctrl+z,Unix:Ctrl+D
    int ch; // char型没有负值 char就是int 所以换成int无影响
    while ((ch = getchar()) != EOF) {
        putchar(ch);
    }
}
五千多
int main() {
    Log();
    // echo();
    echo_EOF();
    stop();
    return 0;
}
