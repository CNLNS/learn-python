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
		printf("�������%d��ѧ��������",i+1);
		scanf("%s",&mid[i]);
		strcpy(s[i].name[i],mid);
		printf("�������%d��ѧ��ѧ�ţ�",i+1);
		scanf("%s",s[i].xuehao);	
		printf("�������%d��ѧ�����䣺",i+1);
		scanf("%d",s[i].age);
		printf("�������%d��ѧ��������",i+1);
		scanf("%lf",s[i].score);
		printf("�������%d��ѧ����ϵ�绰��",i+1);
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
	printf("����������ͳ��ѧ������\n");
	printf("����������ѧ���ĸ���\n");
	printf("Ȼ��ֱ�����ѧ����������ѧ�ţ����䣬�ɼ�����ϵ�绰\n");
	printf("���ձ�����Ὣ��Щ����ͳ�ƺ�ŵ��ļ��ڲ������\n\n\n");
	printf("�����Ҫ�鿴�뵽����ĸ�Ŀ¼�鿴�ļ�\n");
}
int main()
{
FILE*fp;
fp = fopen("student.txt","w+");
help();
int n;
printf("����������ͳ�Ƶ�ѧ��������");
scanf("%d",&n);
Student s[100];
student_date(fp,n,s);
write_file(fp,n,s);
fclose(fp);
}