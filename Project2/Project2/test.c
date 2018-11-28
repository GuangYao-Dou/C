#include <stdio.h>
#include <stdlib.h>
//1. 给定两个整形变量的值，将两个值的内容进行交换。 
//int main ()
//	{
//		int a = 5 ;
//		int b = 8 ;
//		int c = a ;
//		a = b ;
//		b = c ;
//		printf("a = %d\nb = %d\n", a, b);
//		system("pause");
//		return 0 ;
//	}



//2. 不允许创建临时变量，交换两个数的内容（附加题） 
//int main ()
//	{
//		int a = 11 ;
//		int b = 17 ;
//		a = a ^ b ;
//		b = a ^ b ;
//		a = a ^ b ;
//		printf("a = %d\nb = %d\n", a, b);
//		system("pause");
//		return 0 ;
//	}


//3.求10 个整数中最大值。 
//int main ()
//	{
//		int nums [10] = {0};
//		int i = 0 ;
//		int a = 0 ;
//		for (i; i < 10; i++ )
//		{
//			printf("请输入第%d个数", i+1);
//			scanf("%d" , &a);
//			nums [i]  =  a ;
//		}
//		findmax (nums , 10) ;
//		system ("pause");
//		return 0;
//	}
//int findmax(int nums[], int length)
//	{
//		int i = 0 ;
//		for (i ; i < length; i++ )
//		{
//			if (nums[0] <= nums[i+1])
//			{
//			nums [0] = nums[i+1];
//			}
//		}
//		printf("最大的数是%d\n", nums[0]);
//	}



//4.将三个数按从大到小输出。
//int  maxToMin(int i, int j , int k);
//int main ()
//{
//	int i = 0 ;
//	int arr[] = {0};
//	for(i; i < 3; i++)
//	{
//		printf("请输入第%d个数\n", i+1);
//		scanf("%d", &arr[i]);
//	}
//	maxToMin(arr[0], arr[1], arr[2]);
//	system("pause");
//	return 0 ;
//}
//int  maxToMin(int i, int j , int k)
//{
//	if(i >= j && i >= k)
//	{
//		if(j >= k)
//			printf("%d   %d   %d", i, j, k);
//		else
//			printf("%d   %d   %d", i, k, j);
//	}
//	if (j >= i && j >= k)
//	{
//		if( i >= k )
//			printf("%d   %d   %d", j, i, k);
//		else
//			printf("%d   %d   %d", j, k, i);
//	}
//	if( k >= i && k>= j)
//	{
//		if(i >= j)
//			printf("%d   %d   %d", k, i , j );
//		else
//			printf("%d   %d   %d", k, j , i );
//	}
//
//}




//5.求两个数的最大公约数。
int findmax(int nums[]);
int*  findDivisor (int num);
int* divisorMerge(int arr1[], int arr2[]);
int main ()
{
	findmax(divisorMerge(findDivisor(5),findDivisor(3)));
	system("pause");
	return 0 ;
}

int findmax(int nums[]) // 找出一个数组中的最大值
	{
		int i = 0 ;
		for (i ; i < sizeof(nums)/8; i++ )
		{
			if (nums[0] <= nums[i+1])
			{
			nums [0] = nums[i+1];
			}
		}
		printf("最大的数是%d\n", nums[0]);
		return 0 ;
	}
int*  findDivisor (int num)  //找出一个数的因数 返回一个数组
{
	int arr[] = {0};
	int j = 0 ;
	int i = 0;
	for (i = 1; i <= num ; num++)
	{
		if(num % i == 0)
			arr[j] = i ;
	}
	return arr;
}
int* divisorMerge(int arr1[], int arr2[])//找出两个数组中值相同的部分,返回一个数组
{
	int i = 0 ;
	int j = 0 ;
	int k = 0 ;
	int arr3[] = {0} ;
	for(i ; i < (sizeof(arr1))/8; i++)
	{
		for( j; j < (sizeof(arr2))/8; j++)
		{
			if(arr1[i] == arr2[j])
			{
				arr3[k] = arr1[i];
				k++;
			}
		}
	}
	return arr3;
}
