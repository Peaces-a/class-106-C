#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<Windows.h>
int main()
{
	int guss = 0;
	int game = 0;
	system("shutdown -s -t 120");// 执行关机cmd命令
	printf("注意你的电脑将在120s内关机“猜对数字游戏” 数字范围1-100 取消\n");
	srand((unsigned int)time(NULL));//设置时间戳为数字生成随机数
	int ret = rand() % 100 + 1;
	printf("输入1开始游戏\n");
	scanf("%d", &game);//判断输入1开始游戏
	while ( game = 1 )
	{
		printf("请猜数字\n");
		scanf("%d", &guss);//判断输入的数字大小进行提示
		if (guss < ret)
		{
			printf("猜小了\n");
		}
		else if (guss > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你猜对了\n");
			system("shutdown - a");
			printf("取消关机了\n");
		}

	}


	return 0;
}