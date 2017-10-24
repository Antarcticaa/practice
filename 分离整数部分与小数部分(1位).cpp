#include<stdio.h> 
int main()
{
	double x;
	int a,b;
	printf("请输入一个小数：\n");
	scanf("%lf",&x);
	a=x;
	b=(x-a)*10;
	printf("整数部分=%d.\n小数点后第一位=%d.\n",a,b);
	return 0;
}
