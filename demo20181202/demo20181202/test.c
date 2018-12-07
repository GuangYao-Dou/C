#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#define _CRT_SECURE_NO_WARNINGS
//1.完成猜数字游戏。
int game ();
int main ()
{
	int choice = 0 ;
	while(choice !=1)
	{
	printf("===================================\n");
	printf("        选择 0 => 开始游戏\n");
	printf("        选择 1 => 退出游戏\n");
	printf("===================================\n");
	scanf("%d", &choice);

	if(choice == 0)
	{
		game();
	}
	if(choice == 1)
	{
		return 0;
	}
	}
	
	system("pause");
	return 0;
	
}

int game ()
{
	int num = 0 ;
	int guess =  0;
	srand((unsigned int)time(0));
	num = rand()%100+1;
	while (num != guess)
	{
		printf("请输入你的猜测：\n");
		scanf("%d", &guess);
		if (num > guess)
		{
			printf ("小了\n");
		}
		else if(num < guess)
		{
			printf("大了\n");
		}
	}
	printf("输入正确！\n");
	return 0;
}



//int main()
//{
//    int i;
//    for(i = 0; i < 10; i ++)//运行10次。
//	{
//	srand(time(0));//设置随机数种子。
//	printf("%d\n", rand());//每次获取一个随机数并输出。
//	}
//	system("pause");
//	return 0;
//}



//2.写代码可以在整型有序数组中查找想要的数字， 
//找到了返回下标，找不到返回-1.（折半查找） 


//int main ()
//{
//	int arr[5] = {2,3,4,5,9};
//	searchnum(arr, 4, 7);
//	system("pause");
//	return 0 ;
//}
//int searchnum(int*arr,int lenth , int key)
//{
//	int low = 0 ;
//	int hig = lenth ;
//	int mid = 0 ;
//	while (low <= lenth)
//	{
//		mid = (low + hig)/2 ;
//		if (key < arr[mid])
//			hig = mid -1 ;
//		else if (key > arr[mid])
//			low = mid + 1 ;
//		else 
//		{
//			printf("找到了%d",mid);
//			return mid ;
//		}
//
//	}
//	printf("找不到！！！");
//	return -1;
//}

//3.编写代码模拟三次密码输入的场景。 
//最多能输入三次密码，密码正确，提示“登录成功”,密码错误， 
//可以重新输入，最多输入三次。三次均错，则提示退出程序。
//int gitpassword();
//int main ()
//{
//	gitpassword();
//	system("pause");
//	return 0 ;
//}
//int gitpassword()
//{
//	int password = 0 ;
//	int i = 0 ;
//	int passnum = 123456;
//	for (i = 0; i < 3; i++)
//	{
//		printf ("请输入");
//		scanf("%d",&password);
//		if(password == passnum)
//		{
//			printf("登陆成功");
//		}
//		else
//			printf("登录失败\n");
//	}
//	printf("登录3次失败\n");
//	return 0;
//}


//4.编写一个程序，可以一直接收键盘字符， 
//如果是小写字符就输出对应的大写字符， 
//如果接收的是大写字符，就输出对应的小写字符， 
//如果是数字不输出。
//int change();
//int main ()
//{
//	change();
//	system("pause");
//	return 0 ;
//}
//int change()
//{
//	int i = 0;
//	int len = 0;
//	char arr[] = { 0 } ;
//	printf("please,enter string");
//	scanf("%s", arr);
//	len = strlen(arr);
//	for (i = 0; i < len; i++)
//	{
//		if (arr[i] >=  'a' && arr[i] <= 'z')
//			arr[i] = toupper(arr[i]);
//	}
//	printf("%s",arr);
//	return 0;
//}












