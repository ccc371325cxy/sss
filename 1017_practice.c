//#include<stdio.h>
//int main()
//{
	//已知两个整数，输出和
	//int a,b,he;
	//a=2;
	//b=3;
	//he =a+b;
	//printf("he = %d\n",he);
	//return 0;




//改成输出3*4*5=60
//	int a,b,c,ji;
//	a=2;
//	b=1;
//	c=1;
//	ji=a*b*c;
//	printf("%d*%d*%d=%d\n",a,b,c,ji);//前后一一对应
//  return 0;





//想输出ji=60
//	int a,b,c,ji;
//	a=3;
//	b=4;
//	c=5;
//	ji=3*4*5;
//	printf("ji=%d\n",ji);
//	return 0;
//前面有几个占位符，后面就有几个参数，必须次序一一对应





//数值计算功能；常用于，对记录了数值的变量进行的计算
	/*            
	程序规范，程序代码要有缩进
	          主要代码语句；加注释；两种常用方法






//求两个整数的和
#include<stdio.h>
int main()
{

	int a,b,sum;
	a=1;
	b=2;
	sum=a+b;
	printf("sum=%d\n",sum);	
	return 0;	  

}





数值输入
程序规范；将需要计算的数值输入到计算机使用scanf函数将键盘输入的数值记录到变量的内存单元里
输入两个整数，输出两数之和
#include<stdio.h>
intmain（）
{
*/
/*	
	int a,b,sum;
	printf("任意输入两个整数，用，隔开：\n");//要先写提示让客户明白    ，但是要是用 隔开的话，就会在输出时结果不准确
	scanf("%d,%d",&a,&b);//输入两个整数
	sum=a + b;//计算和
	printf("sum=%d\n",sum);
	return 0;
}
*/
 //输入两个小数，输出两数的和
//#include<stdio.h>
//int main()
//{
//	float a,b,sum;
	//printf("任意输入两个小数，用，隔开：\n");
	//scanf("%f,%f",&a,&b);
	//sum=a + b;
	//printf("sum =%f\n",sum);
	//return 0;
//}

  
	//输入一个整数，两个小数，输出结果显示三位小数
	//int a;
	//float b,c,sum;
	//printf("任意输入一个整数，两个小数，并用，隔开：\n");
	//scanf("%d,%f,%f",&a,&b,&c);
	//sum=a+b+c;
	//printf("sum=%.3f\n",sum);
   //法一 


//题目不变，输出结果显示算式且结果为两位小数
/*
	int a;
	float b,c,sum;
	printf("任意输入一个整数，两个小数，并用，隔开：\n");
	scanf("%d,%f,%f",&a,&b,&c);
	sum=a+b+c;  
	printf("%d+%f+%f=%.2f\n",a,b,c,sum);//前后对应，英文，一项也不能错	
	return0；	  
	
	  

//改进；减少一个变量，使用三个变量实现
*/	
//	int a;
//	float b,c;
//	printf("任意输入一个整数，两个小数，并用，隔开：\n");
//	scanf("%d,%f,%f",&a,&b,&c);//要减少一个变量只能从sum中改变，只是开房，没有说具体要住哪个房间，这四间不是同时住人的，所以要赋值给前面三个中的某个变量，前提是该变量为空房间，所以可以将第四个变量赋值加入到空房间内
//	b=a+b+c;
//	printf("%d+%f+%f=%.2f\n",a,b,c,sum");
//	return 0;	
//法一




//法二
	//int a;
	//float b,c;
	//printf("任意输入一个整数，两个小数，并用，隔开：\n");
	//scanf("%d,%f,%f",&a,&b,&c);//要减少一个变量只能从sum中改变，只是开房，没有说具体要住哪个房间，这四间不是同时住人的，所以要赋值给前面三个中的某个变量，前提是该变量为空房间，所以可以将第四个变量赋值加入到空房间内
	//b=a+b+c;
	//printf("%d+%f+%f=%.2f\n",a,b,c,a+b+c");
	//return 0;	




//数值比较（见课本第四章内容）
//比较大小
//输入两个整数，输出其中的大数
//#include <stdio.h>
//int main()
/*{
	int a,b,max;//   输入两个int函数，  若没有具体类型，则按小数类型处理
	printf("任意输入两个整数，用逗号隔开：\n");
	scanf("%d,%d",&a,&b);//输入
	if(a>b)//比较两数的大小，记录大的数，要加括号
		max=a;//改行需要再次缩进
	else//比较大小
		max=b;//也要再次缩进
	printf("max=%d\n",max);//输出大数
	return 0;
}

*/






//练习1，输入两个整数，输出其中的小数
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
*/
//练习2，输入三个整数，输出其中的大数
#include <stdio.h>
int main()
{
	int a,b,c,max;//     输入三个int函数，若没有具体类型，则按小数类型处理
	printf("任意输入三个整数，用逗号隔开：\n");
	scanf("%d,%d,%d",&a,&b,&c);//输入
	if(a>b)//比较两数的大小，记录大的数，要加括号，无分号
		max=a;//改行需要再次缩进，有分号
	else//比较大小，无分号
		max=b;//也要再次缩进，有分号
	if(max<c)//判断大小
		max=c;//判断大小
	else//判断大小
		max=max;//第一个是最大值，第二个是赋的值
	printf("max=%d\n",max);
	return 0;
}
	

  
	
	  
		
		  
			
			  
				
				  
					
					  
						
						  
							
							  
								
								  
									
									  
										
	









