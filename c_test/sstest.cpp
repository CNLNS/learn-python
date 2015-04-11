
#include <stdio.h>
#include <stdlib.h>

double area(double r)
{
	double pi=3.1415926;
	return pi*r*r;
}
int main()
{
	double r=0;
	printf("r=");
	scanf_s("%lf",&r);
	printf("the area is:%f\n",area(r));
	return 0;
}