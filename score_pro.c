//score_pro.c
#include <stdio.h>
#include "score_pro.h"
//函数功能：分数划界处理并输出
void score_pro(int score[],int n)
{
	int t[5]={0,0,0,0,0};  //分别存储优秀、良好、中等、及格、不及格五个类别的人数 
	int i,m;
	for(i=0;i<n;i++)
	{
		if(score[i]>=90&&score[i]<=100) t[0]++;
		if(score[i]>=80&&score[i]<=89) t[1]++;
		if(score[i]>=70&&score[i]<=79) t[2]++;
		if(score[i]>=60&&score[i]<=69) t[3]++;
		if(score[i]>=0&&score[i]<=59) t[4]++;
	}
	//输出对应的数据
    if(i==0)
    {
		printf("\n");
	}
	printf("90-100\t%d\t%.2f%%\n",t[0],(float)t[0]/n*100);
	printf("80-89\t%d\t%.2f%%\n",t[1],(float)t[1]/n*100);
	printf("70-79\t%d\t%.2f%%\n",t[2],(float)t[2]/n*100);
	printf("60-69\t%d\t%.2f%%\n",t[3],(float)t[3]/n*100);
	printf("0-59\t%d\t%.2f%%\n",t[4],(float)t[4]/n*100);
	system("pause"); 
} 
