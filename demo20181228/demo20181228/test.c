#include <stdio.h>
#include <stdlib.h>
//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲��������� 
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
//	printf("��������Ҫ����ĵڼ�������\n");
//	scanf("%d",&i);
//	printf("��%d����쳲�������Ϊ�� %d\n",i,fibfor(i));
//	printf("��%d����쳲�������Ϊ�� %d\n",i,fib(i));
//		}
//	system("pause");
//	return 0;
//	}



//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ�� 
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

//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ� 
//���磬����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19 
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


//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣� 
//ʵ�֣��������ַ����е��ַ��������С� 
//Ҫ�󣺲���ʹ��C�������е��ַ������������� 

char reverse_string(char* string)
	{
			
	}

//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen 

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

//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳� 

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



//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ 

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