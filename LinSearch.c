//LinSearch.c
#include <stdio.h>
#include "LinSearch.h"
//函数功能：按学号查询学生排名及其考试成绩
void LinSearch(long num[],int score[],int n)
{
	printf("\nEnter the ID to search:\n");
    long temp;
    scanf("%ld",&temp);
    //先按成绩进行排序得到对应排名 
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
	//输出对应数据 
	int p;
    for(p=0;p<n;p++)
    {
    	if(num[p]==temp)
    	{
    		printf("学号：%ld\t考试成绩：%d\n排名：%d\n",num[p],score[p],p+1);
    		system("pause");
    		return;
		}
    }
    printf("\nNot found!\n");
    system("pause");
}
