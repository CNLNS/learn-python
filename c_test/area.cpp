#inclue <stdlib.h>
#include <stdio.h>

//获取用户输入
double readRadius()
{
    double r = 0;
    printf("请输入半径:");
    scanf("%d", &r);
    return r;
}

//计算面积
double area(double r)
{
     double pi = 3.1415926;
     return pi*r*r;
}

int main()
{
     double r = readRadius();
     printf("面积:%f", area(r));
     return 0;
}