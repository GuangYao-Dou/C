#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//1.����Ļ���������ͼ���� 
//* 
//*** 
//***** 
//******* 
//********* 
//*********** 
//************* 
//*********** 
//********* 
//******* 
//***** 
//*** 
//* 

//int main ()
//{
//	int i = 0 ;
//	int j = 0 ;
//	for ( i = 0 ; i < 7 ; i++)
//	{
//		for(j = 0 ; j < 13 ; j++)
//		{
//			if(j < (1+2*i))
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//				printf("\n");
//	}
//	for (i = 0 ; i < 6 ; i++ )
//	{
//		for (j = 0; j < 11; j++ )
//		{
//			if(j < (11-2*i))
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}



//2.���0��999֮������С�ˮ�ɻ������������ 
//��ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ȷ�õ��ڸ��������磻153��1��5��3?����153��һ����ˮ�ɻ������� 
/* 
�������У�ˮ�ɻ�����Narcissistic number��Ҳ��Ϊ������������������ķ˹׳����ķ˹��������Armstrong number������ָһNλ�����������֮N�η��͵��ڸ����� 
����153��370��371��407������λ����ˮ�ɻ������������֮�����͵��ڸ����� 
153 = 1^3 + 5^3 + 3^3�� 
370 = 3^3 + 7^3 + 0^3�� 
371 = 3^3 + 7^3 + 1^3�� 
407 = 4^3 + 0^3 + 7^3�� 
*/ 
//int main ()
//{
//	int i = 0 ;
//	int a = 0 ;
//	int b = 0 ;
//	int c = 0 ;
//	for(i = 0; i < 1000; i++)
//	{
//		a = i/100 ;
//		b = (i/10)%10;
//		c = i%10 ;
//		if(a*a*a+b*b*b+c*c*c == i)
//		printf("%d\n",i);
//	}
//	system("pause");
//	return 0;
//}



//3. 
//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣� 
//���磺2+22+222+2222+22222 
int findAdd(int num);
int main ()
{
	int x = 0 ;
	printf("������һ��0--10���ڵ���\n");
	scanf( "%d", &x);
	findAdd(x);
	system("pause");
	return 0;
}

int findAdd(int num)
{
	int i = 0 ;
	int sum = 0;
	int endsum = 0 ;
	for (i = 0 ; i < 5 ; i++)
	{
		sum = sum + num * pow(10.0 , i);
		endsum = endsum + sum ;
	}
	printf("%d\n", endsum);

}