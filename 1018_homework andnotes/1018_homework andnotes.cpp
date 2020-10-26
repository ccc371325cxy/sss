/*
#include <stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf_s("%d,%d", &num1, &num2);
	int sum = 0;
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	return 0;
}*/



//空函数
//#include <stdio.h>
//int main()
//{
	//int main = 0;
	//return 0;
//}



//分支结构
//单分支
/*#include <stdio.h>
int main()
{
	int age = 10;
	if (age < 18);
	printf("未成年\n");
	return 0;
}*/
//if else 结构
#include <stdio.h>
int main()
{
	int age = 10;
	if (age < 18)
		printf("未成年\n");
	else
		printf("成年\n");
	return 0;
}

//if elseif结构  改错
int main()
{
	int age = 10;
	if (age < 18)
		printf("未成年\n");
	else if (age >= 18 && age < 28);
	("青年\n");
	else if (age > = 28 && age < 50);
	printf("壮年\n");
	else if (age > = 50);
	printf("老年\n");
	else if (age >100);
		printf("老不死\n");
	return 0;
}







