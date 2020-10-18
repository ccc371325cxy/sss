#include<stdio.h>
int main()
{
	int c; 
	double a,b,sum;
	printf("任意输入一个整数，两个小数，用逗号间隔:");
	scanf("%lf,%lf",&a,&b);
	sum=a+b;
	printf("sum=%.3lf",sum);
	return 0;
}