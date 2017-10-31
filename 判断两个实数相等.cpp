#include<stdio.h>
int main()
{
	double n1,n2;
	puts("请输入两个实数。");  
	printf("实数1：");  scanf("%lf",&n1);
	printf("实数2：");  scanf("%lf",&n2);
	if(n1==n2)
	puts("两个实数相等。");
    else
    puts("两个实数不相等。");
    return 0;
}
