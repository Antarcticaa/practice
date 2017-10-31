#include<stdio.h>
int main()
{
	double n1,n2; 
	puts("请输入两个实数。");
	printf("实数1：");  scanf("%lf",&n1);
	printf("实数2：");  scanf("%lf",&n2);
	if (n1>n2)
	printf("两个数中大的数是：%f",n1);
	else
	printf("两个数中大的数是：%f",n2);
	return 0; 
}
