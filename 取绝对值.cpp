#include<stdio.h>
int main()
{
	double a;
	puts("请输入一个数。");
	scanf("%lf",&a);
	if (a==0)
	puts("它的绝对值是0");
	else if(a>0) 
	printf("它的绝对值是%lf",a);
	else
	printf("它的绝对值是%lf",-a);
	return 0;
	}
