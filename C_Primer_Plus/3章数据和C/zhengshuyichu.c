
#include <stdio.h>
int main() {
#if 0
    int num = 54213123123; //整数溢出F

    printf("%d", num);
    // 接收字符码 并打印出来
    int str;
    scanf("%d",&str);
    printf("%c\n",str);
#endif
#if 0
//转义字符
printf("\a\a\a\a\a\a\a");
printf("我被一声警报惊醒了!");
printf("\"怎么回事?\"");

#endif
#if 0
    double sfz = 3.0e-23;
    int ktk = 950;
    int kt;
    printf("要计算多少夸脱水分子数量:\n");
    scanf("%d", &kt);
    printf("数量=%e\n", (kt * ktk) / sfz);
    getchar();
#endif
#if 1
    //身高转换
    float zhb = 2.54f; //英尺->厘米
    int yc;
    printf("你有几英尺高?\n");
    scanf("%d", &yc);
    double lm = yc * zhb;
    printf("你的身高(厘米):%.2f\n",lm);
#endif
        return 0;
}