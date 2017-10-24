#include<stdio.h>
main()
{
	double x;
	int y;
	printf("请输入一个小数:\n");
	scanf("%lf",&x);
	y=x+0.5;
	printf("四舍五入整数后的值为：%d\n",y);
	return 0;
}
