#include <stdio.h>
#include <stdlib.h>

#define N 30  //�궨��ĳ����಻����30��  

/*���к�����ȫ������*/

//��ȡѧ������
int stu_num();
//��ʾ���ܲ˵�����������ѡ����ɶ�Ӧ�Ĺ���
int menu();
//��ȡѧ��ѧ�źͿ��Գɼ�
void ReadScore(long num[],int score[],int n);
//��������γ̵��ֺܷ�ƽ����
void TotalandAverage(int score[],int n);
//���ɼ��ɸߵ����ų����α�
void SortScore(long num[],int score[],int n);
//��ѧ����С�����ų��ɼ���
void SortNum(long num[],int score[],int n); 
//��ѧ�Ų�ѯѧ���������俼�Գɼ�
void LinSearch(long num[],int score[],int n); 
//�������紦�����
void score_pro(int score[],int n);
//���ѧ�����ݺͿγ�����
void ListRecord(long num[],int score[],int n);
//�����Ӧ�б�
void output(long num[],int score[],int n); 


int main()
{
	int n,i;
	int score[N];
	long num[N];
	n=stu_num();
	while(1)
	{
		i=menu();
		switch(i)
		{
			case 1:
			{
				ReadScore(num,score,n);
				system("cls");
				break;
			}
			case 2:
			{
				TotalandAverage(score,n);
				system("cls");
				break;
			} 
			case 3:
			{
				SortScore(num,score,n);
				system("cls");
				break;
			}
			case 4:
			{
				SortNum(num,score,n);
				system("cls");
				break;
			}
			case 5:
			{
				LinSearch(num,score,n);
				system("cls");
				break;
			}
			case 6:
			{
				score_pro(score,n);
				system("cls");
				break;
			}
			case 7:
			{
				ListRecord(num,score,n);
				system("cls");
				break;
			}
			case 0:
			{
				exit(0);
				break;
			}
			default:
			{
				printf("Input error!\n");
			}
		}
	}
}


