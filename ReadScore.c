//ReadScore.c
#include <stdio.h>
#include "ReadScore.h"
//�������ܣ���ȡѧ��ѧ�źͿ��Գɼ�
void ReadScore(long num[],int score[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nInput student's ID and score:\n");
        scanf("%ld%d",&num[i],&score[i]);
	}
    system ("pause");
} 
