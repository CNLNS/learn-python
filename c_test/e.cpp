#include <stdio.h>

int factorial(int n)
{   
	int f=1;
	for(int i=1;i<=n;i++)
	{
		f *= i;
	}
	return f;
		
}

int main()
{	
	int n;
	printf("n=");
	scanf("%d",&n);

	double e = 1.0;
	int f = 1;
	for(int i=1;i<=n;i++)
	{
		f=factorial(i);	
		e += 1.0/f;
	}	
	printf("e=%lf\n",e);
	return 0;
}

