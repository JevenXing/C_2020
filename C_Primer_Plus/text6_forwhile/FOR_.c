// FOR_9种用法
#include <stdio.h>
void FOR_dijian() { // for递减
    int secs;       //半导体通讯标准
    for (secs = 5; secs > 0; secs--)
        printf("%d seconds!\n", secs);
    printf("We have ignition!\n");
}
void FOR_diedailiang() { //不同的迭代量
    int n;               // 从2开始，每次递增13
    for (n = 2; n < 60; n = n + 13)
        printf("%d \n", n);
}
void FOR_num_char() { //字符代替数字计数器

    for (char ch = 'a'; ch <= 'z'; ch++) {
        printf("%c\t", ch);
    }
}
void FOR_cheshitiaojian() { //测试条件 1-100自然数的平方数
    int number;
    for (int num = 0; (number = num * num) < 10086; num++) {
        printf("%d\t", number);
    }
}
void FOR_cheshitiaojian2() { //增量 每次递增1.5倍
    // int number;
    for (
        float num = 1; num < 10086;
        num *=
        1.5f) { //设计小数倍迭代时最好用浮点型,否则初值在递增后舍弃小数仍然保持不变,导致死循环.
        printf("%.3f\n", num);
    }
}
void FOR_sangebiaodashi() { //三个表达式为空时,循环默认为真
    int i = 1;
    for (;;) {
        if (i > 100) {
            break;
        }
        printf("%d\t", i);
        i += 11;
    }
}
void FOR_diyigebds() { //第一个表达式也可以不是初值
    int i = 1;
    for (printf("哈哈哈~"); i <= 5; i++) {
        printf("\n哈哈哈 too");
    }
}
void FOR_getI() { //可控的for 中的变量
    //输入数字执行循环次数;输入非数字结束循环
    int time;
    for (int count = 1; count == 1;) {
        printf("\n你要打几次?:");
        count = scanf("%d", &time);
        for (int j = 0; j < time; j++) {
            printf("你打%d次.\n", j + 1);
        }
    }
}
void FOR_douhao() { //在初始化表达式和更新表达式位中用","写多个语句.
    for (int time, Get_Res = 1; Get_Res == 1;
         printf("\n你要打几次?:"), Get_Res = scanf("%d", &time)) {
        for (int j = 0; j < time; j++)
            printf("你打%d次.\n", j + 1);
    }
}

int main() {
    // FOR_num_char();
    // FOR_cheshitiaojian2();
    // FOR_sangebiaodashi();
    // FOR_diyigebds();
    // FOR_getI();
    FOR_douhao();
    return 0;
}