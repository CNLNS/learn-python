#include<stdio.h>
#include<string.h>
void readData(char names[10][20], char xuehaos[10][20],int *ages ,double* scores, char tel[10][11], int n) 
{
	printf("%d\n",n);
	for(int i = 0;i<n;i++)
	{
		printf("�������%d��ѧ��������",i+1);
		scanf("%s",&names[i]);
		printf("�������%d��ѧ��ѧ�ţ�",i+1);
		scanf("%s",&xuehaos[i]);
		printf("�������%d��ѧ�����䣺",i+1);
		scanf("%d",&ages[i]);
		printf("�������%d��ѧ��������",i+1);
		scanf("%lf",&scores[i]);
		printf("�������%d��ѧ����ϵ�绰��",i+1);
		scanf("%s",&tel[i]);
	}

		for(int i = 0;i<n;i++)
	{
		printf("\n�ڸ�ѧ��������%s",names[i]);
		//printf("�������%d��ѧ��ѧ�ţ�",i+1);
		//scanf("%s",&xuehaos[i]);
		//printf("�������%d��ѧ�����䣺",i+1);
		//scanf("%s",&ages[i]);
		//printf("�������%d��ѧ��������",i+1);
		//scanf("%s",&names[i]);
		//printf("�������%d��ѧ����ϵ�绰��",i+1);
		//scanf("%s",&tel[i]);
	}

}

void writeFile(FILE* fp, char names[10][20], char xuehaos[10][20],int *ages ,double* scores, char tel[10][11], int n) 
{	
	printf("cccccccccccccccccccc\n");
	for(int i = 0;i<n;i++)
	{
		printf("\n%s %s\t%d\t%.1lf\t%s\n",names[i], xuehaos[i],ages[i],scores[i],tel[i]);
		fprintf(fp, "%s %s\t%d\t%.1lf\t%s\n",names[i], xuehaos[i],ages[i],scores[i],tel[i]); 
		//fprintf(fp, "%d %lf",333, 89.8); 
	}
}
void help()
{
	printf("����������ͳ��ѧ������\n");
	printf("����������ѧ���ĸ���\n");
	printf("Ȼ��ֱ�����ѧ����������ѧ�ţ��ֻ��ţ�QQ�źͳɼ�\n");
	printf("���ձ�����Ὣ��Щ����ͳ�ƺ�ŵ��ļ��ڲ������\n\n\n");
}

int main()
{
	int xxx[2][2]={{1,2}, {2,4}};

	//������ѧ�ţ����䣬��������ϵ�绰
	FILE*fp;
	fp = fopen("student.txt","w+");
	help();
	int n;
	printf("����������ͳ�Ƶ�ѧ��������");
	scanf("%d",&n);
	char names[10][20]={'\0'},xuehaos[10][20]={'\0'};
	int ages[10]={0};
	char tel[10][11]={'\0'};
	double scores[10]={0};
	readData(names,xuehaos,ages,scores,tel,n);
	writeFile(fp, names,xuehaos,ages,scores,tel,n);
	fclose(fp);

}
