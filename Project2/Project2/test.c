#include <stdio.h>
#include <stdlib.h>
//1. �����������α�����ֵ��������ֵ�����ݽ��н����� 
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



//2. ����������ʱ���������������������ݣ������⣩ 
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


//3.��10 �����������ֵ�� 
//int main ()
//	{
//		int nums [10] = {0};
//		int i = 0 ;
//		int a = 0 ;
//		for (i; i < 10; i++ )
//		{
//			printf("�������%d����", i+1);
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
//		printf("��������%d\n", nums[0]);
//	}



//4.�����������Ӵ�С�����
//int  maxToMin(int i, int j , int k);
//int main ()
//{
//	int i = 0 ;
//	int arr[] = {0};
//	for(i; i < 3; i++)
//	{
//		printf("�������%d����\n", i+1);
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




//5.�������������Լ����
int findmax(int nums[]);
int*  findDivisor (int num);
int* divisorMerge(int arr1[], int arr2[]);
int main ()
{
	findmax(divisorMerge(findDivisor(5),findDivisor(3)));
	system("pause");
	return 0 ;
}

int findmax(int nums[]) // �ҳ�һ�������е����ֵ
	{
		int i = 0 ;
		for (i ; i < sizeof(nums)/8; i++ )
		{
			if (nums[0] <= nums[i+1])
			{
			nums [0] = nums[i+1];
			}
		}
		printf("��������%d\n", nums[0]);
		return 0 ;
	}
int*  findDivisor (int num)  //�ҳ�һ���������� ����һ������
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
int* divisorMerge(int arr1[], int arr2[])//�ҳ�����������ֵ��ͬ�Ĳ���,����һ������
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
