//menu.c
#include <stdio.h>
#include "menu.h"
//�������ܣ���ʾ���ܲ˵�����������ѡ����ɶ�Ӧ�Ĺ���
int menu()
{
	printf("   *********************************************************   \n");
	printf("                        ѧ���ɼ�����ϵͳ          \n");
	printf("   *********************************************************   \n");
	printf("                        ϵͳ�˵�����            \n");
	printf("   *********************************************************   \n");
	printf("          1.Input record       \n");
	printf("          2.Caculate total and average score of course         \n");
	printf("          3.Sort in descending order by score    \n");
	printf("          4.Sort in ascending order by number         \n");
	printf("          5.Search by number           \n");
	printf("          6.Statistic analysis           \n");
	printf("          7.List record             \n");
	printf("          0.Exit system             \n"); 
	printf("   *********************************************************   \n");
	printf("��Ӳ˵�ѡ����ѡ�����Ĳ���<0-7>:\n");
	int i;
    scanf("%d",&i);
    return i;
} 
