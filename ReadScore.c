//ReadScore.c
#include <stdio.h>
#include "ReadScore.h"
//函数功能：获取学生学号和考试成绩
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
