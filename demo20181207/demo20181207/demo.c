#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ���� 
//����9�����9*9�ھ�������12�����12*12�ĳ˷��ھ��� 
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
//	printf("����������õ��ĳ˷��ھ���Ĺ�ģ(���� -1 �˳�)\n");
//	scanf("%d", &choice);
//	printf("==========================================================\n");
//	mulTable(choice);
//	}
//	system("pause");
//	return 0;
//}

//2.ʹ�ú���ʵ���������Ľ����� 

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
//	printf("����ǰ��\na = %d  , b = %d\n", a, b);
//	numChange(&a, &b);
//	printf("������\na = %d  , b = %d\n", a, b);
//	system("pause");
//	return 0;
//}
//3.ʵ��һ�������ж�year�ǲ������ꡣ

//int isLeapYear(int year)
//{
//	if (year % 4 == 0 || year % 400 == 0)
//	{
//		printf("%d������\n",year);
//	}
//	else
//		printf("%d��������",year);
//	return 0;
//}
//
//int main ()
//{
//	int year = 0 ;
//	while (year != -1)
//	{
//	printf("��������Ҫ�ж������\n");
//	scanf("%d",&year);
//	isLeapYear(year);
//	}
//	system("pause");
//	return 0;
//	
//}


//411111. 
//����һ�����飬 
//ʵ�ֺ���init������ʼ�����顢 
//ʵ��empty����������顢 
//ʵ��reverse���������������Ԫ�ص����á� 
//Ҫ���Լ���ƺ����Ĳ���������ֵ�� 
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

//5.ʵ��һ���������ж�һ�����ǲ���������
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
//		printf("������Ҫ�ж�����������-1�˳���\n");
//		scanf("%d",&num);
//		if(isPrime(num) == 1)
//			printf("%d��������\n",num);
//		else
//			printf("%d������\n",num);
//	}
//	system("pause");
//	return 0;
//
//}
