//menu.c
#include <stdio.h>
#include "menu.h"
//函数功能：显示功能菜单，根据输入选项完成对应的功能
int menu()
{
	printf("   *********************************************************   \n");
	printf("                        学生成绩管理系统          \n");
	printf("   *********************************************************   \n");
	printf("                        系统菜单功能            \n");
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
	printf("请从菜单选项中选择您的操作<0-7>:\n");
	int i;
    scanf("%d",&i);
    return i;
} 
