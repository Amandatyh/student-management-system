//SortNum.c
#include <stdio.h>
#include "SortNum.h"
//函数功能：按学号由小到大排出成绩表
void SortNum(long num[],int score[],int n)
{
	int i,j,k,temp1;
	long temp2;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(num[j]<num[k])  //按数组sum的元素值从小到大排序
			{
				k=j;
			} 
		}
		if(k!=i)
		{
			//交换学号
			temp2=num[k];num[k]=num[i];num[i]=temp2;
			//交换成绩
			temp1=score[k];score[k]=score[i];score[i]=temp1; 
		}
	}
	printf("\nSort in ascending order by number:");
	output(num,score,n); 
	system("pause");
}
