#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
	char name[10];
	char xuehao[10];
	char tel[11];
	int age;
	float score;
};

void student_date(int n,struct Student *s)
{
	char mid1[100];
	char mid2[100];
	char mid3[100];
	/*char mid4[100];
	char mid5[100];*/
	for(int i=0;i<n;i++)
	{
		printf("请输入第%d个学生姓名：",i+1);
		scanf("%s",&mid1);
		strcpy(s[i].name,mid1);
		printf("请输入第%d个学生学号：",i+1);
		scanf("%s",&mid2);
		strcpy(s[i].xuehao,mid2);
		printf("请输入第%d个学生年龄：",i+1);
		scanf("%d",&s[i].age);
		printf("请输入第%d个学生分数：",i+1);
		scanf("%f",&s[i].score);
		printf("请输入第%d个学生联系电话：",i+1);
		scanf("%s",&mid3);
		strcpy(s[i].tel,mid3);
	}
}

void write_file(FILE*fp,int n,struct Student *s)
{
	fprintf(fp,"姓名\t学号\t年龄\t分数\t电话\n");
	for(int i=0;i<n;i++)
	{
	fprintf(fp,"%s\t%s\t%d\t%.1f\t%s\n",s[i].name,s[i].xuehao,s[i].age,s[i].score,s[i].tel);
	}
}

void help()
{
	printf("本程序用来统计学生数据\n");
	printf("首先请输入学生的个数\n");
	printf("然后分别输入学生的姓名，学号，年龄，成绩和联系电话\n");
	printf("最终本程序会将这些数据统计后放到文件内并且输出\n\n\n");
	printf("如果需要查看请到程序的根目录查看文件\n");
}

int main()
{
	FILE*fp;
	fp = fopen("student.txt","w+");
	help();
	int n;
	printf("请输入你想统计的学生个数：");
	scanf("%d",&n);
	Student s[100];
	student_date(n,s);
	write_file(fp,n,s);
	fclose(fp);
}