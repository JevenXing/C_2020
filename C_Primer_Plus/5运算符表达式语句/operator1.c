#include <float.h>
#include <limits.h>
#include <stdio.h>
#include <string.h>
//类型定义功能
typedef int inttwo;
//宏定义
#define HHHT "撒的发生"
#define LSSD 123
#define SDFEW 21.3213
int main() {
    //算术运算符
    //+ - * / %
    //赋值运算符
    //求模运算符
    int a1 = 1011010010;
    inttwo b1;
    size_t intsize = sizeof(a1);
    printf("a的值:%d,a占用空间:%zd bytes,int占用空间:%zd bytes.\n", a1, intsize,
           sizeof(int));
    const _Bool tf = 1;

    //怎么区分一元\二元运算符    -  +
    a1 = -a1;     //一元运算符  操作了一个数值对象
    a1 = a1 - a1; //二元运算符  操作了两个数值对象

    //自增自减两种前后缀方式
    int a = 2, b = 1;
    int a_post, pre_b;
    a_post = 2*++a; // 后缀递增  2*(a=a+1)
    pre_b = ++b;  // 前缀递增
    printf("%d\t%d\n",a_post,a);
    
    

    return 0;
}