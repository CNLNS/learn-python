#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
	char name[10][10];
	char xuehao[10];
	int tel[11][11];
	int age[10];
	double score[10];
};
void student_date(FILE*fp,int n,struct Student *s)
{
	char mid[10];
	for(int i=0;i<n;i++)
	{
		printf("请输入第%d个学生姓名：",i+1);
		scanf("%s",&mid[i]);
		strcpy(s[i].name[i],mid);
		printf("请输入第%d个学生学号：",i+1);
		scanf("%s",s[i].xuehao);	
		printf("请输入第%d个学生年龄：",i+1);
		scanf("%d",s[i].age);
		printf("请输入第%d个学生分数：",i+1);
		scanf("%lf",s[i].score);
		printf("请输入第%d个学生联系电话：",i+1);
		scanf("%s",s[i].tel);
	}
}
void write_file(FILE*fp,int n,struct Student s[100])
{
	for(int i=0;i<n;i++)
	{
	fprintf(fp,"%s,%s,%d,%lf,%s",s[i].name[10][10],s[i].xuehao[10],s[i].age[10],s[i].score[10],s[i].tel[11][11]);
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
student_date(fp,n,s);
write_file(fp,n,s);
fclose(fp);
}