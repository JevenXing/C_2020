
#include <stdio.h>
#include <string.h>
#include <float.h>


int main() {
#if 0
    char name_f[100], name_w[100];
    printf("ÄãµÄĞÕÊÏ:");
    scanf("%s", name_f);
    printf("ÄãµÄÃû×Ö:");
    scanf("%s", name_w);
    int str_amount1, str_amount2;
    str_amount1 = strlen(name_f);
    str_amount2 = strlen(name_w);
    printf("%s\t%s\n%d\t%d\n\n", name_f, name_w, str_amount1, str_amount2);
    printf("%s\t%s\n%*d\t%*d\n", name_f, name_w, str_amount1,str_amount1, str_amount2,str_amount2);
#endif

#if 0
printf("%d\n",FLT_DIG);
printf("%d\n",DBL_DIG);
#endif
    return 0;
}