/*
 * @Description:
 * @Date: 2020-04-04 17:02:51
 * @LastEditors: JEVEN
 * @LastEditTime: 2020-04-05 16:40:05
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
//统计一段字符的单词数,行数,字数;
void get_txt_num();
//三元运算符快速比较筛选 并赋值
void sanyuan();
//条件运算符的运用
void sanyuantiaojian();
//使用break退出循环 案例循环计
// 算矩形的面积。如果用户输入非数字作为矩形的长或宽，则终止循环。
void break_MG();
//该程序读入一个字母，然后打印出与该字母开头的动物名。
void switch_();
//goto
#define PERIOD '.'
int main() {
    // iszimu();
    // elseif();
    // and_az();
    // get_txt_num();
    // sanyuan();
    // sanyuantiaojian();
    // break_MG();
    // switch_();


    stop();
    return 0;
}
void switch_() {
    char _ch;
    printf("输入一个字母,#号结束.");
    while ((_ch = getchar()) != '#') {
        if (_ch == '\n')
            continue;
        if (islower(_ch)) {
            switch (_ch) {
            case 'a':
                printf("argali 是个动物.\n");
                break;
            case 'b':
                printf("big is Asia.\n");
                break;

            default:
                printf("什么都没有...");
                break;
            }
        } else {
            //输入的不是小写字母
            printf("请输入小写字母\n");
            while (getchar() != '\n') { //忽略当前行的所有字符
                continue;
            }
            printf("请输入一个小写字母,#号结束.\n");
        }
    }
    printf("结束了呢...\n");
}
void break_MG() {
    float length, width; //长宽;
    while (printf("输入矩形长宽计算面积:"),
           scanf("%f %f", &length, &width) == 2) {
        (length == 0) ? printf("长度参数异常.\n") : printf("参数正常.\n");
        (width == 0) ? printf("宽度参数异常.\n") : printf("参数正常.\n");
        if (length == 1) {
            printf("面积:%.2f.\n", width);
            continue;
        } else if (width == 1) {
            printf("面积:%.2f.\n", length);
            continue;
        }

        if (length != 0 && width != 0) {
            printf("面积:%.2f.\n", length * width);
        }
    }
}
void sanyuantiaojian() {
    const int COV = 350;
    int wall_area;
    int cans;
    printf("你要上漆的墙面面积:");
    while (scanf("%d", &wall_area) == 1) {
        cans = wall_area / COV; //需要多少整罐
        //求摸判断有剩余墙没刷到,再加一罐;
        cans += (wall_area % COV == 0) ? 0 : 1;
        printf("你需要%d%s油漆.\n", cans, (cans == 1) ? "罐" : "罐罐");
    }
}

void sanyuan() {
    int a = 10086, b = 10010;
    int MAX = (a > b) ? a : b;
    printf("a and b MAX:%d?", MAX);
}
void get_txt_num() {
    int ha_count = 0, ch_count = 0, ci_count = 0;
    char ch, up_ch, prev = '\n';
    const char STOP = '|';
    bool inword = false;
    printf("输入字符:");
    while ((ch = getchar()) != STOP) {
        ch_count++;
        if (ch == prev)
            ha_count++;
        if (!isspace(ch) && !inword) {
            inword = true;
            ci_count++;
        }
        if (isspace(ch) && inword) {
            inword = false;
        }
    }
    printf("行数:%d;单词:%d;字数:%d", ha_count, ci_count, ch_count);
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