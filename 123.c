/*#include<stdio.h>
int main()
{
	int a;
	float sum;
	printf("请输入打车公里数：\n");
	scanf("%d",&a);
	sum=7.5+1.5*(a-3);
	if(a<3)
		printf("打车费用为7.5元\n");
	else
		printf("打车费用为7.5+1.5*(a-3)=%f\n",sum);
	return 0;
}
//单分支
	if
		语句1；
	else
		语句2；
//多分支
	if(表达式1)
		语句一；
	elseif(表达式2)
		语句二；
	else()
		语句三；



//指定宽度的变量常量的输出的printf函数*/
/*
#include <stdio.h>
int main()
{
	printf("%d,%d\n",5,50);//前后各项都对应
	return 0;
}


*/
/*
#include<stdio.h>
int main()
{
	printf("a=%d,b=%d\n",5,50);
	return 0;
}
了解十进制，八进制，十六进制


*/
/*
#include<stdio.h>
int main()
{
	int age;
	printf("请任意输入一个年龄：\n");
	scanf("%d",&age);
	if(age<18)
		printf("今年\n");
	else if(age >=18  && age<30)
		printf("壮年\n");
	else if (age>30)
		printf("老年\n");
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	printf("%d\n",10);//表示右边有两个位被占了，左边还剩10-2=8个
	printf("%d\n",100);//依次同理
	printf("%d\n",1000);
	printf("%d\n",100000);
	return 0;
}*/
#include <stdio.h>
int main()
{
	int x,y,z;
	x=1;
	y=2;
	z=x+y;
	printf("%d,%d,%d\n",x,y,z);
	return 0;
}