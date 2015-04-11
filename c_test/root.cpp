#include<stdio.h>
#include<math.h>
void f(int a, int b ,int c )
{
	double root=b*b-4*a*c;
	if(root>0)
	{
		double x1,x2=0;
		x1=(b+sqrt(root))/(2*a);
		x2=(b-(root))/(2*a);
		printf("root1=%lf\n",x1);
		printf("root2=%lf\n",x2);
	}
	else  if(root==0)
			{
				double x=(-b)/(2*a);
				printf("x=%lf",x);
			}
		  else
		    {
			  printf("No answer");
			}
}
int main()
{
	int a,b,c;
	printf("a=");
	scanf_s("%d",&a);
	printf("b=");
	scanf_s("%d",&b);
	printf("c=");
	scanf_s("%d",&c);
	f(a,b,c);
	return 0;

}