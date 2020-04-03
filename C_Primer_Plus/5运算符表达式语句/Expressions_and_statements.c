

#include <limits.h> //定义了 常量
#include <math.h>   // 包含了 数学函数
#include <stdio.h>  //系统输出输入

int main() {
    //表达式（expression）由运算符和运算对象组成
    //语句（statement）是C程序的基本构建块。一条语句相当于一条完整的计算机指令。在C中，大部分语句都以分号结尾。
    //    age=4 是表达式        age=4;  是语句          ;最简单语句 空语句

    //表达式的值 不作为右值赋值给左值 值去哪了? 在栈中丢失了嘛?
    //答:不被允许的操作,值不使用就跟当前程序无联系意义

    //一个语句做两次赋值的情况
    int x, y;        //声明  C中定义声明不算语句 与C++ 不同
    x = 6 + (y = 5); //干了啥:y先被赋值 这时y使用被赋的值带入表达式 6+5 赋值给x
    printf("%d\t%d", x, y);

    //块 (复合语句)
    //多个语句的组合 完成一套逻辑 并由{} 包含
#if 1
    int count, sum;      /* 声明*/
    count = 0;           /* 表达式语句 */
    sum = 0;             /* 表达式语句 */
    while (count++ < 20) /* 迭代语句 */
        sum = sum + count;
    printf("sum = %d\n", sum); /* 表达式语句 */
    return 0;                  /* 跳转语句 */
#endif
#if 0
#endif
    return 0;
}