#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#define _CRT_SECURE_NO_WARNINGS
//1.��ɲ�������Ϸ��
int game ();
int main ()
{
	int choice = 0 ;
	while(choice !=1)
	{
	printf("===================================\n");
	printf("        ѡ�� 0 => ��ʼ��Ϸ\n");
	printf("        ѡ�� 1 => �˳���Ϸ\n");
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
		printf("��������Ĳ²⣺\n");
		scanf("%d", &guess);
		if (num > guess)
		{
			printf ("С��\n");
		}
		else if(num < guess)
		{
			printf("����\n");
		}
	}
	printf("������ȷ��\n");
	return 0;
}



//int main()
//{
//    int i;
//    for(i = 0; i < 10; i ++)//����10�Ρ�
//	{
//	srand(time(0));//������������ӡ�
//	printf("%d\n", rand());//ÿ�λ�ȡһ��������������
//	}
//	system("pause");
//	return 0;
//}



//2.д����������������������в�����Ҫ�����֣� 
//�ҵ��˷����±꣬�Ҳ�������-1.���۰���ң� 


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
//			printf("�ҵ���%d",mid);
//			return mid ;
//		}
//
//	}
//	printf("�Ҳ���������");
//	return -1;
//}

//3.��д����ģ��������������ĳ����� 
//����������������룬������ȷ����ʾ����¼�ɹ���,������� 
//�����������룬����������Ρ����ξ�������ʾ�˳�����
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
//		printf ("������");
//		scanf("%d",&password);
//		if(password == passnum)
//		{
//			printf("��½�ɹ�");
//		}
//		else
//			printf("��¼ʧ��\n");
//	}
//	printf("��¼3��ʧ��\n");
//	return 0;
//}


//4.��дһ�����򣬿���һֱ���ռ����ַ��� 
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ��� 
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ��� 
//��������ֲ������
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












