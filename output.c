//output.c
#include <stdio.h>
#include "output.h"
//�������ܣ������Ӧ�б�
void output(long num[],int score[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			printf("\n");	
		}
		printf("%ld\t%d\n",num[i],score[i]);
	}
}

