#include<stdio.h>
int main(){
	double n1,n2,n3,max;
	puts("��������������" );
	printf("��1:",n1) ;  scanf("%lf",&n1);
	printf("��2:",n2) ;  scanf("%lf",&n2);
	printf("��3:",n1) ;  scanf("%lf",&n3);
	max=n1;
	if(n2>max) max=n2;
	if(n3>max) max=n3;
	printf("���ֵ��%lf.\n",max);
	return 0;
}

