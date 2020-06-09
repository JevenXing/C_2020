/*
 * @Description    :
 * @Date           : 2020-06-08 09:28:17
 * @LastEditors    : JEVEN
 * @LastEditTime   : 2020-06-09 14:32:01
 * @FilePath       : \C_2020\array\arr.c
 */
#include <ctype.h>   //字符分析函数
#include <math.h>    //科学运算
#include <stdbool.h> //bool类型
#include <stdio.h>   //系统IO
#include <stdlib.h>  //
#include <string.h>  //字符串处理
void stop() {
    printf("\n任意键结束当前程序...");
    setbuf(stdin, NULL);
    getchar();
}

void Log() { printf("log:program start!\n"); }

void arrZhiZhen() { //一维数组
    int a[] = {1, 2, 3, 4, 5};
    int *b = a + 4;
    printf("%d,%d,%d,%d,%d \n", a[0], a[1], a[2], a[3], a[4]);
    printf("%p,%p,%p,%p,%p\n,", &a[0], &a[1], &a[2], &a[3], &a[4]);
    printf("%p,%p,%p,%d\n", a, a + 1, &a[1], *b);
    
}
//二维数组 声明
void tuoarr() {
    //无初始化器时,行列索引不可以省略;
    int a[2][3];
    int b[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    //可以部分初始化
    int d[3][2] = {{1, 2}, {3, 4}};
    //可以不分组初始化,编译器根据声明规则分组
    int e[3][2] = {1, 2, 3, 4, 5, 6};
    //有初始化器时,只有行索引可以省略,列索引何时都不能省略
    int F[][2]={{1,2},{3,4}};
    //二维数组中的元素是通过使用下标（即数组的行索引和列索引）来访问
    int *c = b[2, 1];
    printf("====%d\n", *c);
    printf("二维数组元素个数为列索引*行索引,%d\n", 3 * 2);
    printf("sizeof 可以查数组占用空间:%d\n", sizeof(a));
}
void tuarr2(){//二维数组的地址
    int a[3][2]={11,12,21,22,31,32};
    //二维数组有三个区域的地址:头元素,组,元素
    //指针表示:
    a;
    a[0]+1;
    a[0][0]+1;
    printf("头元素地址:%8p%8p\n",a,&a);
    printf("组地址:%8p%8p\n",a[1],a[0]+1);
    printf("元素地址:%8p%8p\n",&a[0][1],&a[0][0]+1);
    
}
void arrAssign(){
    
}
int main() {
    Log();
    // arrZhiZhen();
    // tuoarr();
    tuarr2();
    stop();
    return 0;
}