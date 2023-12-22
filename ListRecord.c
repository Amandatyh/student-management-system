//ListRecord.c
#include <stdio.h>
#include "ListRecord.h"
//函数功能：输出学生数据和课程数据
void ListRecord(long num[],int score[],int n)
{
	output(num,score,n);
	TotalandAverage(score,n);
	system("pause");
} 
