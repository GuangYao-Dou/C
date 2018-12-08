#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定， 
//输入9，输出9*9口诀表，输入12，输出12*12的乘法口诀表。 
//int mulTable(int x )
//{
//	int i = 0 ;
//	int j = 0 ;
//	for (i = 1 ; i <= x; i++ )
//	{
//		for(j = 1; j <= i; j++ )
//		{
//			printf("%2d x %2d = %3d   ",j, i, i*j);
//		}
//		printf("\n");
//	}
//}
//int main ()
//{
//	int choice = 0;
//	while (choice !=-1)
//	{
//	printf("请输入你想得到的乘法口诀表的规模(输入 -1 退出)\n");
//	scanf("%d", &choice);
//	printf("==========================================================\n");
//	mulTable(choice);
//	}
//	system("pause");
//	return 0;
//}

//2.使用函数实现两个数的交换。 

//int numChange(int* x, int* y)
//{
//	int tem;
//	tem = *x;
//	*x = *y;
//	*y = tem;
//
//}
//int main ()
//{
//	int a = 72 ;
//	int b = 54 ;
//	printf("交换前：\na = %d  , b = %d\n", a, b);
//	numChange(&a, &b);
//	printf("交换后：\na = %d  , b = %d\n", a, b);
//	system("pause");
//	return 0;
//}
//3.实现一个函数判断year是不是润年。

//int isLeapYear(int year)
//{
//	if (year % 4 == 0 || year % 400 == 0)
//	{
//		printf("%d是闰年\n",year);
//	}
//	else
//		printf("%d不是闰年",year);
//	return 0;
//}
//
//int main ()
//{
//	int year = 0 ;
//	while (year != -1)
//	{
//	printf("亲输入需要判定的年份\n");
//	scanf("%d",&year);
//	isLeapYear(year);
//	}
//	system("pause");
//	return 0;
//	
//}


//411111. 
//创建一个数组， 
//实现函数init（）初始化数组、 
//实现empty（）清空数组、 
//实现reverse（）函数完成数组元素的逆置。 
//要求：自己设计函数的参数，返回值。 
//
//int init(int* arr)
//{
//	*arr = { 4, 1, 6, 0, 9, 0, 5};
//	return *arr;
//}
//int empty(int* arr)
//{
//	*arr = { NULL} ;
//}
//
//int reverse(int* arr, int leng)
//{
//	int i = 0 ;
//	
//}
//
//int main ()
//{
//	int arr [] = {0};
//	init(&arr);
//
//}

//5.实现一个函数，判断一个数是不是素数。
//int isPrime(int num)
//{
//	int i = 0 ;
//	if(num == 1)
//		return 1;
//	for(i = 2; i < num; i++)
//	{
//		if(num % i == 0)
//			return 1;
//	}
//	return 0;
//}
//int main ()
//{
//	int num = 0;
//	while (num != -1)
//	{
//		printf("请输入要判定的数（输入-1退出）\n");
//		scanf("%d",&num);
//		if(isPrime(num) == 1)
//			printf("%d不是素数\n",num);
//		else
//			printf("%d是素数\n",num);
//	}
//	system("pause");
//	return 0;
//
//}
