#include <stdio.h>
#include <string.h>//字符串库
#define NAME "bilibili"
int main() {
    char name[20]; // c程序中 字符数组就是字符串
    printf("你的名字?\n");
    scanf("%s", &name);
    //它在遇 到第1个空白（空格、制表符或换行符）时就不再读取输入。
    // scanf_s("%s",&name);
    printf("你的名字是:%s.\n", name);

    char *a="xingwenjie";
    printf("\na的字符串长度:%zd",strlen(a));
    printf("\na的字符串大小:%zd",sizeof(a));
    getchar();
    //字符常量 能不能直接赋值给字符数组?
    // name=NAME;
    char *name2;
    name2=NAME;//指针可以
    printf("\n%s",name2);
    //并不能

    return 0;
}