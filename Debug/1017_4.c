#include<stdio.h>
int main()
{
	int c;
	float a,b;
	printf("任意输入一个整数，再输入两个小数，用逗号间隔：");
	scanf("%d,%f,%f",&c,&a,&b);//将和放进没用的房间，一个变量可以重复赋值
	a=c+a+b;//不一定四个变量都住一个房间，只有和可以改变，赋值新的变量数值
	printf("he shi %.2f\n",a）;
	return 0;
}	



	
	




