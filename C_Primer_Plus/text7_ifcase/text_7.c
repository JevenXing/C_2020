/*
 * @Description    :
 * @Date           : 2020-04-05 22:13:11
 * @LastEditors    : JEVEN
 * @LastEditTime   : 2020-04-06 01:57:59
 * @FilePath       : \C_2020\C_Primer_Plus\text7_ifcase\text_7.c
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
void text_2();
void text_1();
void text_3();
void text_4();

int main() {
    // text_1();
    // text_2();
    // text_3();
    text_4();
    stop();
    return 0;
}
/**
 * @description: 使用if else语句编写一个程序读取输入，读到#停止。用感叹号替换句
号，用两个感叹号替换原来的感叹号，最后报告进行了多少次替换。
 * @param {type}
 * @return:
 */
void text_4() {
    char ch;
    int juhao_gantanhao;
    printf("输入字符");
    while (1) {
        if ((ch = getchar()) == '#') {
            break;
        } else {
            if (ch == '.') {
                ch = '!';
                juhao_gantanhao++;
            }
            printf("%c", ch);
        }
    }
    printf("\n进行了%d次替换.", juhao_gantanhao);
}
/**
 * @description: 编写一个程序，读取整数直到用户输入 0。输入结束后，程序应报告
用户输入的偶数（不包括 0）个数、这些偶数的平均值、输入的奇数个数及
其奇数的平均值。
 * @param {type}
 * @return:
 */
void text_3() {
    int num;
    double ou, oup, outemp;
    double ji, jip, jitemp;
    printf("输入一串数字:");
    while (scanf("%d", &num), num != 0) {
        (num % 2 == 0) ? (ou++, outemp += num, oup = outemp / ou)
                       : (ji++, jitemp += num, jip = jitemp / ji);
    }
    printf("%d偶数\t%.2lf平均数\t%d奇数\t%.2lf平均数\n", (int)ou, oup, (int)ji,
           jip);
}
/**
 * @description: 编写一个程序读取输入，读到#字符停止。程序要打印每个输入的字符
 * 以及对应的ASCII码（十进制）。一行打印8个字符。建议:使用字符计数
 * 和求模运算符（%）在每8个循环周期时打印一个换行符。
 * @param {type}
 * @return:
 */
void text_2() {
    char ch;
    int count = 0;
    printf("输入一段字符,#号结束.");
    while ((ch = getchar()) != '#') {

        (count == 8) ? (count = 0, printf("\n"))
                     : (count++, printf("%c(%d)\t", ch, ch));
    }
}
/**
 * @description: //编写一个程序读取输入，读到#字符停止，然后报告读取的空格数、
 * 换行符数和所有其他字符的数量。
 * @param {type}
 * @return:
 */
void text_1() {
    char ch;
    int kongge, huanhang, qita;
    kongge = huanhang = qita = 0;
    printf("输入一段字符,以#结尾");
    while ((ch = getchar()) != '#') {
        if (ch == ' ') {
            kongge++;
            continue;
        } else if (ch == '\n') {
            huanhang++;
            continue;
        } else if (!isspace(ch)) { //所有可打印字符
            qita++;
        }
    }
    printf("这段字符有%d行,有%d空格,有%d其他字符", huanhang, kongge, qita);
}