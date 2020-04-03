/*
 * @Description: 章节复习题and编程练习
 * @Date: 2020-03-31 01:37:51
 * @LastEditors: JEVEN
 * @LastEditTime: 2020-04-01 00:59:11
 */
#include <math.h>
#include <stdio.h>
#include <string.h>
void daole();
void Go_west();
void Go_westb();
void Go_westc();
void text9();
void arr_zhizhen();
void text14();
int main() {
    // daole();
    // Go_west();
    // Go_westb();
    // Go_westc();
    // text9();
    // arr_zhizhen();
    // text14();
    return 0;
}
void text14() {
    int k;
    for (k = 1, printf("%d: Hi!\n", k); printf("k = %d\n", k), k * k < 26;
         k += 2, printf("Now k is %d\n", k))
        printf("k is %d in the loop\n", k);
}
/**
 * @description:
 * @param {type}
 * @return:
 */
void arr_zhizhen() {
    char string[10];
    scanf("%c", string);
    // scanf("%c", &string);
    //取地址的地址
    printf("====%c", *(string));
}
/**
 * @description:熟悉循环输出
 * @param {type}
 * @return:
 */
void text9() {
    int n, m;
    n = 30;
    while (++n <= 33) {
        printf("%d|", n);
    }

    n = 30;
    do {
        printf("%d|", n);
    } while (++n <= 30);

    printf("\n***\n");
    for (n = 2, m = 6; n < m; n *= 2, m += 2) {
        printf("%d %d\n", n, m);
    }
    printf("\n***\n");

    for (m = 0; m <= n; m++) {
        printf("=");
        printf("\n");
    }
}
/**
 * @description:
 * @param {type}
 * @return:
 */
void daole() {
    const char str = '$';
    int hang = 4, lie = 8;
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < lie; j++) {
            printf("%c", str);
        }
        printf("\n");
    }
}
/**
 * @description: 读取一段字符,直到读到g为止
 * @param {type}
 * @return:
 */
void Go_west() {
    char ch;
    scanf("%c", &ch);
    //%c转换说明不会跳过空白,而其他转换说明都会跳过空白字符
    //%c只有在格式字符串中添加空格字符,scanf才会跳过空格
    // scanf("%c", &ch):从第一个字符开始读取
    // scanf(" %c", &ch):从第一个非空白字符开始读取
    while (ch != 'g') {
        printf("%c", ch);
        scanf(
            "%c",
            &ch); //因为输入缓冲区未清空,再次读取字符不会提示再次输入,而是读取上次位置后面的字符.
    }
    // result:
    // Go west,young man!
    // Go west,youn
}
/**
 * @description: 逐个读取一段字符并更改为相邻的字符,到g为止
 * @param {type}
 * @return:
 */
void Go_westb() {
    char ch;
    scanf("%c", &ch);
    while (ch != 'g') {
        printf("%c", ++ch);
        scanf("%c", &ch);
    }
}
/**
 * @description:
 * 同a函数,不同在将必要有一次的输入放在循环判断语句内,更符合任务逻辑,提升了可读性
 * @param {type}
 * @return:
 */
void Go_westc() {
    char ch;
    do //先执行在判断 比较符合当前需求
    {
        scanf("%c", &ch);
        printf("%c", ch);
    } while (ch != 'g');
}