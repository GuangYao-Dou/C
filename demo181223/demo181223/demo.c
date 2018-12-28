#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS
#define row 3
#define col 3
// 3*3的棋盘初始化；
//显示棋盘	show（）；
//提示玩家落子
//判定胜负  
//电脑落子 computermove
//判定胜负  checkwinner
char arry [row][col] = {0};
void init (char arr[row][col]);


//展示棋盘；
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
//玩家落子
void turnPlayer()
{
	int i = 0 ;
	int j = 0 ;
	printf("请输入你要填入的坐标例如  1,1 ( o 代表你自己):\n");
	while(1)
	{
	scanf("%d,%d",&i,&j);
	if(i > row || j > col || arry[i][j] != ' ')
	{
		printf("你的输入有误，请重新输入：\n");
	}
	else
	{
		arry[i][j] = 'o';
		break ;
	}
	}
}
//电脑落子
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
//棋盘初始化
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
//判断输赢；
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
//遍历数组
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
	init(arry); //初始化数组
	while(1)
	{
	show(arry); //向玩家展示玩家未落子之前的棋盘状态
	turnPlayer();//玩家落子
	//判定
	if(checkwinner() == 'w')
	{
		printf("玩家获胜\n");
		show(arry);
		break;
	}
	else if(checkwinner() == 'c')
	{
		printf("电脑获胜\n");
		show(arry);
		break ;
	}
	else if (checkwinner() == 'h')
	{
		printf("和棋\n");
		show(arry);
		break ;
	}

	system("cls");
	show(arry); //向玩家展示落子后的棋盘状态
	printf("电脑正在落子中......\n");
	_sleep(1000);
	turnComputer();//电脑落子
	//判断胜负
	if(checkwinner() == 'w')
	{
		printf("玩家获胜\n");
		show(arry);
		break;
	}
	else if(checkwinner() == 'c')
	{
		printf("电脑获胜\n");
		show(arry);
		break;
	}
	else if (checkwinner() == 'h')
	{
		printf("和棋\n");
		show(arry);
		break;
	}
	system("cls");
	}
	system("pause");
	
}
