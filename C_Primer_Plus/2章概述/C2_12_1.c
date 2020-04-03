#include <stdio.h>
void jolly() {
    for (int i = 0; i < 3; i++) {
        printf("你快乐吗?\n");
    }
}
void deny() { printf("当然了!\n"); }
void Smile(int n) {
    for (int i = 0; i < n; i++) {
        printf("Smile!");
    }
    printf("\n");
}

void two() { printf("two\n"); }

void one_three() { //函数发生耦合时,依赖函数需要放在上面先编译
    printf("one\n");
    two();
    printf("three\n");
}

int main() {
    //我活了多少天?
    int nian = 23;
    printf("我活了%d天了.\n", nian * 365);

    //使用函数打印
    jolly();
    deny();

    // toes
    int toes = 10;
    printf("toes*10=%d\n", toes * 10);
    printf("toes^2=%d\n", toes * toes);

    // Smile 函数打印不同次数
    Smile(3);
    Smile(2);
    Smile(1);
    // starting now:\n one\n two\n three \ndone! 函数中调用函数
    printf("stating now:\n");
    one_three();
    getchar();
    
    return 0;
}
