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



////��һ���汾
//void DispalyBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		//��ӡ����
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		//��ӡ�ָ���
//		if(i<row-1)
//		printf("---|---|---\n");
//	}
//}



//�ڶ����汾
void DispalyBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//��ӡ����
		/*printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);*/
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//��ӡ�ָ���
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
	printf("�������\n");

	while (1)
	{
		printf("�����з�Χ%d�������з�Χ%d,ע��XY��ֵ֮�����һ���ո�\n", ROW, COL);
		printf("����������:>");
		scanf("%d %d", &x, &y);
		//���귶Χ�Ϸ��ж�
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("���걻ռ����ѡ������λ��\n");
			}
		}
		else
		{
			printf("��������Ƿ�����������\n");
		}
	}

}


void ComputerMove(char board[ROW][COL], int row, int col)
//{
//	printf("��������\n");
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
	printf("��������:\n\n");
	z = check_computer(board, row, col);//��������(��Ӯ��Ӯ�����ҪӮ���������)

	//��һ������
	while (0 == z)
	{
		x = rand() %row;
		y = rand() %col;
		if (board[1][1] == ' ')
		{
			//�������λ�����û�����������µ�����λ��
			board[1][1] = '#';
			z = 1;
			break;
		}
		if (board[x][y] == ' ')
		{
			//û�еĻ��������һ��λ��
			board[x][y] = '#';
			z = 1;
			break;
		}
	}
}
char judge_player(char board[ROW][COL], int row, int col, int k)//�����Ż��㷨���½���� 
{
	int i = 0;
	int j = 0;
	while (0 == k)
	{
		for (i = 0; i < row; i++)  //�ж�����ں������Ƿ��Ӯ��
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

		for (j = 0; j < col; j++)  //�ж�������������Ƿ��Ӯ
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

	while (0 == k)  //�ж�����ڶԽ������Ƿ��Ӯ
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
int check_computer(char board[ROW][COL], int row, int col) //�����ж��Լ��Ƿ��Ӯ
{
	int i = 0;
	int j = 0;
	int k = 0;
	//�жϵ����Լ��ں��С����С��Խ������Ƿ���Ӯ(3�������ܷ�����һ����),��Ӯ������
	while (0 == k)
	{
		for (i = 0; i < row; i++)//�жϵ��Ժ������Ƿ��Ӯ
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
		for (j = 0; j < col; j++)//�жϵ��������Ƿ��Ӯ
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
		if ((board[0][0] == board[1][1])//�ж϶Խ������Ƿ��Ӯ
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



//������˷���1 ��������0
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
	//��
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
	//��
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
	//�Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	// ƽ��
	if (isFull(board, row, col))
	{
		return 'Q';
	}

	//��Ϸ����
	return 'C';
}