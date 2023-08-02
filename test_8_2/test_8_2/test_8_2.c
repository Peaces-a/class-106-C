#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"


void menu()
{
	printf("***********************\n");
	printf("********1.paly*********\n");
	printf("********0.exit*********\n");
	printf("***********************\n");

}

void game()
{
	char mine[ROWS][COLS] = { 0 };//存放布置好的雷
	char show[ROWS][COLS] = { 0 };//存放排查出的雷的
	char mark[ROWS][COLS] = { 0 };
	//初始化数组的内容
	//mine没有布置雷的时候都是‘0‘
	InitBoard(mine,ROWS,COLS,'0');
	//show数组没有排查雷的时候都是’*‘
	InitBoard(show, ROWS, COLS,'*');

	//DispalyBoard(mine, ROW, COL);
	//设置雷
	SetMine(mine,ROW,COL);

	DispalyBoard(show, ROW, COL);
	//标记雷
	//MarkMine(show,mark, ROW, COL);
	//排查雷
	FindMine(mine, show, ROW, COL);
}


int main()
{
	int input = 0;
	//设置随机数的生成
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("请选择");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("选择错误");
			break;
		}
	} while (input);
	return 0;
}