#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<Windows.h>
int main()
{
	int guss = 0;
	int game = 0;
	system("shutdown -s -t 120");// ִ�йػ�cmd����
	printf("ע����ĵ��Խ���120s�ڹػ����¶�������Ϸ�� ���ַ�Χ1-100 ȡ��\n");
	srand((unsigned int)time(NULL));//����ʱ���Ϊ�������������
	int ret = rand() % 100 + 1;
	printf("����1��ʼ��Ϸ\n");
	scanf("%d", &game);//�ж�����1��ʼ��Ϸ
	while ( game = 1 )
	{
		printf("�������\n");
		scanf("%d", &guss);//�ж���������ִ�С������ʾ
		if (guss < ret)
		{
			printf("��С��\n");
		}
		else if (guss > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ��¶���\n");
			system("shutdown - a");
			printf("ȡ���ػ���\n");
		}

	}


	return 0;
}