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
		printf("�������%d��ѧ��������",i+1);
		scanf("%s",&mid1);
		strcpy(s[i].name,mid1);
		printf("�������%d��ѧ��ѧ�ţ�",i+1);
		scanf("%s",&mid2);
		strcpy(s[i].xuehao,mid2);
		printf("�������%d��ѧ�����䣺",i+1);
		scanf("%d",&s[i].age);
		printf("�������%d��ѧ��������",i+1);
		scanf("%f",&s[i].score);
		printf("�������%d��ѧ����ϵ�绰��",i+1);
		scanf("%s",&mid3);
		strcpy(s[i].tel,mid3);
	}
}

void write_file(FILE*fp,int n,struct Student *s)
{
	fprintf(fp,"����\tѧ��\t����\t����\t�绰\n");
	for(int i=0;i<n;i++)
	{
	fprintf(fp,"%s\t%s\t%d\t%.1f\t%s\n",s[i].name,s[i].xuehao,s[i].age,s[i].score,s[i].tel);
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
	student_date(n,s);
	write_file(fp,n,s);
	fclose(fp);
}