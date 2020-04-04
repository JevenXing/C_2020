/*
 * @Description: info
 * @Version: 1.0
 * @Autor: JEVEN
 * @Date: 2020-03-29 19:03:50
 * @LastEditors: why?
 * @LastEditTime: 2020-03-30 21:28:53
 */
#include <stdio.h>
/**
 * @description: 
 * @param {int a 暂时没用} 
 * @return: 
 * @author: JEVEN
 */
void Douhao(int a) {
    int x, y, z,houseprice;

    x = (y = 3, (z = ++y + 2) + 5);
    //  x = ((z = ++(y = 3) + 2) + 5);
    houseprice = 249,500;//编译器会将其解释为一个逗号表达式，即 houseprice = 249 是逗号左侧的子表达式，500 是右侧的子表达式。

    houseprice = (249,500);//赋给houseprice的值是逗号右侧子表达式的值，即500。
    
}
int main() {}