#include<stdio.h>
int main()
{
	float a,b,sum;
	printf("任意输入两个小数，用逗号间隔：");
	scanf("%f,%f",&a,&b);
	sum=a+b;
	printf("sum =%f",sum);
	return 0;     
}