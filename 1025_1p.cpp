//��������������������нϴ��ֵ
/*
#include <stdio.h>
int main()
{
	int a,b,c,max;
	printf("�������������������ö��Ÿ���");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>b)
		max=a;
	else
		max=b;
	if(max<c)
		max=c;
	else//����һ�к����ж��࣬�Ľ�����������
		max=max;
	printf("max=%d\n",max);
	return 0;
}
#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("�������������������ö��Ÿ���");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>b)
		max=a;
	else
		max=b;
	if(c>max);//ʡ��else�Ӿ�
		max=c;
	return 0;
}

//����������������������е�С��
//��һ  ����ͨ��
#include<stdio.h>
int main()
{
	inta,b,max;
	printf("���������������������ö��Ÿ���");
	scanf("%d,%d",&a,&b);
	if(a<b)
		min=b;
	else
		min=a;
	printf("min=%d\n",min);
	return 0;
}
//����ֱ�Ӹ�ֵ   �Ľ�������һ��������ʹ����������ʵ��
#include<stdio.h>
int main()
{
	int a,b;
	printf("�������������������ö��Ÿ���");
	scanf("%d,%d",&a,&b);
	if(a<b)
		printf("min=%d\n",a);
	else
		min=b;
	printf("min=%d\n",min);
	return 0;
}
//���� ֱ�������
#include <stdio.h>
int main()
{
	int a,b;
	printf("�������������������ö��Ÿ���");
	scanf("%d,%d",&a,&b);
	if(a<b)
		printf("min=%d\n",a);
	else
		printf("min=%d\n",b);
	return 0;
} 
//���ų�������
//��֪Բ�İ뾶r=3.76,��Բ���ܳ�c��Բ�����s��Բ�����v
//���ű�ʾ
#define PAI 3.1415926//����һ��������������������
#include <stdio.h>
#include <math.h>//ceil����  �����ѧ�������
int main()
{
	double r,c,s,v;
	c=2*PAI*r;
	s=PAI*pow(r,2);
	v=4/3*PAI*pow(r,3);
	printf("c=%lf\ns=%lf\nv=%lf\n",c,s,v);
	return 0;
}
//����򳵷���
//��ʻ���������𲽼�Ϊ7.5Ԫ�������������������ÿ����1.5Ԫ�Ƽ�
//1.����������ʻ��������>3��������򳵷���
//2.����1.5�Ƽ۽����˵���������Ҫ�޸ĳ�������ʵ�֣��÷��ų���ʵ�֣�
//1
#include <stdio.h>
int main()
{
	double s,money;
	printf("��������ʻ������(>3)��");
	scanf("%lf",&s);
	money=7.5+1.5*(s-3);
	if(s>3)
	{	
		sum=7.5+1.5*(s-3);
		printf("�򳵷��ã�%.2lfԪ\n"��money);
	}
	return 0;
}
//2.��һ���������<=3�������
#define PRICE 1.5
#include <stdio.h>
#include <math.h>
int main()
{
	double s,money;
	printf("��������ʻ��������");
	scanf("%lf",&s);
	if(s>3)
	{
		money=7.5+ceil(s-3)*PRICE;
		printf("�򳵷����ǣ�%.2lfԪ\n",money);
	}
	return 0;
}
//���� ��Ҳ���<=3�������
#define PRICE 1.5
#include <stdio.h>
#include <math.h>
int main()
{
	double s,money;
	printf("��������ʻ��������");
	scanf("%lf",&s);
	if(s>3)
	{
		money=7.5+ceil(s-3)*PRICE;
		printf("�򳵵ķ����ǣ�%.2lfԪ\n",money);
	}
	else
		printf("�򳵷����ǣ�7.5Ԫ\n");
	return 0;
}
*/
//���������ϵķ����Ľ�
//�Ľ���1
/*
#define PRICE 1.5
#include <stdio.h>
#include <math.h>
int main()
{
	double s,money;
	printf("��������ʻ��������");
	scanf("%lf",&s);
	if(s>3)
		money=7.5+ceil(s-3)*PRICE;	
	else
		money=7.5;
	printf("�򳵷����ǣ�%.2lfԪ\n",money);//������ֻ��ʾ���
	return 0;
}
*/
//�ܽ᣻һ��Ҫ������Ŀ���������������棡����
/*
#define PRICE 1.5
#include <stdio.h>
#include <math.h>
int main()
{
	double s,money;
	printf("��������ʻ��������");
	scanf("%lf",&s);
	if(s<=3)
		money=7.5;	
	else
		money=7.5+ceil(s-3)*PRICE;
	printf("�򳵷����ǣ�%.2lfԪ\n",money);//������ֻ��ʾ���
	return 0;
}
*/
//�ַ�������
//����O,K�����ַ������������
/*
#include <stdio.h>
int main()
{
	char c;//����Ҫ�ǲ���ֵ��������һ�У���������Ҳ��
	char a='O';
	char b='K';
	printf("%c,%c\n",a,b);//ע��ӻ��е�ת���ַ�
	printf("%c,%c\n",b,a);
	return 0;
}
*/
//��ϰ���������������ַ������������
/*
#include <stdio.h>
int main()
{    
	char c1;
	char c2;
	printf("�������������ַ������ö��Ÿ�����");
	scanf("%c,%c",c1,c2);
	printf("%c,%c\n",c1,c2);
	printf("%c,%c\n",c2,c1);
	return 0;
} 
*/


//�ַ�������
//�ַ�������������������һ�������¿���ͨ�õ�����
//1���Խ��ַ������ݺ���������ͨ��
//2���Խ��ַ������ݰ��������
//��printf("%c",c1);���ַ���������ʽ���c1��ֵ����a
//printf("%d",c1);������������ʽ���c1��ֵΪ97
//��ȡ��ַ���й�
//��4���ַ�������������
/*
#include<stdio.h>
int main()
{
	char c1,c2;
	c1='A';//A
	c2=66;//B,����߸�ֵ���ұ�
	printf("%c,%c\n",c1,c2);
	printf("%d,%d\n",c2,c1);
	return 0;
}
//3���Խ��ַ������ݵ��������������㣬��ʱ�൱�ڶ������ǵ�ASCII��ֵ����һ����������������
//���彫Сд��ĸa��bת���ɴ�д��ĸA��B
#include<stdio.h>//Сд�ȴ�д��32��A-Z;65-90.a-z;97-122.
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
//��ϰ
/*
#include<stdio.h>
int main()
{
	char c1;
	printf("������һ����д��ĸ�����ö��Ÿ�����");
	scanf("%c",&c1);
	c1=c1+32;//��дתСд��+,��֮��-
	printf("%c\n",c1);
	return 0;
}*/
//��ϰ������һ��Сд��ĸ�������ǰһ����ĸ�Ĵ�д��ĸ��ASCII��ֵ
/*
#include<stdio.h>
int main()
{
	char c1;
	printf("������һ��Сд��ĸ�����ö��Ÿ�����");
	scanf("%c",&c1);
	c1=c1-1-32;//��дתСд��+,��֮��-
	printf("ǰһ����ĸ�Ĵ�д��ĸ��ASCII��ֵ��%d\n",c1);
	return 0;
}*/
//�㷨
//������ֵ�����㷨�ͷ���ֵ�����㷨��������Ҫ
//������һ���������ж����Ƿ�Ϊż��//ż�����ܱ�2����������������Ϊ0//   5/2����Ϊ2,   5%2����Ϊ1
/*
#include<stdio.h>
int main()
{
	int a;
	printf("������Ҫ�жϵ�����");
	scanf("%d",&a);
	if(a%2==0)//%��ʾ���ȡ����
		printf("%d��ż��\n",a);
	else
		printf("%d����ż��\n",a);
	return 0;
}
*/	
//C�������ɵ��ļ�����׺��
//Դ����һ����.c����.cpp
//ͷ�ļ���.h
//�������.obj
//���Ӻ���.exe




//10.26��ҵ����ϰ������һ����ݣ��ж����Ƿ�Ϊ���ꡣ
//�����������
//1�ܱ�4���������ܱ�100������2.�ܱ�100���������ܱ�400����
//��������������Ϊ���еġ�    �ܱ�400����Ҳ�ܱ�100���������ܱ�4����������������3�������ֵ�������ϵΪ4>100>400,������Ϊ��֧�ж�ʱ�Ľڵ�
//����ͼ
//�����ʾ
//������
#include<stdio.h>
int main()
{
	int year;
	for (year=2000;year<=2500;year++)
		if(year%4  = 0 && year%100!=0 ||year%400==0)
			printf("%d������\n",year);
	return 0;
}


















//�Ӽ��˳�ȡ����һ������
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
	printf("�����������������ö��Ÿ���");
	scanf("&d,%d",&num1,&num2);
	sum=num1+num2;//����������ȼ������ƴεͣ��������
	printf("sum=%d\n",sum);










*/