#include<stdio.h>
#include<string.h>
void readData(char names[10][20], char xuehaos[10][20],int *ages ,double* scores, char tel[10][11], int n) 
{
	printf("%d\n",n);
	for(int i = 0;i<n;i++)
	{
		printf("请输入第%d个学生姓名：",i+1);
		scanf("%s",&names[i]);
		printf("请输入第%d个学生学号：",i+1);
		scanf("%s",&xuehaos[i]);
		printf("请输入第%d个学生年龄：",i+1);
		scanf("%d",&ages[i]);
		printf("请输入第%d个学生分数：",i+1);
		scanf("%lf",&scores[i]);
		printf("请输入第%d个学生联系电话：",i+1);
		scanf("%s",&tel[i]);
	}

		for(int i = 0;i<n;i++)
	{
		printf("\n第个学生姓名：%s",names[i]);
		//printf("请输入第%d个学生学号：",i+1);
		//scanf("%s",&xuehaos[i]);
		//printf("请输入第%d个学生年龄：",i+1);
		//scanf("%s",&ages[i]);
		//printf("请输入第%d个学生分数：",i+1);
		//scanf("%s",&names[i]);
		//printf("请输入第%d个学生联系电话：",i+1);
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
	printf("本程序用来统计学生数据\n");
	printf("首先请输入学生的个数\n");
	printf("然后分别输入学生的姓名，学号，手机号，QQ号和成绩\n");
	printf("最终本程序会将这些数据统计后放到文件内并且输出\n\n\n");
}

int main()
{
	int xxx[2][2]={{1,2}, {2,4}};

	//姓名，学号，年龄，分数，联系电话
	FILE*fp;
	fp = fopen("student.txt","w+");
	help();
	int n;
	printf("请输入你想统计的学生个数：");
	scanf("%d",&n);
	char names[10][20]={'\0'},xuehaos[10][20]={'\0'};
	int ages[10]={0};
	char tel[10][11]={'\0'};
	double scores[10]={0};
	readData(names,xuehaos,ages,scores,tel,n);
	writeFile(fp, names,xuehaos,ages,scores,tel,n);
	fclose(fp);

}
