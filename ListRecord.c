//ListRecord.c
#include <stdio.h>
#include "ListRecord.h"
//�������ܣ����ѧ�����ݺͿγ�����
void ListRecord(long num[],int score[],int n)
{
	output(num,score,n);
	TotalandAverage(score,n);
	system("pause");
} 
