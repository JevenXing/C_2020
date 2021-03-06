/*
 * @Description: 6.16 编程练习
 * @Date: 2020-04-01 01:00:43
 * @LastEditors: JEVEN
 * @LastEditTime: 2020-04-04 16:57:53
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
void int_arr_13();
void dou2_14();
void input_char_15();
void xili_16();
void chilixi_17();
void shejiaoquan_18();
int main() {
    // a_Z_1();
    // ztxh_2();
    // xtxh_3();
    // xtxh_4();
    // xtxh_5();
    // for_table_6();
    // char_arr_7();
    // float_ys_8();
    // wx_12();
    // int_arr_13();
    // dou2_14();
    // input_char_15();
    // xili_16();
    // chilixi_17();
    // shejiaoquan_18();
    stop_look();
    return 0;
}
/**
 * @description: Rabnud博士加入了一个社交圈。起初他有5个朋友。他注意到他的朋
 * 友数量以下面的方式增长。第1周少了1个朋友，剩下的朋友数量翻倍；第2
 * 周少了2个朋友，剩下的朋友数量翻倍。一般而言，第N周少了N个朋友，剩
 * 下的朋友数量翻倍。编写一个程序，计算并显示Rabnud博士每周的朋友数
 * 量。该程序一直运行，直到超过邓巴数（Dunbar’s number）。邓巴数是粗略
 * 估算一个人在社交圈中有稳定关系的成员的最大值，该值大约是150。
 * @param {type}
 * @return:
 */
void shejiaoquan_18() {
    const int dunbar_number = 150;
    int friends = 4;
    int week=1;
    do
    {
        friends -= week; //每周减少的朋友;
        friends *= 2;    //剩下的朋友翻倍;
        printf("%d周的朋友数:%d.\n", week, friends);
        week++;
    } while (friends <= dunbar_number);
}
/**
 * @description: Chuckie Lucky赢得了100万美元（税后），他把奖金存入年利率8%的
 * 账户。在每年的最后一天， Chuckie取出10万美元。编写一个程序，计算多
 * 少年后Chuckie会取完账户的钱？
 * @param {type}
 * @return:
 */
void chilixi_17() {
    const double prin_CL = 1.0e6;
    const double rete = 0.08;
    const double n_get = 1.0e5;
    double bala = prin_CL; //银行余额
    int N;
    for (N = 1; bala > 0; N++) {
        bala += bala * rete; //本息=余额
        bala -= n_get;       //取出
    }
    printf("取完需要%d年.\n", N);
}
/**
 * @description: Daphne以10%的单利息投资了100美元（也就是说，每年投资获利相
 * 当于原始投资的10%）。Deirdre以 5%的复合利息投资了 100 美元（也就是
 * 说，利息是当前余额的
 * 5%，包含之前的利息）。编写一个程序，计算需要多少年Deirdre的投资额才会超过Daphne，并显示那时两人的投资额。
 * @param {type}
 * @return:
 */
void xili_16() {
    const double prin_Daphne = 100, prin_Deirdre = 100;  //本金
    const double rate_Daphne = 0.1, rate_Deirdre = 0.05; //利率-复合利率
    double N_Daphne = 0;                                 //利息
    double N_Deirdre = 0;                                //利息
    int N;
    for (N = 1; N_Deirdre <= N_Daphne; N++) {
        N_Daphne += prin_Daphne * rate_Daphne;
        N_Deirdre += (prin_Deirdre + N_Deirdre) *
                     rate_Deirdre; //利息=(本金+上次利息)*复合利率
    }
    printf("%d年,deirder的投资额超越daphne.\ndeirder:%.2lf\tdaphne:%.2lf.", N,
           N_Deirdre + prin_Deirdre, N_Daphne + prin_Daphne);
}
/**
 * @description: 编写一个程序，读取一行输入，然后把输入的内容倒序打印出来。
 * 可以把输入储存在char类型的数组中，假设每行字符不超过255。回忆一
 * 下，根据%c转换说明，scanf()函数一次只能从输入中读取一个字符，而且
 * 在用户按下Enter键时scanf()函数会生成一个换行字符（\n）。
 * @param {type}
 * @return:
 */
void input_char_15() {
    char ch[255];
    int count_ch = 0;
    printf("输入一行字符:\n");
    int count = scanf("%c", ch);
    //一个中文字符占用两次char类型 如果此方法用户输入了中文 结果会出错
    //
    for (int i = 0; count >= 1; i++) {
        count = scanf("%c", ch + i + 1);
        count_ch++;
        if (ch[i + 1] == 10)
            break;
    }
    printf("result:");
    for (int i = count_ch; i >= 0; i--) {
        printf("%c", ch[i]);
    }
}
/**
 * @description: 编写一个程序，创建两个包含8个元素的double类型数组，使用循环
 * 提示用户为第一个数组输入8 个值。第二个数组元素的值设置为第一个数组
 * 对应元素的累积之和。
 * @param {type}
 * @return:
 */
void dou2_14() {
    double num1[8], num2[8];
    const int count = 8;
    for (int i = 0; i < count; i++) {
        printf("输入第%d个数:", i);
        scanf("%lf", num1 + i);
        if (i == 0) {
            num2[i] = num1[i];
        } else {
            num2[i] = num2[i - 1] + num1[i];
        }
    }
    for (int j = 0; j < count; j++) {
        printf("%lf\t", num1[j]);
    }
    printf("\n");
    for (int j = 0; j < count; j++) {
        printf("%lf\t", num2[j]);
    }
    printf("\n");
}
/**
 * @description: 编写一个程序，创建一个包含8个元素的int类型数组，分别把数组元
 * 素设置为2的前8次幂。使用for循环设置数组元素的值，使用do while循环显
 * 示数组元素的值
 * @param {type}
 * @return:
 */
void int_arr_13() {
    int count = 10, numarr[count];
    for (int i = 0; i < count; i++) {
        numarr[i] = (int)pow(2, 8);
    }
    int i = 0;
    do {
        printf("%d\t", numarr[i]);
    } while (++i < count);
}
/**
 * @description: 编写一个程序计算这两个无限序列的总和，直到到达某次数。
 * 1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ... 1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 +
 * ...
 * @param {type}
 * @return:
 */
void wx_12() {

    const double x = 1.0;
    int count = 0;
    double result1, result2;
    while (1) {
        printf("qing shu ru chi shu:");
        if (scanf("%d", &count) < 1)
            break;
        for (int i = 1; i <= count; i++) {
            result1 = x + x / (double)i;
            if (i % 2 == 0) {
                result2 = x - x / (double)i;
            } else {
                result2 = x + x / (double)i;
            }
        }
        printf("\njiou he:%lf,jijia oujian he:%lf\n", result1, result2);
    }
}
void float_ys_8() {
    float a, b;
    do {
        setbuf(stdin, NULL);
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