#include <stdio.h>
#include <stdlib.h>


//int isPrime(int a);
//int findPrime(int  a , int  b);
//int  main()
//{
//    findPrime(1,100);
//	system ("pause");
//	return 0;
//}
//
//
//int findPrime(int  a , int  b)
//{
//    for(a; a <= b; a++)
//    {
//        if( isPrime(a) == 1 )
//            printf("%d\n",a);
//    }
//}
//
//
//int isPrime(int a)
//{
//	int i = 0;
//    if(a == 1)
//    {
//        return 1;
//    }
//    for(i = 2; i < a; i++)
//    {
//        if(a % i == 0)
//        {
//            return 0;
//        }
//    }
//    return 1;
//}


//int mulTable ()
//    {
//		int i = 0;
//		int j = 0;
//      for ( i = 1; i <= 9; i++)
//      {
//          for( j = 1; j <= i; j++)
//          {
//              printf("%d x %d = %2d  ",j, i, i*j);
//          }
//          printf("\n");
//      }
//    }


//int main()
//{
//    mulTable();
//	system("pause");
//    return 0;
//}


int isleapyear (int year)
    {
        if(year > 3200  &&  year%3200 == 0  &&  year%172800 == 0)
            printf("%d是闰年",  year);
        else
        {
            if(year % 100 == 0  &&  year % 400 == 0)
            {
                printf("%d是闰年\n", year);
            }
            else
            {
                if(year % 4 == 0)
                    printf("%d是闰年\n", year);
                else
                    printf("%d不是闰年\n", year);
            }
        }
    }


void main ()
    {
		int i = 0;
        for ( i ; i < 100; i++ )
        {
        int a ;
        printf("请合理的输入要判定的年份，输入0则退出程序:\n");
        scanf ("%d", &a);
        if (a==0)
            break;
        isleapyear(a);
        }
		return 0;
    }



