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
	char mine[ROWS][COLS] = { 0 };//��Ų��úõ���
	char show[ROWS][COLS] = { 0 };//����Ų�����׵�
	char mark[ROWS][COLS] = { 0 };
	//��ʼ�����������
	//mineû�в����׵�ʱ���ǡ�0��
	InitBoard(mine,ROWS,COLS,'0');
	//show����û���Ų��׵�ʱ���ǡ�*��
	InitBoard(show, ROWS, COLS,'*');

	//DispalyBoard(mine, ROW, COL);
	//������
	SetMine(mine,ROW,COL);

	DispalyBoard(show, ROW, COL);
	//�����
	//MarkMine(show,mark, ROW, COL);
	//�Ų���
	FindMine(mine, show, ROW, COL);
}


int main()
{
	int input = 0;
	//���������������
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("ѡ�����");
			break;
		}
	} while (input);
	return 0;
}