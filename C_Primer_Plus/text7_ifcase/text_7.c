/*
 * @Description    :第七章习题
 * @Date           : 2020-04-05 22:13:11
 * @LastEditors    : JEVEN
 * @LastEditTime   : 2020-04-07 16:03:28
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
void text_6();
void text_7();

int main() {
    // text_1();
    // text_2();
    // text_3();
    // text_4();
    // text_6();
    text_7();

    stop();
    return 0;
}
/**
 * @description: 编写一个程序，提示用户输入一周工作的小时数，然后打印工资总
额、税金和净收入。做如下假设：
a.基本工资 = 1000美元/小时
b.加班（超过40小时） = 1.5倍的时间
c.税率： 前300美元为15%
续150美元为20%
余下的为25%
用#define定义符号常量。不用在意是否符合当前的税法。
 * @param {type}
 * @return:
 */
void text_7() {
    const double taxRate_1 = 0.15, taxRate_2 = 0.2, taxRate_3 = 0.25;
    double h;         //工作时长
    double incomeh;   //每小时工资
    double total_num; //税前收入
    double tax_num;   //税额
    double income;    //税后收入
    // int result;
    printf("输入你的工作时长:");
    while (scanf("%f", &h) >= 1) {
        (h > 40) ? (h += (h - 40) * 1.5) : h;
        total_num = incomeh * h;
        if (total_num <= 300) {
            income -= (tax_num = (total_num * taxRate_1));
            //不到450 续150的情况 不交税
        } else if (total_num >= (300 + 150)) {
            //前300税额
            tax_num = (total_num * taxRate_1);
            //续150税额
            tax_num += 150 * taxRate_2;
            //剩余部分
            tax_num += (incomeh - 540) * taxRate_3;
            //扣税
            income -= tax_num;
        }
    }
    printf("税前工资:%.2lf,税额:%.2lf,税后工资:%.2lf", total_num, tax_num,
           income);
}
/**
 * @description: 编写程序读取输入，读到#停止，报告ei出现的次数。
注意 该程序要记录前一个字符和当前字符。用“Receive your eieio award”这
样的输入来测试。
 * @param {type}
 * @return:
 */
void text_6() {
    char ch;
    char chup = 'a';
    int ei_count;
    printf("输入一段字符:");
    while ((ch = getchar()) != '#') {
        if (chup == 'e' && ch == 'i') {
            ei_count++;
        }
        chup = ch;
    }
    printf("ei出现了%d次.", ei_count);
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