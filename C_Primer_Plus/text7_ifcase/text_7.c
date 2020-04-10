/*
 * @Description    :第七章习题
 * @Date           : 2020-04-05 22:13:11
 * @LastEditors    : JEVEN
 * @LastEditTime   : 2020-04-10 15:55:39
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
void text_7(float h, double incomeh);
void text_8();
void text_9();
void text_11();
int main() {
    // text_1();
    // text_2();
    // text_3();
    // text_4();
    // text_6();
    // text_7();
    // text_8();
    text_9();
    stop();
    return 0;
}
/**
 * @description: ABC 邮购杂货店出售的
 * 洋蓟售价为 2.05 美元/磅，
 * 甜菜售价为 1.15美元/磅，
 * 胡萝卜售价为 1.09美元/磅。
 * 在添加运费之前，100美元的订单有5%的打折优惠。
 *运费:少于或等于5磅的订单收取6.5美元的运费和包装费，
 5磅～20磅的订单收取14美元的运费和包装费，超过20磅的订单在14美元的基础上每续重1磅增加0.5美元。
 
编写一个程序，在循环中用switch语句实现用户输入不同的字母时有不同的响应，即输入a的响应是让用户输入洋蓟的磅数，b
是甜菜的磅数，c是胡萝卜的磅数，q 是退出订购。
程序要记录累计的重量。即，如果用户输入 4 磅的甜菜，然后输入 5磅的甜菜，程序应报告9磅的甜菜。
然后，该程序要计算货物总价、折扣（如果有的话）、运费和包装费。
随后，程序应显示所有的购买信息：物品售价、订购的重量（单位：磅）、订购的蔬菜费用、订单的总费用、折扣（如果有的话）、运费和包装费，以及所有的费用总额。
 * @param {type}
 * @return:
 */
void text_11() {
    const double yangLi=2.05;//洋蓟
    const double tianCai=1.15;//甜菜
    const double huLuoBo=1.09;//胡萝卜
    const double man100_yh=0.05;//订单满100 优惠5%
    //<=5 =6.5; 5-20 =14; >20=14+(n-10)*0.5;  运费逻辑
    


    
}
/**
 * @description: 编写一个程序，只接受正整数输入，然后显示所有小于或等于该数的
素数。
 * @param {type}
 * @return:
 */
void text_9() {
    unsigned int getNum;
    unsigned int suNnm;
    bool tf_su; //遍历范围内所有因数的结果,一次假终假,所有真终真
    printf("输入一个正整数,输出小于该数的素数:");
    scanf("%d", &getNum);
    //素数:一个因数只有1和它本身的数
    for (int i = 2; i <= getNum; i++) {//控制判断范围
        if (getNum <= 0)
            break;
        suNnm = i;
        tf_su = true;
        // j:
        for (int j = 2; j < i; j++) {//控制当前数遍历因数范围
            if (i % j == 0) {
                tf_su = false;
                break;//存在唯三因数 直接结束判断
            } else {
                tf_su = true;//遍历到最后 则此数只有两个因数
            }
        }
        if (tf_su)
            printf("%d是素数\t", suNnm);
    }
}

/**
 * @description:
修改练习7的假设a，让程序可以给出一个供选择的工资等级菜单。使
用switch完成工资等级选择。运行程序后，显示的菜单应该类似这样：
*****************************************************************
Enter the number corresponding to the desired pay rate or action:
1) $8.75/hr　　　　　　　　　　　　　 2) $9.33/hr
3) $10.00/hr　　　　　　　　　　　　　4) $11.20/hr
5) quit
*****************************************************************
 * @param {type}
 * @return:
 */
void text_8() {
    int switch_manry, h; //选择项;时长
    double incomh;       //单位时长工资
    while (1) {
        printf("\n\n*******************************\n");
        printf("选着工资单价:\n");
        printf("1) $8.75/hr\t2) $9.33/hr\n");
        printf("3) $10.00/hr\t2) $11.20/hr\n");
        printf("*******************************\n");
        if (scanf("%d", &switch_manry) == 1) {
            switch (switch_manry) {
            case 1:
                incomh = 8.75;
                break;

            case 2:
                incomh = 9.33;
                break;

            case 3:
                incomh = 10.00;
                break;

            case 4:
                incomh = 11.20;
                break;

            default:
                incomh = 8.00;
                printf("默认工资.\n");
                break;
            }
            printf("你工作了几个小时?:");
            if (scanf("%d", &h) != 1) {
                printf("时间输入有误,回到上次选择.\n");
                continue;
            }
            text_7(h, incomh);
        } else {
            break;
        }
    }
}
/**
 * @description:
编写一个程序，提示用户输入一周工作的小时数，然后打印工资总
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
void text_7(float h, double incomeh) {
    const double taxRate_1 = 0.15, taxRate_2 = 0.2, taxRate_3 = 0.25;
    const int tax_300 = 300, tax_150 = 150;
    double total_num; //税前收入
    double tax_num;   //税额
    double income;    //税后收入
    // int result;
    printf("输入你的工作时长:");
    (h > 40) ? (h += (h - 40) * 1.5) : h;
    total_num = incomeh * h;
    if (total_num <= 300) {
        income = total_num - (tax_num = (total_num * taxRate_1));
        //不到450 续150的情况 不交税
    } else if (total_num >= tax_300 + tax_150) {
        //前300税额
        tax_num = tax_300 * taxRate_1;
        //续150税额
        tax_num += tax_150 * taxRate_2;
        //剩余部分
        tax_num += ((total_num - tax_150 + tax_300) * taxRate_3);
        //扣税
        income = total_num - tax_num;
    }
    printf("税前工资:%.4lf,税额:%.4lf,税后工资:%.4lf\n", total_num, tax_num,
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
 * @description: 使用if
else语句编写一个程序读取输入，读到#停止。用感叹号替换句
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
 * @description: 编写一个程序，读取整数直到用户输入
0。输入结束后，程序应报告 用户输入的偶数（不包括
0）个数、这些偶数的平均值、输入的奇数个数及 其奇数的平均值。
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
 * @description:
 * 编写一个程序读取输入，读到#字符停止。程序要打印每个输入的字符
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
 * @description:
 * //编写一个程序读取输入，读到#字符停止，然后报告读取的空格数、
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