#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//1.在屏幕上输出以下图案： 
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



//2.求出0～999之间的所有“水仙花数”并输出。 
//“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3?，则153是一个“水仙花数”。 
/* 
在数论中，水仙花数（Narcissistic number）也称为自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），是指一N位数，其各个数之N次方和等于该数。 
例如153、370、371及407就是三位数的水仙花数，其各个数之立方和等于该数： 
153 = 1^3 + 5^3 + 3^3。 
370 = 3^3 + 7^3 + 0^3。 
371 = 3^3 + 7^3 + 1^3。 
407 = 4^3 + 0^3 + 7^3。 
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
//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字， 
//例如：2+22+222+2222+22222 
int findAdd(int num);
int main ()
{
	int x = 0 ;
	printf("请输入一个0--10以内的数\n");
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