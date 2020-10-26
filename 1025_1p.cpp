//输入三个整数，输出其中较大的值
/*
#include <stdio.h>
int main()
{
	int a,b,c,max;
	printf("任意输入三个整数，用逗号隔开");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>b)
		max=a;
	else
		max=b;
	if(max<c)
		max=c;
	else//下面一行和这行多余，改进方法见下面
		max=max;
	printf("max=%d\n",max);
	return 0;
}
#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("任意输入三个整数，用逗号隔开");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>b)
		max=a;
	else
		max=b;
	if(c>max);//省略else子句
		max=c;
	return 0;
}

//请输入两个整数，输出其中的小数
//法一  基本通法
#include<stdio.h>
int main()
{
	inta,b,max;
	printf("请任意输入两个整数，用逗号隔开");
	scanf("%d,%d",&a,&b);
	if(a<b)
		min=b;
	else
		min=a;
	printf("min=%d\n",min);
	return 0;
}
//法二直接赋值   改进；减少一个变量，使用两个变量实现
#include<stdio.h>
int main()
{
	int a,b;
	printf("任意输入两个整数，用逗号隔开");
	scanf("%d,%d",&a,&b);
	if(a<b)
		printf("min=%d\n",a);
	else
		min=b;
	printf("min=%d\n",min);
	return 0;
}
//法三 直接输出法
#include <stdio.h>
int main()
{
	int a,b;
	printf("任意输入两个整数，用逗号隔开");
	scanf("%d,%d",&a,&b);
	if(a<b)
		printf("min=%d\n",a);
	else
		printf("min=%d\n",b);
	return 0;
} 
//符号常量举例
//已知圆的半径r=3.76,求圆的周长c，圆的面积s，圆的体积v
//最优表示
#define PAI 3.1415926//定义一个符号来代替π这个常量
#include <stdio.h>
#include <math.h>//ceil函数  需从数学库里调用
int main()
{
	double r,c,s,v;
	c=2*PAI*r;
	s=PAI*pow(r,2);
	v=4/3*PAI*pow(r,3);
	printf("c=%lf\ns=%lf\nv=%lf\n",c,s,v);
	return 0;
}
//计算打车费用
//行驶三公里内起步价为7.5元，超过三公里的另外以每公里1.5元计价
//1.键盘输入行驶公里数（>3），输出打车费用
//2.若对1.5计价进行了调整，不需要修改程序仍能实现（用符号常量实现）
//1
#include <stdio.h>
int main()
{
	double s,money;
	printf("请输入行驶公里数(>3)：");
	scanf("%lf",&s);
	money=7.5+1.5*(s-3);
	if(s>3)
	{	
		sum=7.5+1.5*(s-3);
		printf("打车费用：%.2lf元\n"，money);
	}
	return 0;
}
//2.法一，（不输出<=3的情况）
#define PRICE 1.5
#include <stdio.h>
#include <math.h>
int main()
{
	double s,money;
	printf("请输入行驶公里数：");
	scanf("%lf",&s);
	if(s>3)
	{
		money=7.5+ceil(s-3)*PRICE;
		printf("打车费用是：%.2lf元\n",money);
	}
	return 0;
}
//法二 （也输出<=3的情况）
#define PRICE 1.5
#include <stdio.h>
#include <math.h>
int main()
{
	double s,money;
	printf("请输入行驶公里数：");
	scanf("%lf",&s);
	if(s>3)
	{
		money=7.5+ceil(s-3)*PRICE;
		printf("打车的费用是：%.2lf元\n",money);
	}
	else
		printf("打车费用是：7.5元\n");
	return 0;
}
*/
//法二基础上的方法改进
//改进法1
/*
#define PRICE 1.5
#include <stdio.h>
#include <math.h>
int main()
{
	double s,money;
	printf("请输入行驶公里数：");
	scanf("%lf",&s);
	if(s>3)
		money=7.5+ceil(s-3)*PRICE;	
	else
		money=7.5;
	printf("打车费用是：%.2lf元\n",money);//最后输出只显示结果
	return 0;
}
*/
//总结；一定要看清题目，认真认真再认真！！！
/*
#define PRICE 1.5
#include <stdio.h>
#include <math.h>
int main()
{
	double s,money;
	printf("请输入行驶公里数：");
	scanf("%lf",&s);
	if(s<=3)
		money=7.5;	
	else
		money=7.5+ceil(s-3)*PRICE;
	printf("打车费用是：%.2lf元\n",money);//最后输出只显示结果
	return 0;
}
*/
//字符型数据
//输入O,K两个字符，并反序输出
/*
#include <stdio.h>
int main()
{
	char c;//该行要是不赋值，则另起一行，下面两行也是
	char a='O';
	char b='K';
	printf("%c,%c\n",a,b);//注意加换行的转义字符
	printf("%c,%c\n",b,a);
	return 0;
}
*/
//练习题任意输入两个字符，并反序输出
/*
#include <stdio.h>
int main()
{    
	char c1;
	char c2;
	printf("任意输入两个字符，并用逗号隔开：");
	scanf("%c,%c",c1,c2);
	printf("%c,%c\n",c1,c2);
	printf("%c,%c\n",c2,c1);
	return 0;
} 
*/


//字符型数据
//字符型数据与整数数据在一定条件下可以通用的条件
//1可以将字符型数据和整型数据通用
//2可以将字符型数据按整数输出
//例printf("%c",c1);义字符型数据形式输出c1的值，即a
//printf("%d",c1);以整型数据形式输出c1的值为97
//和取地址符有关
//例4像字符变量赋以整数
/*
#include<stdio.h>
int main()
{
	char c1,c2;
	c1='A';//A
	c2=66;//B,将左边赋值给右边
	printf("%c,%c\n",c1,c2);
	printf("%d,%d\n",c2,c1);
	return 0;
}
//3可以将字符型数据当做整数进行运算，此时相当于对于他们的ASCII码值，是一个整数，进行运算
//例五将小写字母a和b转换成大写字母A和B
#include<stdio.h>//小写比大写大32，A-Z;65-90.a-z;97-122.
int main()
{
	char c1,c2;
	c1='a';
	c2='b';
	c1=c1-32;
	c2=c2-32;
	printf("%c,%c\n",c1,c2);
	return 0;
}*/
//练习
/*
#include<stdio.h>
int main()
{
	char c1;
	printf("请输入一个大写字母，并用逗号隔开：");
	scanf("%c",&c1);
	c1=c1+32;//大写转小写用+,反之用-
	printf("%c\n",c1);
	return 0;
}*/
//练习，输入一个小写字母，输出其前一个字母的大写字母的ASCII码值
/*
#include<stdio.h>
int main()
{
	char c1;
	printf("请输入一个小写字母，并用逗号隔开：");
	scanf("%c",&c1);
	c1=c1-1-32;//大写转小写用+,反之用-
	printf("前一个字母的大写字母的ASCII码值是%d\n",c1);
	return 0;
}*/
//算法
//包括数值运算算法和非数值运算算法，后者重要
//请输入一个整数，判断其是否为偶数//偶数；能被2整除的数，且余数为0//   5/2求商为2,   5%2求余为1
/*
#include<stdio.h>
int main()
{
	int a;
	printf("输入需要判断的数：");
	scanf("%d",&a);
	if(a%2==0)//%表示相除取余数
		printf("%d是偶数\n",a);
	else
		printf("%d不是偶数\n",a);
	return 0;
}
*/	
//C语言生成的文件名后缀；
//源程序一般是.c或者.cpp
//头文件是.h
//编译后是.obj
//连接后是.exe




//10.26作业；练习；输入一个年份，判断其是否为闰年。
//闰年的条件：
//1能被4整除但不能被100整除或2.能被100整除，且能被400整除
//分析；两个条件为并列的。    能被400整除也能被100整除，更能被4整除，所以条件中3个数点的值域包含关系为4>100>400,依次作为分支判断时的节点
//流程图
//程序表示
//待做：
#include<stdio.h>
int main()
{
	int year;
	for (year=2000;year<=2500;year++)
		if(year%4  = 0 && year%100!=0 ||year%400==0)
			printf("%d是闰年\n",year);
	return 0;
}


















//加减乘除取余用一个例题
/*
#include <stdio.h>
void add()
int main()
{
	add();
	return 0;
}
void add()
{
	int num1,num2,sum;
	printf("请输入两个整数，用逗号隔开");
	scanf("&d,%d",&num1,&num2);
	sum=num1+num2;//运算符，优先级，复制次低，逗号最低
	printf("sum=%d\n",sum);










*/