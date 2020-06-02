/*
 * @Description    :第七章习题
 * @Date           : 2020-04-05 22:13:11
 * @LastEditors    : JEVEN
 * @LastEditTime   : 2020-06-02 15:48:26
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
void text_4();//快捷键使用方法
void text_6();
void text_7(float h, double incomeh);
void text_8();
void text_9();
void text_11();
void cdInput();
void shopList(int index, bool com[], double kg[], double *kg_temp);
int main() {
    // text_1();
    // text_2();
    // text_3();
    // text_4();
    // text_6();
    // text_7();
    // text_8();
    // text_9();
    text_11();
    stop();
    return 0;
}d
/**
 * @description: ABC 邮购杂货店出售的
 * 杨莉售价为 2.05 美元/磅，
 * 甜菜售价为 1.15美元/磅，
 * 胡萝卜售价为 1.09美元/磅。
 * 在添加运费之前，100美元的订单有5%的打折优惠。
 
 *运费:少于或等于5磅的订单收取6.5美元的运费和包装费，
 5磅～20磅的订单收取14美元的运费和包装费，超过20磅的订单在14美元的基础上每续重1磅增加0.5美元.
 编写一个程序，在循环中用switch语句实现用户输入不同的字母时有不同的响应，即输入a的响应是让用户输入洋蓟的磅数，b
是甜菜的磅数，cd是胡萝卜的磅数，q 是退出订购。
程序要记录累计的重量。即，如果用户输入 4 磅的甜菜，然后输入
5磅的甜菜，程序应报告9磅的甜菜。
然后，该程序要计算货物总价、折扣（如果有的话）、运费和包装费。
随后，程序应显示所有的购买信息：物品售价、订购的重量（单位：磅）、订购的蔬菜费用、订单的总费用、折扣（如果有的话）、运费和包装费，以及所有的费用总额。
 * @param {type}
 * @return:
 */
void text_11() {
    const double _yl = 2.05, _tc = 1.15, _hlb = 1.09; //洋蓟价格
    const double _m100 = 0.05;                        //订单满100 优惠5%
    char get_ch[2]; //录入当前选中品类,当前重试选择
    bool set_gwc_commodity[] = {0, 0, 0}; //购物车_品类:yl,tc,hlb,
    double set_gwc_kg[3];                 //购物车_品类重量
    double *get_cd_kg;                    //录入暂存
    double com_cost, or_cost, end_cost;   //品类总价;总价;实付总金额
    double or_kg;                         //订单重量
    double freight;                       //运费
    //<=5 =6.5; 5-20 =14; >20=14+(n-10)*0.5;  运费逻辑
    //菜单:交互格式 a-c(菜品)+空格+number(重量)
    //计算:对应品类的重量->计算订单总价,折扣,运费and包装费
    //打印:物品售价、订购的重量（单位：磅）、订购的蔬菜费用、订单的总费用、折扣（如果有的话）、运费和包装费，以及所有的费用总额。
    while (1) { //订单系统

        while (1) //点菜累计
        {
            cdInput(); //菜单打印
            //上次选购记录>>
            //初始化
            for (int i = 0; i < 3; i++) {
                set_gwc_kg[i] = 0;
            }

            get_ch[1] = 'y';
            if (scanf("%c %lf", get_ch, get_cd_kg) != 2) { //点单
                printf("你的输入有误,是否继续点单?(y/n):");
                scanf("%c", get_ch + 1);
                if (get_ch[1] == 'n') { //如果选择不重试-退出
                    printf("你结束了当前点单\n");
                    break;
                } else {
                    continue; //重新点单
                }
            }
            //点单正确,计算
            switch (*get_ch) {
            case 'a':
                set_gwc_commodity[0] = true; //标记购买
                set_gwc_kg[0] += *get_cd_kg; //累计分量
                printf("你选购杨莉%.2lfKG.", set_gwc_kg[0]);
                break;
            case 'b':
                set_gwc_commodity[1] = true; //标记购买
                set_gwc_kg[1] += *get_cd_kg; //累计分量
                printf("你选购甜菜%.2lfKG.", set_gwc_kg[1]);
                break;
            case 'c':
                set_gwc_commodity[2] = true; //标记购买
                set_gwc_kg[2] += *get_cd_kg; //累计分量
                printf("你选购胡萝卜%.2lfKG.", set_gwc_kg[2]);
                break;
            case 'd':
                printf("结算购物清单中...\n");
                break;
            default:
                printf("意外错误,请排查...\n");
                break;
            }
            if (*get_ch == 'd') {
                for (int i = 0; i < 3; i++) {
                d    if (set_gwc_commodity[i]) { //品类,单价,品类售价
                        switch (i) {
                        case 0:
                            printf("商品:杨莉\t单价:%.2lf\t购入:%.2lfKG\t售价:%"
                                   ".2lfRMB.",
                                   _yl, set_gwc_kg[i],
                                   com_cost = set_gwc_kg[i] * _yl);
                        case 1:
                 dd           printf("商品:甜菜\t单价:%.2lf\t购入:%.2lfKG\t售价:%"
                   ddd                ".2lfRMB.",
                                   _tc, set_gwc_kg[i],
                      d             com_cost = set_gwc_kg[i] * _tc);
                        case 2:
                       ddd     printf(
                                "商品:胡萝卜\t单价:%.2lf\t购入:%.2lfKG\t售价:%"
                                ".2lfRMB.",
                                _hlb, set_gwc_kg[i],
                                com_cost = set_gwc_kg[i] * _hlb);
                            break;

                        default:
                            break;
                        }
                        printf("\n");
                    }
                    or_cost += com_cost; //优惠前总价
                }
                if (or_cost >= 100) { //满减优惠后 实付金额
                    end_cost = or_cost - 100 * _m100;
                } else {
                    end_cost = or_cost;
                }
                //计算运费
                or_kg = set_gwc_kg[0] + set_gwc_kg[1] + set_gwc_kg[2];

                if (or_kg <= 5) {
                    freight = 6.5;
                } else if (freight > 5 && freight <= 20) {
                    freight = 16;
                } else if (freight > 20) {
                    /* code */
                }

                *get_ch = 'e'; //
            }
        }
        if (get_ch[1] == 'n')
            break;
    }
}

void cdInput() {
    printf("=======欢迎光临 ABC邮购杂货店=======\n");
    printf("---正在出售的商品---\na)杨莉(2.05 yuan)\nb)甜菜(1.15 "
           "yuan)\nc)胡萝卜(1.09 yuan)\nd)结束选购.\n");
    printf("=================================\n菜单:交互格式 "
           "a-c(菜品)+空格+number(重量):");
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
    for (int i = 2; i <= getNum; i++) { //控制判断范围
        if (getNum <= 0)
            break;
        suNnm = i;
        tf_su = true;
        // j:
        for (int j = 2; j < i; j++) { //控制当前数遍历因数范围
            if (i % j == 0) {
                tf_su = false;
                break; //存在唯三因数 直接结束判断
            } else {
                tf_su = true; //遍历到最后 则此数只有两个因数
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
e'e'e'e'e'e'eeeeeeee    double ji, jip, jitemp;
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