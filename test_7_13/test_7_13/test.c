#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,6,7,8,9,10 };
//	int k = 7;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了,下表是%d",mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
// 	return 0;
//}

//#include<Windows.h>
//int main()
//{
//	char arr1[] =  "Welcome to bit!!!!" ;
//	char arr2[] =  "##################" ;
//	int left = 0;
//	int right = sizeof(arr1)-1;//int right = sizeif(arr1)/sizeif(arr1[0])-2;
//	while (left <= right )
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		// 清空屏幕
//		system("cls");//库函数，可以执行系统命令
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0;i<3;i++)
//	{ 
//		printf("请输入密码");
//		scanf("%s", password);
//		if (strcmp(password,"abcdef") ==0)// 比较两个字符串是否相等不能使用 == 而是使用库函数 strcmp 如果返回值为0表示两个字符串相等
//		{
//			printf("密码正确\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误");
//		}
//	}
//	if (i == 3)
//	{
//		printf("密码错误超过三次");
//	}
//	return 0;
//}

// 电脑产生一个随机数（1-100）
//猜数字
//猜大了
//猜小了

//#include<time.h>
//
//void menu()
//{
//	printf("*********************************\n");
//	printf("************1.play****************\n");
//	printf("************0.exit***************\n");
//	printf("*********************************\n");
//}
//
//void game()
//{	
//	int	guss = 0;
//	//生成随机数
//	int ret = rand()%100+1;//生成随机数
//	/*printf("%d\n", ret);*/
//	// 猜数字
//	while (1)
//	{
//		printf("请猜数字\n");
//		scanf("%d", &guss);
//		if (guss < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guss > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}


////指针
////int *p = NULL
////int a = 0
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//时间戳生成随机数
//	do
//	{
//		menu();
//		printf("请选择");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏");
//			break;
//		default:
//			printf("输入错误,重新选择");
//			break;
//		}
//	} while (input);
//	{
//
//	}
//	return 0;
//}

////go tu 语句
//int main()
//{
//again:
//	printf("hehe");
//	printf("haha");
//	goto again;
//	return 0;
//}

//关机程序
//电脑运行起来后一分钟关机 开始shutdown -s -t  60  取消shutdown -a
//如果输入 取消关机 ，则取消
//#include<Windows.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("注意你的电脑将在60s内关机输入“取消关机”取消\n");
//	scanf("%s", &input);
//	if (strcmp(input, "取消关机") == 0)
//	{
//		system("shutdown -a");
//		printf("取消关机了\n");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

