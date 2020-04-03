#include <float.h>
#include <limits.h>
#include <stdio.h>
#define PAG 959
#define HUOHAO '{'
void printf_a() {

    // printf()是输出函数，scanf()是输入函数，但是它们的工作原理几乎
    // 相同。两个函数都使用格式字符串和参数列表。 格式字符串
    //它们指定了如何把数据转换成可显示的形式

    //参数列表    指针变量,变量、常量，表达式
    printf("*%d*\n", PAG);
    printf("*%6d*\n", PAG);
    printf("*%10d*\n", PAG);
    printf("*%-10d*\n", PAG);
    //数值格式

    const double RENT = 3852.99; // const变量
    printf("*%f*\n", RENT);
    //字段宽度和小数点后面的
    //位数均为系统默认设置，即字段宽度是容纳带打印数字所需的位数和小数点
    //后打印6位数字
    printf("*%e*\n", RENT);
    //默认情况下，编译器在小数点的左侧打印1个数字，在小数点的右侧打印6个数字。
    printf("*%4.2f*\n", RENT);
    printf("*%3.1f*\n", RENT);
    printf("*%10.3f*\n", RENT);
    printf("*%10.3E*\n", RENT);
    printf("*%+4.2f*\n", RENT);
    printf("*%010.2f*\n", RENT);
    //打印的值前面多了一个代数符号（+）。0标记使得打印的值前面以0填充以满足字段要求字符串格式
    const char STRING[] = "HLLY哈利路亚";
    printf("[%2s]\n", STRING);  //宽度不够 会自适应
    printf("[%24s]\n", STRING); //设置字段宽度
    printf("[%24.5s]\n", STRING); //控制字符精度 会打印不完整 中文字符会乱码
    printf("[%-24s]\n", STRING); //左对齐 设置的宽度为空格
    // The NAME family just may be $XXX.XX dollars richer!
    char name[] = "邢文杰";
    float maily = 212.2f;
    printf("the %s family just may be $%.1f dollars richar!", name, maily);

    //当转换说明与参数不匹配时
    //例1:当解释有符号的负数值 用%u 会将负值按无符号数值解释 然后就错了
    //例2:当short 类型解释成字符型时  short超出char大小 会被截断 如同取余
    //后1字节被解释成字符

    //不匹配的浮点数
    //当有多个参数因转换说明不匹配而截断是,后面的参数再被解释时会把前面参数遗留的数据混杂在一起解释
    //于是就混乱了

    // printf 返回值:int 打印个数  错误返回:负值
    //断行
    printf("\nHere's another way to print a \
    long string.\n");
    printf("Here's the newest way to print a "
           "long string.\n");
}
void scanf_a() {
    // 输入整数 %d.%f..
    //非数字字符开始 函数放回输入中 不赋值给变量
    //非数字字符结束(除了-\+) 非数字字符被下一个转换说明使用
    //其他数字转换说明相同

    //输入字符串 %s
    //读取非空白字符串所有字符 并在最后字符数组中加入\0

    //特殊格式字符串(输入);
    // scanf()函数允许把普通字符放在格式字符串中。除空格字符外的普通字
    // 符必须与输入字符串严格匹配。
    int n, m;
    // scanf("%d,%d", &n, &m);
    scanf("%d %d", &n, &m);

    //进行下一次转换说明时,scanf()会跳过整数前面的空白
    //所以输入多个空格没有影响

    //%c 格式字符串中的空格有影响
    char c;
    scanf("%c ", &c); //从输入中的第1个字符开始读取
    scanf(" %c", &c); //从第1个非空白字符开始读取。

    // scanf 返回值 正常:成功读取的项数  异常:EOF(在stdio.h中define -1)
}
void yizhifuzhi() { //抑制赋值
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;
    //*修饰符
    // printf 函数中的作用:将修饰符指定交给参数设置
    printf("Enter a field width:\n");
    scanf("%d", &width);
    printf("The number is :%*d:\n", width, number);
    //参数指定宽度
    printf("Now enter a width and a precision:\n");
    scanf("%d %d", &width, &precision);
    printf("Weight = %*.*f\n", width, precision, weight);
    //参数指定小数点位数
    printf("Done!\n");

    // scanf 函数中的作用:跳过相应的输出项
    int n;
    printf("Please enter three integers:\n");
    scanf("%*d %*d %d", &n); //跳过两个用户输入的整数，把第3个整数拷贝给n。
    printf("The last integer was %d\n", n);
    //在程序需要读取文件中特定列的内容时，这项跳过功能很有用。
}
void juzi() { // scanf %s 可以读带空格的句子吗?
    char zifu[20];
    scanf("%s", zifu);
    printf("%s\n", zifu);
} //不能实现  遇到空格结束接收
int main() {
    // printf_a();
    //最好用#define定义数值常量,使用符号常量（明示常量），提高了程序的可读性和可
    //维护性
    // juzi();
    double num=232.346;
    char str[]="最好用#define定义数值常量,使用符号常量";
    float flt=3.1415;
    int zf=5;
    printf("[%20.8s]\n",str);
    printf("[%*.2f]\n",zf,flt);//抑制赋值符* 的应用
    printf("[%+5.*f]\n",zf,flt);
    int aa;
    float ff;
    double dd;
    char str2[100];
    scanf("%s %*d",str2,&aa);//b.22.32    8.34E?09
    //组合读取scanf("%5s %d",str2,&aa);
    //如果第一个转换说明限制了字段宽度  用户超出宽度 就会影响后面的参数读入
    //*修饰参数可以让scanf跳过这个变量的赋值
    printf("[%s %d]",str2,aa);

    return 0;
}
