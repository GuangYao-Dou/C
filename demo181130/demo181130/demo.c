#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//����һ���������� nums ��һ��Ŀ��ֵ target�������ڸ��������ҳ���ΪĿ��ֵ�� ���� ������
//����Լ���ÿ������ֻ���Ӧһ���𰸡����ǣ��㲻���ظ��������������ͬ����Ԫ�ء�
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




//�������� �ǿ� ������������ʾ�����Ǹ������������У����Ǹ��Ե�λ���ǰ��� ���� �ķ�ʽ�洢�ģ��������ǵ�ÿ���ڵ�ֻ�ܴ洢 һλ ���֡�
//��������ǽ��������������������᷵��һ���µ���������ʾ���ǵĺ͡�
//�����Լ���������� 0 ֮�⣬���������������� 0 ��ͷ��
//���룺(2 -> 4 -> 3) + (5 -> 6 -> 4)
//�����7 -> 0 -> 8
//ԭ��342 + 465 = 807

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
//	printf ("������������λ����\n");
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




//����һ���ַ����������ҳ����в������ظ��ַ��� ��Ӵ� �ĳ��ȡ�
int main ()
{
	int i = 0;
	int j = 0;
	int len = 0 ;
	//printf("������Ҫ������ַ���");
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