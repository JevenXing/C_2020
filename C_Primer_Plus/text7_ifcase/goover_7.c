/*
 * @Description: 第七章复习题
 * @Date: 2020-04-05 17:53:26
 * @LastEditors: JEVEN
 * @LastEditTime: 2020-04-05 20:54:16
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
void _1();
void _2();
void _6();

int main() {
    _6();
    stop();
    return 0;
}
void _6() {
    int i = 0;
    while (i < 3) {
        switch (i++) {
        case 0:
            printf("fat ");
        case 1:
            printf("hat ");
        case 2:
            printf("cat ");
        default:
            printf("Oh no!");
        }
        putchar('\n');
    }
}
void _2() {
    int weight;                       //重量 kg
    int height;                       //高 cm
    scanf("%d %d", &weight, &height); //空格分隔输入
    if (weight < 100 && height > 64) {
        if (height <= 72) {
            printf("你太矮了.\n");
        }
    } else {
        printf("你的体重\n");
    }
}
void _1() {
    int number = 10;
    char h = 'W';
    if (number >= 90 || number < 100) {
        printf("result YES\n");
    }
    (h != 'q' || h != 'k') ? printf("YES") : printf("NO");
    (number >= 1 && number <= 9 && number != 5) ? (h = 'Y') : (h = 'N');
    (number < 1 && number > 9) ? (h = 'y') : (h = 'n');
}