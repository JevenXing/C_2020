/*
 * @Description    :
 * @Date           : 2020-06-02 16:39:06
 * @LastEditors    : JEVEN
 * @LastEditTime   : 2020-06-04 09:03:51
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

void echo_EOF() { // EOF验证
    //键盘如何输入-1值,结束当前程序呢?
    //系统自行模拟键盘输入时的结尾标记,Ctrl+z,Unix:Ctrl+D
    int ch; // char型没有负值 char就是int 所以换成int无影响
    while ((ch = getchar()) != EOF) {
        putchar(ch);
    }
}
void guess() {
    int guess = 1;
    char response;
    printf("从1到100选一个整数，我试着猜一下");
    printf("it.\n如果我猜对了，请用y作答。");
    printf("\n 如果它是错的 n。\n");
    printf("你的数字是 %d?\n", guess);
    while ((response = getchar()) != 'y') {
        printf("那么它是 %d?\n", ++guess);
        while (getchar() != '\n') {
            //程序会相应用户的换行符操作
            //这里是过滤首字符后面的内容
            continue;
        }
    }
    printf("我知道这个数字了 !\n");
}
int main() {
    Log();
    // echo();
    // echo_EOF();
    guess();
    stop();
    return 0;
}
