#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS
#define row 3
#define col 3
// 3*3�����̳�ʼ����
//��ʾ����	show������
//��ʾ�������
//�ж�ʤ��  
//�������� computermove
//�ж�ʤ��  checkwinner
char arry [row][col] = {0};
void init (char arr[row][col]);


//չʾ���̣�
void show(char arr[row][col])
{
	int i = 0;
	int j = 0;
	printf("_____________\n");
	for (i = 0; i < row; i++)
	{
		printf("| ");
		for (j = 0; j < col; j++)
		{
			printf("%c | ",arr[i][j]);
		
		}
		printf("\n");
		printf("|___|___|___|\n");
	}
}
//�������
void turnPlayer()
{
	int i = 0 ;
	int j = 0 ;
	printf("��������Ҫ�������������  1,1 ( o �������Լ�):\n");
	while(1)
	{
	scanf("%d,%d",&i,&j);
	if(i > row || j > col || arry[i][j] != ' ')
	{
		printf("��������������������룺\n");
	}
	else
	{
		arry[i][j] = 'o';
		break ;
	}
	}
}
//��������
void turnComputer()
{
	
	int i = 0 ;
	int j = 0 ;
	while(1)
	{
	i = rand()%3 ;
	j = rand()%3 ;
	if(arry[i][j]  == ' ')
	{
		arry[i][j] = 'x';
		break ;
	}
	}
		
}
//���̳�ʼ��
void init (char arr[row][col])
{
	int i = 0;
	int j = 0;
	for( i = 0 ; i < row; i++)
	{
		for( j = 0; j < col; j++)
		{
			arr[i][j] = ' '; 
		}
	}
}
//�ж���Ӯ��
char checkwinner()
{
	if( (arry[0][0] == 'o' && arry[0][0] == arry[0][1] && arry[0][1] == arry[0][2])||
		(arry[1][0] == 'o' && arry[1][0] == arry[1][1] && arry[1][1] == arry[1][2])||
		(arry[2][0] == 'o' && arry[2][0] == arry[2][1] && arry[2][1] == arry[2][2])||
		(arry[0][0] == 'o' && arry[0][0] == arry[1][0] && arry[1][0] == arry[2][0])||
		(arry[0][1] == 'o' && arry[0][1] == arry[1][1] && arry[1][1] == arry[2][1])||
		(arry[0][2] == 'o' && arry[0][2] == arry[1][2] && arry[1][2] == arry[2][2])||
		(arry[0][0] == 'o' && arry[0][0] == arry[1][1] && arry[1][1] == arry[2][2])||
		(arry[0][2] == 'o' && arry[0][2] == arry[1][1] && arry[1][1] == arry[2][0])
		)
		{
			return 'w';
		}
	else if
		(
		(arry[0][0] == 'x' && arry[0][0] == arry[0][1] && arry[0][1] == arry[0][2])||
		(arry[1][0] == 'x' && arry[1][0] == arry[1][1] && arry[1][1] == arry[1][2])||
		(arry[2][0] == 'x' && arry[2][0] == arry[2][1] && arry[2][1] == arry[2][2])||
		(arry[0][0] == 'x' && arry[0][0] == arry[1][0] && arry[1][0] == arry[2][0])||
		(arry[0][1] == 'x' && arry[0][1] == arry[1][1] && arry[1][1] == arry[2][1])||
		(arry[0][2] == 'x' && arry[0][2] == arry[1][2] && arry[1][2] == arry[2][2])||
		(arry[0][0] == 'x' && arry[0][0] == arry[1][1] && arry[1][1] == arry[2][2])||
		(arry[0][2] == 'x' && arry[0][2] == arry[1][1] && arry[1][1] == arry[2][0])
		)
		{
			return 'c';
		}
	else if(ergo() == 0)
			return 'h';
}
//��������
int ergo()
{
	int i = 0 ;
	int j = 0 ;
	int tem = 0;
	for ( i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (arry[i][j] == ' ')
				tem = 1 ;
		}
	}
	return tem ;
}
int main()
{
	srand((unsigned int)time(0));
	init(arry); //��ʼ������
	while(1)
	{
	show(arry); //�����չʾ���δ����֮ǰ������״̬
	turnPlayer();//�������
	//�ж�
	if(checkwinner() == 'w')
	{
		printf("��һ�ʤ\n");
		show(arry);
		break;
	}
	else if(checkwinner() == 'c')
	{
		printf("���Ի�ʤ\n");
		show(arry);
		break ;
	}
	else if (checkwinner() == 'h')
	{
		printf("����\n");
		show(arry);
		break ;
	}

	system("cls");
	show(arry); //�����չʾ���Ӻ������״̬
	printf("��������������......\n");
	_sleep(1000);
	turnComputer();//��������
	//�ж�ʤ��
	if(checkwinner() == 'w')
	{
		printf("��һ�ʤ\n");
		show(arry);
		break;
	}
	else if(checkwinner() == 'c')
	{
		printf("���Ի�ʤ\n");
		show(arry);
		break;
	}
	else if (checkwinner() == 'h')
	{
		printf("����\n");
		show(arry);
		break;
	}
	system("cls");
	}
	system("pause");
	
}
