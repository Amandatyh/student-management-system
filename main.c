#include <stdio.h>
#include <stdlib.h>

#define N 30  //宏定义某班最多不超过30人  

/*进行函数的全局声明*/

//获取学生人数
int stu_num();
//显示功能菜单，根据输入选项完成对应的功能
int menu();
//获取学生学号和考试成绩
void ReadScore(long num[],int score[],int n);
//计算输出课程的总分和平均分
void TotalandAverage(int score[],int n);
//按成绩由高到低排出名次表
void SortScore(long num[],int score[],int n);
//按学号由小到大排出成绩表
void SortNum(long num[],int score[],int n); 
//按学号查询学生排名及其考试成绩
void LinSearch(long num[],int score[],int n); 
//分数划界处理并输出
void score_pro(int score[],int n);
//输出学生数据和课程数据
void ListRecord(long num[],int score[],int n);
//输出对应列表
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


