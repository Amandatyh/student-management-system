//stu_num.c
#include <stdio.h>
#include "stu_num.h"
//�������ܣ���ȡѧ������ 
int stu_num()
{
	int n;
	printf("Input student number(n<30):\n");
	scanf("%d",&n);
	system("cls");
	return n;
}
