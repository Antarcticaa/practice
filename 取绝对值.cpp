#include<stdio.h>
int main()
{
	double a;
	puts("������һ������");
	scanf("%lf",&a);
	if (a==0)
	puts("���ľ���ֵ��0");
	else if(a>0) 
	printf("���ľ���ֵ��%lf",a);
	else
	printf("���ľ���ֵ��%lf",-a);
	return 0;
	}
