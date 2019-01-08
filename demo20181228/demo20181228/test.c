#include <stdio.h>
#include <stdlib.h>
//1.递归和非递归分别实现求第n个斐波那契数。 
//int fib(int i)
//
//	{
//	if ( i > 2 )
//		return fib(i-1) + fib(i-2);
//	else if(i == 2 || i == 1)
//		return 1;
//	}
//int fibfor(int i)
//	{
//	int j = 0;
//	int temp = 0;
//	int temp1 = 1;
//	int temp2 = 1;
//	if (i <= 2)
//		{
//		return 1;
//		}
//	else
//		{
//		for(j = 3; j < i +1; j++)
//			{
//			if(j % 2 != 0)
//				{
//					temp1 = temp1 + temp2;
//					temp = temp1 ;
//				}
//			else
//				{
//					temp2 = temp1 + temp2;
//					temp = temp2 ;
//				}
//			}
//		}
//	return temp ;
//	}
//int main ()
//	{
//	int i = 0 ;
//	while(1){
//	printf("请输入你要计算的第几个数：\n");
//	scanf("%d",&i);
//	printf("第%d个的斐波那契数为： %d\n",i,fibfor(i));
//	printf("第%d个的斐波那契数为： %d\n",i,fib(i));
//		}
//	system("pause");
//	return 0;
//	}



//2.编写一个函数实现n^k，使用递归实现 
int nk(int n, int k)
	{
	if (k<2)
		return n;
	else
		{
		return n*nk(n,k-1);
		}
	}
//int main (){
//	printf("%d",nk(5,4));
//	system("pause");
//	}

//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和， 
//例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19 
//int DigitSum(int n)
//	{
//		if(n<9)
//			return n ;
//		else
//			{
//			return (n%10 + DigitSum(n/10));
//			}
//	}
//int main()
//	{
//		printf("%d",DigitSum(1254));
//		system("pause");
//		return 0;
//	}


//4. 编写一个函数 reverse_string(char * string)（递归实现） 
//实现：将参数字符串中的字符反向排列。 
//要求：不能使用C函数库中的字符串操作函数。 

char reverse_string(char* string)
	{
			
	}

//5.递归和非递归分别实现strlen 

//int strle(char* arr)
//	{
//		if(*arr == '\0')
//			return 0 ;
//		else
//			return 1 + strle(arr + 1);
//	}
//int main()
//	{
//	char arr[] = "asdffsag";
//	printf("%d",strle(arr));
//	system("pause");
//	return 0 ;
//	}

//6.递归和非递归分别实现求n的阶乘 

//int  Factorial(int n)
//	{
//		if(n < 2)
//			return n ;
//		else
//			return n*Factorial(n-1);
//	}
//int facfor(int n)
//	{
//		int tem = 1 ;
//		int i = 0 ;
//		for(i = 1; i <= n; i++)
//			tem = i * tem;
//		return tem ;
//	}
//int main()
//	{
//	printf("%d\n",Factorial(6));
//	printf("%d\n",facfor(6));
//	system("pause");
//	return 0 ;
//	}



//7.递归方式实现打印一个整数的每一位 

//int shu(int num)
//	{
//		int arr[] = {0};
//		if(num<9)
//			{
//			printf("%d\n",num);
//			}
//		else
//			{
//			printf("%d\n",num%10);
//			shu(num/10);
//			}
//	}
//int main()
//	{
//	shu(12356);
//	system("pause");
//	return 0;
//	}