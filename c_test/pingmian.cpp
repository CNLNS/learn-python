#include <stdio.h>
#include <stdlib.h>
double f(int a,int b,int c)
{
	
	return  a+b+c;

}
int main()
{
	int a,b,c;
	
	printf("a=","b=","c=");
	scanf_s("%d""%d""%d",&a,&b,&c);
	double d= f(a,b,c);
	printf("result:%lf\n",d);
	return 0;
}