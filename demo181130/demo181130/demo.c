#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的 两个 整数。
//你可以假设每种输入只会对应一个答案。但是，你不能重复利用这个数组中同样的元素。
//int main ()
//{
//	int  i = 0 ;
//	int  j = 0 ;
//	int  targe = 9 ;
//	int  nums [] = { 2, 7, 11, 15};
//	for (i = 0; i < sizeof(nums)/4;  i++)
//	{
//		for (j = i + 1 ; j <sizeof(nums)/4; j++)
//		{
//			if (nums[i] + nums [j] == targe )
//				printf("%d   %d", i, j);
//		}
//	}
//	//printf("%d" ,sizeof(nums)/4);
//	system("pause");
//	return 0;
//}




//给出两个 非空 的链表用来表示两个非负的整数。其中，它们各自的位数是按照 逆序 的方式存储的，并且它们的每个节点只能存储 一位 数字。
//如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。
//您可以假设除了数字 0 之外，这两个数都不会以 0 开头。
//输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
//输出：7 -> 0 -> 8
//原因：342 + 465 = 807

//int main ()
//{
//	int i = 0;
//	int j = 0;
//	int a1 = 0;
//	int b1 = 0;
//	int c1 = 0;
//	int a2 = 0;
//	int b2 = 0;
//	int c2 = 0;
//	printf ("请输入两个三位数：\n");
//	scanf ("%d %d",&i,&j);
//	a1 = i/100 ;
//	a2 = j/100 ;
//	b1 = (i/10)%10;
//	b2 = (j/10)%10;
//	c1 = i%10 ;
//	c2 = j%10 ;
//	a1 = c1*100 + b1*10 + a1;
//	a2 = c2*100 + b2*10 + a2;
//	a1 = a1 + a2;
//	printf("%d   %d   %d\n",a1%10,(a1/10)%10,a1/100);
//	system("pause");
//	return 0 ;
//}




//给定一个字符串，请你找出其中不含有重复字符的 最长子串 的长度。
int main ()
{
	int i = 0;
	int j = 0;
	int len = 0 ;
	//printf("请输入要计算的字符串");
	char str [] = "";
	scanf("%s",&str );
	printf("%d",strlen(str));
	for (i = 0; i < strlen(str); i++)
	{
		for (j = i + 1; j < strlen(str); j++)
		{
			if (str[i] == str[j] && (j-i) >= len )
			{
				len = j -i ;
			}
		}
	}
	return len ;
	system("pause");
	return 0;
}