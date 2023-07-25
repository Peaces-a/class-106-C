#define  _CRT_SECURE_NO_WARNINGS
#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}



////第一个版本
//void DispalyBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		//打印数据
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		//打印分割线
//		if(i<row-1)
//		printf("---|---|---\n");
//	}
//}



//第二个版本
void DispalyBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//打印数据
		/*printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);*/
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//打印分割线
		/*printf("---|---|---\n");*/
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
			
		}
	}
}




void PalyerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家下棋\n");

	while (1)
	{
		printf("坐标行范围%d，坐标列范围%d,注意XY数值之间添加一个空格\n", ROW, COL);
		printf("请输入坐标:>");
		scanf("%d %d", &x, &y);
		//坐标范围合法判断
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用请选择其他位置\n");
			}
		}
		else
		{
			printf("坐标输入非法请重新输入\n");
		}
	}

}


void ComputerMove(char board[ROW][COL], int row, int col)
//{
//	printf("电脑下棋\n");
//
//	int x = 0;
//	int y = 0;
//
//
//	while (1)
//	{
//		x = rand() % row;
//		y = rand() % col;
//		if (board[x][y] == ' ')
//		{
//			board[x][y] = '#';
//			break;
//		}
//	}
//}
{
	int x = 0;
	int y = 0;
	int z = 0;
	printf("电脑下棋:\n\n");
	z = check_computer(board, row, col);//电脑下棋(能赢就赢，玩家要赢就拦截玩家)

	//第一次落子
	while (0 == z)
	{
		x = rand() %row;
		y = rand() %col;
		if (board[1][1] == ' ')
		{
			//如果中心位置玩家没有下则优先下到中心位置
			board[1][1] = '#';
			z = 1;
			break;
		}
		if (board[x][y] == ' ')
		{
			//没有的话就随机下一个位置
			board[x][y] = '#';
			z = 1;
			break;
		}
	}
}
char judge_player(char board[ROW][COL], int row, int col, int k)//电脑优化算法，堵截玩家 
{
	int i = 0;
	int j = 0;
	while (0 == k)
	{
		for (i = 0; i < row; i++)  //判断玩家在横行上是否会赢，
		{
			if ((board[i][0] == board[i][1])
				&& (board[i][1] == '*')
				&& (board[i][2] == ' '))
			{
				board[i][2] = '#';
				k = 1;
				break;
			}

			if ((board[i][0] == board[i][2])
				&& (board[i][0] == '*')
				&& (board[i][1] == ' '))
			{
				board[i][1] = '#';
				k = 1;
				break;
			}

			if ((board[i][1] == board[i][2])
				&& (board[i][1] == '*')
				&& (board[i][0] == ' '))
			{
				board[i][0] = '#';
				k = 1;
				break;
			}
		}
		if (k != 0)
			break;

		for (j = 0; j < col; j++)  //判断玩家在竖列上是否会赢
		{
			if ((board[0][j] == board[1][j])
				&& (board[1][j] == '*')
				&& (board[2][j] == ' '))
			{
				board[2][j] = '#';
				k = 1;
				break;
			}

			if ((board[0][j] == board[2][j])
				&& (board[2][j] == '*')
				&& (board[1][j] == ' '))
			{
				board[1][j] = '#';
				k = 1;
				break;
			}

			if ((board[1][j] == board[2][j])
				&& (board[2][j] == '*')
				&& (board[0][j] == ' '))
			{
				board[0][j] = '#';
				k = 1;
				break;
			}
		}
		break;
	}

	while (0 == k)  //判断玩家在对角线上是否会赢
	{
		if ((board[0][0] == board[1][1])
			&& (board[1][1] == '*')
			&& (board[2][2] == ' '))
		{
			board[2][2] = '#';
			k = 1;
			break;
		}

		if ((board[0][0] == board[2][2])
			&& (board[2][2] == '*')
			&& (board[1][1] == ' '))
		{
			board[1][1] = '#';
			k = 1;
			break;
		}

		if ((board[1][1] == board[2][2])
			&& (board[1][1] == '*')
			&& (board[0][0] == ' '))
		{
			board[0][0] = '#';
			k = 1;
			break;
		}

		if ((board[0][2] == board[1][1])
			&& (board[0][2] == '*')
			&& (board[2][0] == ' '))
		{
			board[2][0] = '#';
			k = 1;
			break;
		}

		if ((board[0][2] == board[2][0])
			&& (board[2][0] == '*')
			&& (board[1][1] == ' '))
		{
			board[1][1] = '#';
			k = 1;
			break;
		}

		if ((board[1][1] == board[2][0])
			&& (board[2][0] == '*')
			&& (board[0][2] == ' '))
		{
			board[0][2] = '#';
			k = 1;
			break;
		}
		break;
	}
	return k;
}
int check_computer(char board[ROW][COL], int row, int col) //电脑判断自己是否会赢
{
	int i = 0;
	int j = 0;
	int k = 0;
	//判断电脑自己在横行、纵行、对角线上是否能赢(3颗棋子能否连成一条线),能赢就落子
	while (0 == k)
	{
		for (i = 0; i < row; i++)//判断电脑横行上是否会赢
		{
			if ((board[i][0] == board[i][1])
				&& (board[i][1] == '#')
				&& (board[i][2] == ' '))
			{
				board[i][2] = '#';
				k = 1;
				break;
			}
			if ((board[i][0] == board[i][2])
				&& (board[i][0] == '#')
				&& (board[i][1] == ' '))
			{
				board[i][1] = '#';
				k = 1;
				break;
			}

			if ((board[i][1] == board[i][2])
				&& (board[i][1] == '#')
				&& (board[i][0] == ' '))
			{
				board[i][0] = '#';
				k = 1;
				break;
			}
		}
		if (k != 0)
		{
			break;
		}
		for (j = 0; j < col; j++)//判断电脑列上是否会赢
		{
			if ((board[0][j] == board[1][j])
				&& (board[1][j] == '#')
				&& (board[2][j] == ' '))
			{
				board[2][j] = '#';
				k = 1;
				break;
			}

			if ((board[0][j] == board[2][j])
				&& (board[2][j] == '#')
				&& (board[1][j] == ' '))
			{
				board[1][j] = '#';
				k = 1;
				break;
			}
			if ((board[1][j] == board[2][j])
				&& (board[2][j] == '#')
				&& (board[0][j] == ' '))
			{
				board[0][j] = '#';
				k = 1;
				break;
			}
		}

		break;

	}

	while (0 == k)
	{
		if ((board[0][0] == board[1][1])//判断对角线上是否会赢
			&& (board[1][1] == '#')
			&& (board[2][2] == ' '))
		{
			board[2][2] = '#';
			k = 1;
			break;
		}
		if ((board[0][0] == board[2][2])
			&& (board[2][2] == '#')
			&& (board[1][1] == ' '))
		{
			board[1][1] = '#';
			k = 1;
			break;
		}

		if ((board[1][1] == board[2][2])
			&& (board[1][1] == '#')
			&& (board[0][0] == ' '))
		{
			board[0][0] = '#';
			k = 1;
			break;
		}
		if ((board[0][2] == board[1][1])
			&& (board[0][2] == '#')
			&& (board[2][0] == ' '))
		{
			board[2][0] = '#';
			k = 1;
			break;
		}

		if ((board[0][2] == board[2][0])
			&& (board[2][0] == '#')
			&& (board[1][1] == ' '))
		{
			board[1][1] = '#';
			k = 1;
			break;
		}
		if ((board[1][1] == board[2][0])
			&& (board[2][0] == '#')
			&& (board[0][2] == ' '))
		{
			board[0][2] = '#';
			k = 1;
			break;
		}
		break;
	}
	k = judge_player(board, row, col, k);
	return k;
}



//如果满了返回1 不满返回0
int isFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char WinningBoard(char board[ROW][COL], int row, int col )
{
	//行
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == board[i][j - 1] && board[i][j - 1] == board[i][j + 1] && board[i][j - 1] != ' ')
			{
				return board[i][j - 1];
			}
		}
		
		/*if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}*/
	}
	//列
	int j = 0;
	for (j = 0; j < col; j++)
	{
		int i = 0;
		for (i = 0; i < row; i++)
		{
			if (board[i][j] == board[i - 1][j] && board[i - 1][j] == board[i + 1][j] && board[i - 1][j] != ' ')
			{
				return board[i - 1][j];
			}
		}
		/*if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[1][j];
		}*/
	}
	//对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	// 平局
	if (isFull(board, row, col))
	{
		return 'Q';
	}

	//游戏继续
	return 'C';
}