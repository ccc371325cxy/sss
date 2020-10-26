/*
#include <stdio.h>
int main()
{
	int a,b,min;//    输入两个int函数， 若没有具体类型，则按小数类型处理
	printf("任意输入两个整数，用逗号隔开：\n");
	scanf("%d,%d",&a,&b);//输入
	if(a>b)//比较两数的大小，记录小的数，要加括号
		min=b;//改行需要再次缩进
	else//比较大小
		min=a;//也要再次缩进
	printf("min=%d\n",min);//输出小数
	return 0;
}


#include <stdio.h>
int main()
{
	int a,b,c,max;
	printf("任意输入三个整数，用，隔开：\n");
	scanf("%d,%d,%d",&a,&b,%c);
	if (a>b)
		max=a;
	else
		max=b;
	if (max<c)
		max=c;
	else
		max=max;
	printf("max=%d\n",max);
	return 0;
}*/













//改进,法一
/*
#include <stdio.h>
int main()
{
	int a,b;//    输入两个int函数， 若没有具体类型，则按小数类型处理
	printf("任意输入两个整数，用逗号隔开：\n");
	scanf("%d,%d",&a,&b);	//输入
	if(a<b)//比较两数的大小，记录小的数，要加括号
		a=a;//改行需要再次缩进
	else//比较大小
		a=b;//也要再次缩进
	printf("a=%d\n",a);//输出小数
	return 0;
}
*/
//法二
/*
#include<stdio.h>
int main()
{
	inta,b;
	printf("任意输入两个整数，用逗号隔开：\n");
	scanf("%d,%d%,d",&a,&b,&c);  
	if(a<b)
		printf("min=%d\n",a);
	else
		printf("min=%d\n",b);
	return 0；
}








#include <stdio.h>
int main()
{
	int a,b,c;
	printf("任意输入三个整数，用，隔开：\n");
	scanf("%d,%d,%d",&a,&b,%c);
	if (a>b)
		max=a;
	else
		max=b;
	if (max<c)
		max=c;
	else
		max=max;
	printf("max=%d\n",max);
	return 0;
}*/