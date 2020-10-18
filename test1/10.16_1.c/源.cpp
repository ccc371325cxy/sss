//#include <stdio.h>
//void main()
//{
	//printf("这是一个简单的C程序");
//}
//这是一个空型的main函数

//文本输出
//#include<stdio.h>
//int main()
//{
	//printf("Hello!\n");
	//return 0;
//}



/*
#include<stdio.h>
int main()
{
	//printf("welcome \n");
	//printf("to jinan\n");法一
	//printf("welcome\n to jian\n");
	//法二
	return 0;
}
*/





//数值计算与输出
//已知两个整数3和2，在屏幕上输出两数之和
//分析；1，已知3和
//2，计算3+2
//3,输出和
//注，任何一个程序的执行，必需先“调用”内存
/*
#include<stdio.h>
int main()
{
	int a, b, c;//定义了3个int变量1  先开房类型
	a = 3;//赋值
	b = 2;//赋值
	c = a + b;//计算   2 入住
	printf("c = %d\n", c);//要占位 数值 %d此处为给整数占位
	return 0;//输出和
}
*/

//要输出ji=60
#include<stdio.h>
int main()
{
	int a, b, c, ji;
	a = 3;
	b = 4;
	c = 5;
	ji = a * b * c;
	printf("ji=%d\n",ji);
	return 0;
}




















