#include<stdio.h>
#include<ctime>
#include<stdlib.h>
bool guess_one_hint(int a)
{
	int x;
	printf("please guess a number:");
	scanf("%d",&x);
	if(a==x)
	{
		printf("you are the only one to guess the right number for one time!!!");
	}
	else
	{
	printf("Sorry,you are wrong,the right number is:%d\n",a);
	}
	return (x==a);
}
bool guess_with_hint(int a ,int t)
{
	int b;
	scanf("%d",&b);
	int y=1;
	y+=1;
	if(b<a)
		{
			if(y<t)
			{
			printf("Small,please try again:\n");
			}
			else if(y==t)
			{
				return (a == b);
			}
		}
		else if(b>a)
		{
			if(y<t)
			{
			printf("Big,please try again:");
			}
			else if(y==t)
			{
				return (a == b);
			}
		}
		else
		{
			printf("Congretulations to guess right:%d\n",b);
		}
		return (a == b);
	
}
int rand_int(int a,int b)
{
	return a+rand()%(b-a);
}
bool guess(int a,int t)
{	
	bool ret = false;
	if(t<=0) 
	{
		printf("times is wrong!!!\n");
		return (t == a);
	}
	else if(t==1)
	{
		guess_one_hint(a);
	}
	else 
	{ 
		for(int i=0;i<t;i++)
		{
			ret = guess_with_hint(a,t);
			if(t == (i+1))
			{
				printf("times you guess are:%d\n",t);
				printf("The right number is:%d\n",a);
				break;
			}
			else if(ret == true)
			{
				printf("times you guess are:%d\n",t);
				printf("The right number is:%d\n",a);
				break;
			}
		}
			
	}
	return ret;
}	
void help(int m,int n)
{
printf("����Ϸ�淨�����£�\n");
printf("����Ϸ���û���20��200֮�����\n");
printf("�������û���������Ҫ�²�Ĵ���\n");
printf("Ȼ���������������Ľ����ʼ����\n");
printf("����Ϸ���������ῴ���Լ��²����ֵ��ϵͳ�Ĵ�\n\n");
printf("\t\t\t\t\t\tף����Ϸ���!!!\n");
printf("\t\t\t\t\t\tBy  Si jianwei	Apr,2015\n\n\n\n");
}
int main()
{
	int m = 20;
	int n = 200;
	help(m,n);
	srand(time(0));
	int t=0;
	int a=rand_int(m,n);
	printf("����������²�Ĵ���:");
	scanf("%d",&t);
	guess(a,t);
	return 0;
	
}