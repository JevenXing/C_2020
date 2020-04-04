/*
 * @Description: 嵌套循环常
 * 用于按行和列显示数据，也就是说，一个循环处理一行中的所有列，另一个
 * 循环处理所有的行。
 * @Date: 2020-03-30 21:06:52
 * @LastEditors: JEVEN
 * @LastEditTime: 2020-03-31 01:23:47
 */
#include <math.h>
#include <stdio.h>
#include <string.h>
#define ROWS 6
#define CHARS 10
/**
 * @description: 使用嵌套循环
 * @param {type}
 * @return: void
 */
void qtxh();
/**
 * @description: 依赖外部循环的嵌套循环
 * 难点:理解内外层循环各自的功能是什么
 * @param {void}
 * @return: void
 */
void ylqt();
#define SIZE 10
#define PAR 72
/**
 * @description: 通常使用循环对数组进行操作
 * @param {type}
 * @return:
 */
void forArray();
int main() {
    // qtxh();
    // ylqt();
    forArray();
    return 0;
}
void qtxh() {
    int row; //行
    char ch;
    for (row = 0; row < ROWS; row++) {           //外层循环 打印所有行
        for (ch = 'A'; ch < ('A' + CHARS); ch++) //内层循环 打印所有列
            printf("%3c", ch);
        printf("\n");
    }
}
void ylqt() {
    const int rows = 12;  //行限
    const int chars = 12; //列限
    //
    for (int i = 0; i < rows; i++) {
        for (char j = ('a' + i); j < ('a' + chars); j++) {
            printf("%2c", j - i); //内层操作当前行的列内容.
        }
        printf("\n"); //外层循环操作换行
    }
}
void forArray() {
    int index, score[SIZE];
    int sum = 0;   //合计分
    float average; //平均数
    printf("输入%d个高尔夫成绩:\n", SIZE);
    for (index = 0; index < SIZE; index++) {
        scanf("%d", &score[index]);
    }
    printf("录入的成绩如下:\b");
    for (index = 0; index < SIZE; index++) {
        printf("%05d", score[index]);
        sum += score[index];
    }
    printf("\n");
    average = (float)sum / SIZE;
    printf("总分:%d,平均分:%.2f\n", sum, average);
}