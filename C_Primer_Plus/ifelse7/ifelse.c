/*
 * @Description:
 * @Date: 2020-04-04 17:02:51
 * @LastEditors: JEVEN
 * @LastEditTime: 2020-04-04 17:06:45
 */
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
void stop() {
    setbuf(stdin, NULL);
    printf("\n等待输入字符结束当前程序...\n");
    getchar();
}

int main() {

    stop();
    return 0;
}
