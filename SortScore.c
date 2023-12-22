//SortScore.c
#include <stdio.h>
#include "SortScore.h"
//函数功能：按成绩由高到低排出名次
void SortScore(long num[],int score[],int n)
{
	int i,j,k,temp1;
	long temp2;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(score[j]>score[k])  //按数组score的元素值从高到低排序 
			{
				k=j;
			}
		}
		if(k!=i)
		{
			//交换成绩
			temp1=score[k];score[k]=score[i];score[i]=temp1;
			//交换学号
			temp2=num[k];num[k]=num[i];num[i]=temp2; 
		}
	}
	printf("\nSort in descending order by score:");
	output(num,score,n);
	system("pause");
}
