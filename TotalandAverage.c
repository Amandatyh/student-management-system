//TotalandAverage.c
#include <stdio.h>
#include "TotalandAverage.h"
//函数功能：计算并输出课程的总分和平均分 
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
