//TotalandAverage.c
#include <stdio.h>
#include "TotalandAverage.h"
//�������ܣ����㲢����γ̵��ֺܷ�ƽ���� 
void TotalandAverage(int score[],int n)
{
	int i,sum;
    float aver;
    for(i=0,sum=0;i<n;i++)
    {
    	sum+=score[i];
	}
	aver=(float)sum/n;
	printf("\nsum=%d,aver=%.2f\n",sum,aver);
	system("pause");
} 
