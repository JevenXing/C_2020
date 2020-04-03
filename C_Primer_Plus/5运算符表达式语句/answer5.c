#include <stdio.h>

void IHE(int a); //函数声明
void atog() {
    char ywzm = 'a', temp = ywzm;
    while (ywzm++ < temp + 7) {
        printf("printf:%c\n", ywzm - 1);
    }
}
void const60() { //实现时间格式转换 const

    const int MtoS = 60; //转换率
    double getM = 0.1f;  //接收输入值
    double TempToS;      //转换暂存
    int M, S;            //结果
    while (getM != 0) {
        printf("结束输入0.\n");
        printf("输入你要转换的值(h):");
        scanf("%lf", &getM);
        if (getM == 0)
            break;
        TempToS = getM * (double)MtoS * (double)MtoS; //整体转换到秒
        S = (int)TempToS % MtoS;                      //取模 秒
        M = TempToS / MtoS;                           //取分 舍弃小数
        printf("\n时转换分.秒:%d分%d秒.\n", M, S);
    }
    printf("程序结束...\n");
}
void inputXto10() { //打印大于一个整数10的数
    int a;          //输入值
    int temp_a;
    scanf("%d", &a);
    temp_a = a + 10;
    printf("%d\t", a);
    while (++a <= temp_a) {
        printf("%d\t", a);
    }
}
void daysToWeeks() { //天转换周.天
    int get_days;
    unsigned day, weeks; //忽略用户输入负值
    const int dayToWeeks = 7;
    do {
        printf("++++++++++++++++++++\n输入天数:");
        scanf("%d", &get_days);
        if (get_days <= 0) {
            printf("输入的值有误,将为您忽略错误.\n");
        }
        weeks = get_days / dayToWeeks;
        day = get_days % dayToWeeks;
        printf("转换结果:%d周%d天\n", weeks, day);
    } while (get_days > 0);

    printf("发现您上次输入错误,转换结束...\n++++++++++++++++++++\n");
}
void XdaysManny() { // n天数赚多少钱 n+(n+1)+(n+2)+(n+3)
    int get_day;
    int init_day = 0;
    int manny = 0;
    printf("工作天数:");
    scanf("%d", &get_day);
    while (init_day++ < get_day) {
        manny += init_day;
    }
    printf("你的工资:%d\n", manny);
}
void XdaysManny2() { // n天数赚多少钱 n+(n+1)^2+(n+2)^2+(n+3)^2 平方和
    int get_day;
    int init_day = 0;
    int manny = 0;
    printf("工作天数:");
    scanf("%d", &get_day);
    while (init_day++ < get_day) {
        manny += init_day * init_day;
    }
    printf("你的工资:%d\n", manny);
}
double Map(double x, int num) {
    int i = 1;       //计次变量
    double temp = x; //暂存x
    while (++i <= num) {
        x *= temp; //累乘
    }
    return x;
}
void Temperatures() {
    const float SSD_KSD = 273.16f;
    float Get_HSD;
    float SSD, KSD;

    while (1) {
        printf("-------------------\n输入要转换的华氏度:");
        int ret = scanf("%f", &Get_HSD);
        if (ret < 1) {
            break;
        }
        SSD = 5.0 / 9.0 * (Get_HSD - 32.0);
        KSD = SSD + SSD_KSD;
        printf("摄氏度℃:%.2f,开氏温度:%.2f\n", SSD, KSD);
    }
    printf("程序结束\n-------------------\n");
}
int main() {
    // atog();
    // const60();
    // inputXto10();
    // daysToWeeks();
    // XdaysManny2();
    printf("求次方:%.2lf\n", Map(10, 4));
    Temperatures();

    return 0;
}

void IHE(int a) { //函数实现
    printf("a^2:%d\n", a);
}