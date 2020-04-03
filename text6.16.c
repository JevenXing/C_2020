/*
 * @Description: 6.16 编程练习
 * @Date: 2020-04-01 01:00:43
 * @LastEditors: JEVEN
 * @LastEditTime: 2020-04-01 22:55:26
 */
#include <math.h>
#include <stdio.h>
#include <string.h>
void stop_look() {
    setbuf(stdin, NULL);
    printf("\n等待输入字符结束当前程序...\n");
    getchar();
}

void a_Z_1();
void ztxh_2();
void xtxh_3();
void xtxh_4();
void xtxh_5();
void for_table_6();
void char_arr_7();
void float_ys_8();
void wx_12();
int main() {
    // a_Z_1(); 
    // ztxh_2();
    // xtxh_3();
    // xtxh_4();
    // xtxh_5();
    // for_table_6();
    // char_arr_7();
    float_ys_8(); 
    stop_look();
    return 0;
}
void wx_12(){
    const float x =1.0f;

    
}
void float_ys_8() {
    float a, b;
    do {
        setbuf(stdin,NULL);
        printf("输入两个浮点数:");
    } while (scanf("%f %f", &a, &b) != 2);

    printf("result:%f", (a - b) / (a * b));
}
/**
 * @description: 编写一个程序把一个单词读入一个字符数组中，然后倒序打印这个单
 * 词。提示：strlen()函数（第4章介绍过）可用于计算数组最后一个字符的下 标。
 * @param {type}
 * @return:
 */
void char_arr_7() {
    char string[100];
    printf("输入一段字符串:");
    scanf("%s", string);
    for (int i = strlen(string); i >= 0; i--) {
        printf("%c", string[i]);
    }
}
/**
 * @description: 编写一个程序打印一个表格，每一行打印一个整数、该数的平方、该
 * 数的立方。要求用户输入表格的上下限。使用一个for循环。
 * @param {type}
 * @return:
 */
void for_table_6() {
    //用户输入的数的上下限;
    long UpNum, DownNum;
    do {
        printf("输入最小数到最大数的区间,格式:\"12-30\"\n");
        scanf("%ld-%ld", &UpNum, &DownNum);
    } while (DownNum <= UpNum);
    printf("输入完成...\n_______________________________\n");
    for (long i = UpNum; i <= DownNum; i++) {
        printf("%ld\t平方:%ld\t立方:%ld\n", i, i * i, i * i * i);
    }
    printf("_______________________________\n");
}
/**
 * @description: 打印金字塔文本,以指定字符前后对称
 * @param {type}
 * @return:
 */
void xtxh_5() {
    int hang;           //行数
    char get_ch;        //接收字符
    char init_ch = 'A'; //初始字母
    char hang_ch;       //当前行扩展字母
    printf("输入一个字母:");
    scanf("%c", &get_ch);
    //接收字母与初始字母的差值加上自身=行数
    hang = get_ch - init_ch + 1; //根据输入字母确定行数

    for (int i = 0; i < hang; i++) { //控制行数

        hang_ch = init_ch + i; //当前行的字母

        for (int j = i; j > 0; j--) {
            printf("%-2c", hang_ch - j);
        }

        printf("%-2c", hang_ch);

        for (int j = 0; j < i; j++) {
            printf("%-2c", hang_ch - j - 1);
        }
        printf("\n");
    }
}
/**
 * @description: 打印T型文本,隔行不初始化起点
 * @param {type}
 * @return:
 */
void xtxh_4() {
    const int hang = 6, lie = 6;
    char _ch = 'A';
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j <= i; j++, _ch++) {
            printf("%-2c", _ch);
        }
        printf("\n");
    }
}
/**
 * @description: 打印T型文本,列序不变
 * @param {type}
 * @return:
 */
void xtxh_3() {
    const int hang = 5, lie = 5;
    char _ch;
    for (int i = 0; i < hang; i++) {
        for (int j = 0, _ch = 'F'; j <= i; j++, _ch++) {
            printf("%-2c", _ch);
        }
        printf("\n");
    }
}

/**
 * @description: 打印T型文本
 * @param {type}
 * @return:
 */
void ztxh_2() {
    const int hang = 5, lie = 5;
    const char fuhao = '%';
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%-2c", fuhao);
        }
        printf("\n");
    }
}
/**
 * @description: 编写一个程序，创建一个包含26个元素的数组，并在其中储存26个小
 * 写字母。然后打印数组的所有内容。
 * @param {type}
 * @return:
 */
void a_Z_1() {
    char str[26];
    char temp;
    for (int i = 0, temp = 'A'; i < 26; i++, temp++)
        str[i] = temp;
    for (int j = 0; j < 26; j++)
        printf("%c\t", str[j]);
    getchar();
}