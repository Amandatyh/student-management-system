//SortScore.c
#include <stdio.h>
#include "SortScore.h"
//�������ܣ����ɼ��ɸߵ����ų�����
void SortScore(long num[],int score[],int n)
{
	int i,j,k,temp1;
	long temp2;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(score[j]>score[k])  //������score��Ԫ��ֵ�Ӹߵ������� 
			{
				k=j;
			}
		}
		if(k!=i)
		{
			//�����ɼ�
			temp1=score[k];score[k]=score[i];score[i]=temp1;
			//����ѧ��
			temp2=num[k];num[k]=num[i];num[i]=temp2; 
		}
	}
	printf("\nSort in descending order by score:");
	output(num,score,n);
	system("pause");
}
