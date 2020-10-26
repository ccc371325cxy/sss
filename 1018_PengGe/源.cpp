//前几节去看印象笔记，后几节在编辑器上
//课前一聘用真题
//交换两个int变量的值，不能使用第三个变量，即a=3,b=5,交换之后，a=5,b=3;
/*#include <stdio.h>
int main()
{
	//交换两个变量
	int a = 3;
	int b = 5;
	//生活实例，一瓶醋和酱油，要想交换，要找一个空瓶，然后依次倒入，进行替换
	printf("交换前a=%d,b=%d \n",a,b);
	int c = 0;//空瓶
	c = a;//将右边的值给到c里面去，右边赋值给左边
	a = b;
	b = c;
	printf("交换后a=%d,b=%d\n",a,b);
	return 0;
}*/





//此时不能有那个空瓶，引入一个函数来表示，或者用加减法来表示,法一
/*
#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	printf("交换前：a=%d,b=%d\n",a,b);
	a = a + b;//此时前面的a表示和   b还是原来的b
	b = a - b;//b得到原来的a
	a = a - b;//a表示和，b放的是原来的a，所以原来的 b放到a中
	printf("交换后：a=%d,b=%d",a,b);
	return 0;
}
*/

//法二按位异或
#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	printf("交换前：a=%d,b=%d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("交换后：a=%d,b=%d\n",a,b);
	return 0;
}

//a=3     001按位异或后变成110 110，继续变成011
//b=5    101按位异或后变成101 011，继续后变成101
//所以a和b发生替换
//进入企业；会采用三个变量的方法，代码的可读性高，执行效率高
//异或的操作；可读性低，执行效率低








