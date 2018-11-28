#include <stdio.h>
#include <stdlib.h>

//1. 将数组A中的内容和数组B中的内容进行交换。（数组一样大） 
//int main ()
//{
//	int i = 0;
//	int arr[] = { 1, 56, 8, 6, 54, 66};
//	int arr1[] = {5, 25, 6, 58, 6, 99};
//	int arr3[sizeof(arr)/8] = {0};
//	for( i ; i < sizeof(arr)/4 ; i++)
//	{
//		arr3[i] = arr[i];
//		arr [i] = arr1[i];
//		arr1[i] = arr3[i];
//	}
//	printf("%d   %d   %d",arr[1], arr[2], arr[5] );
//	system("pause");
//	return 0;
//}




//2. 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。
//int main ()
//{
//	int i = 0 ;
//	double  sum = 0;
//	for( i = 1 ; i <= 100 ; i++)
//	{
//		if(i % 2 == 0)
//		{
//			sum = sum- 1/i; 
//		}
//		else
//		{
//			sum = sum  + 1/i;
//		}
//	}
//	printf("%f",sum);
//	system("pause");
//	return 0;
//}



//3. 编写程序数一下 1到 100 的所有整数中出现多少次数字9。
int main ()
{
	int i = 0 ;
	int j = 0 ;
	int arr[] = {0};
	char str[] = {0} ;
	int count = 0;
	for( i = 0; i < 100 ; i++)
	{
		arr [i] = i + 1 ;
	}
	for( j = 0; j < 100; j++)
	{
		itoa(arr[j], str,10); //arr[j]欲转换的整形值，str目标的字符串数组 ， 10 => 十进制；
		if(str[0] == '9' || str[1] == '9')
			count++;
		else 
			if(str[0] == '9' && str[1] == '9')
				count = count + 2;
	}
	printf("%d",count);
	system("pause");
	return 0;
}