//SortNum.c
#include <stdio.h>
#include "SortNum.h"
//�������ܣ���ѧ����С�����ų��ɼ���
void SortNum(long num[],int score[],int n)
{
	int i,j,k,temp1;
	long temp2;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(num[j]<num[k])  //������sum��Ԫ��ֵ��С��������
			{
				k=j;
			} 
		}
		if(k!=i)
		{
			//����ѧ��
			temp2=num[k];num[k]=num[i];num[i]=temp2;
			//�����ɼ�
			temp1=score[k];score[k]=score[i];score[i]=temp1; 
		}
	}
	printf("\nSort in ascending order by number:");
	output(num,score,n); 
	system("pause");
}
