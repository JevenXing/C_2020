#include <stdio.h>
#include <string.h>//�ַ�����
#define NAME "bilibili"
int main() {
    char name[20]; // c������ �ַ���������ַ���
    printf("�������?\n");
    scanf("%s", &name);
    //������ ����1���հף��ո��Ʊ�����з���ʱ�Ͳ��ٶ�ȡ���롣
    // scanf_s("%s",&name);
    printf("���������:%s.\n", name);

    char *a="xingwenjie";
    printf("\na���ַ�������:%zd",strlen(a));
    printf("\na���ַ�����С:%zd",sizeof(a));
    getchar();
    //�ַ����� �ܲ���ֱ�Ӹ�ֵ���ַ�����?
    // name=NAME;
    char *name2;
    name2=NAME;//ָ�����
    printf("\n%s",name2);
    //������

    return 0;
}