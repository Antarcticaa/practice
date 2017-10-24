#include<stdio.h>
main()
{
	double a,b,c,d,m,n,x,y;
	printf("请依次输入x,y前面的系数a,b,c,d以及m,n的值.\n"); 
	scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&m,&n);
	x=(m*d-b*n)/(a*d-b*c);
    y=(m*c-a*n)/(b*c-a*d);  
    printf("x的值为%lf,y的值为%lf.\n",x,y);
    return 0;
 } 
