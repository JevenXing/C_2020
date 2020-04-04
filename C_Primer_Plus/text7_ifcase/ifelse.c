/*
 * @Description:
 * @Date: 2020-04-04 17:02:51
 * @LastEditors: JEVEN
 * @LastEditTime: 2020-04-04 20:07:43
 */
#include <ctype.h> //字符分析函数
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
void stop() {
    setbuf(stdin, NULL);
    printf("\n等待输入字符结束当前程序...\n");
    getchar();
}
void iszimu();
void elseif();
void charcount();
void and_az();
#define PERIOD '.'
int main() {
    // iszimu();
    // elseif();
    and_az();

    stop();
    return 0;
}
/**
 * @description: 利用范围检查 判断字符特征
 * @param {type}
 * @return:
 */
void and_az() {
    char ch;
    printf("输入一个字符:");
    ch = getchar();
    if (ch >= 'a' && ch <= 'z') {
        printf("这是一个小写字母.");
    } else {
        printf("这不是一个小写字母.");
    }
}
/**
 * @description: 计算除标点符号外的字符数量
 * @param {type}
 * @return:
 */
void charcount() {
    char ch;
    int charcount = 0;
    while ((ch = getchar()) != PERIOD) { //读取'.'之前的字符
        if (ch != '"' && ch != '\'')     //标点符号不计数
            charcount++;                 //计数
    }
    printf("There are %d non-quote characters.\n", charcount);
}
/**
 * @description: else 与 if 如何配对 else 就近配对
 * @param {type}
 * @return:
 */
void elseif() {
    int number = 12;
    if (number > 6)
        if (number < 12)
            printf("You're close!\n");
        else
            printf("Sorry, you lose a turn!\n");
}
/**
 * @description: 替换输入的字母，非字母字符保持不变
 * @param {type}
 * @return:
 */
void iszimu() {
    char ch;
    printf("输入一行字符:\n");
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {   // isalpha 函数判断是不是字母
            putchar(ch + 1); //是字母就修改
        } else {
            putchar(ch); //不是就输出原型
        }
    }
    putchar(ch); //显示下一个字符(用户输入时最后的动作,一般是换行符)
}