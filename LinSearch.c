//LinSearch.c
#include <stdio.h>
#include "LinSearch.h"
//�������ܣ���ѧ�Ų�ѯѧ���������俼�Գɼ�
void LinSearch(long num[],int score[],int n)
{
	printf("\nEnter the ID to search:\n");
    long temp;
    scanf("%ld",&temp);
    //�Ȱ��ɼ���������õ���Ӧ���� 
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
	//�����Ӧ���� 
	int p;
    for(p=0;p<n;p++)
    {
    	if(num[p]==temp)
    	{
    		printf("ѧ�ţ�%ld\t���Գɼ���%d\n������%d\n",num[p],score[p],p+1);
    		system("pause");
    		return;
		}
    }
    printf("\nNot found!\n");
    system("pause");
}
