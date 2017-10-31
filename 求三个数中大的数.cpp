#include<stdio.h>
int main(){
	double n1,n2,n3,max;
	puts("请输入三个数。" );
	printf("数1:",n1) ;  scanf("%lf",&n1);
	printf("数2:",n2) ;  scanf("%lf",&n2);
	printf("数3:",n1) ;  scanf("%lf",&n3);
	max=n1;
	if(n2>max) max=n2;
	if(n3>max) max=n3;
	printf("最大值是%lf.\n",max);
	return 0;
}

