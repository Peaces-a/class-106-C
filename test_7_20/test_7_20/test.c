#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i == 0; i < 10; i++)
//	{
//		if (i = 5)//这里是赋值，不是判断 i=5表达式的结果是5
//			printf("%d", i);
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n)
//	{
//		default:
//			printf("hehe\n");
//			break;
//		case 1:
//			printf("1\n");
//			break;
//		case 2:
//			printf("2\n");
//			break;
//	}
//	return 0;
//}





//// B = 0
//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1:b = 30;
//	case 2:b = 20;
//	case 3:b = 10;
//	default:b = 0;
//	}
//	return 0;
//}

//大小顺序输出
//void Swap(int* py, int* px)
//{
//	int tmp = *py;
//	*py = *px;
//	tmp = *px;
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	int tmp = 0;
//	if (a < b)
//	{
//		Swap(&a, &b);
//	}
//	if (a < c)
//	{
//		Swap(&a, &c);
//	}
//	if (b < c)
//	{
//		Swap(&b, &c);
//	}
//	return 0;
//}

//打印1-100之间的三的倍数
//int main()
//{
//	//int i = 0;
//	//for (i == 0; i < 100; i++)
//	//{
//	//	if (i % 3 == 0)
//	//	{
//	//		printf("%d ", i);
//	//	}
//	//}
//	int i = 0;
//	for (i = 3; i <= 100; i += 3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}


// 给两个数 求这两个最大的公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d ", &a, &b);//24 18
//	//求最大公约数
//	while (c=a%b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1; b = 1; a <= 100; a++)
//	{
//		if (b >= 20)break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	return 0;
//}


//// 编写程序数一下1 到100 的所有整数中出现多少个9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//判断个位
//		if (i % 10 == 9)
//			count++;
//		//判断十位
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


////计算1/1-1/2+1/3-1/4+1/5-1/99-1/100的值，打印出结果
////分子总是1
////分母是1~100
//
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag*(1 / i);
//		flag = -flag;
//	}
//	printf("%lf", sum);
//	return 0;
//}



//
////求10个整数中最大值
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", arr[i]);
//	}
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}


// 在屏幕上输出9 * 9乘法口诀表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		//打印一行
//		int j = 0;
//		for(j = 1; j<= i ;j++)
//		{
//			printf("%d*%d=%2d ", i,j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}




//猜数字
//int main()
//{
//	int a = 0;
//	int i = 0;
//	printf("输入1开始数字游戏\n");
//	scanf("%d", &i);
//	srand((unsigned int)time(NULL));
//	int ret = rand()%100;
//	while (i = 1)
//	{
//		printf("猜数字 0-100之间\n");
//		scanf("%d", &a);
//		if (ret > a)
//		{
//			printf("猜小了\n");
//		}
//		else if (ret < a)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//	return 0;
//}




//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}


//闰年判断
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}



//数组
//int main()
//{
//	int arr[10];
//	char ch[5];
//	double data1[20];
//	double data2[15 + 5];
//
//	//下面代码只能在支持C99标准下编译
//	int n = 10;
//	scanf("%d", &n);
//	int arr2[n];
//	//在c99标准之前数组的大小必须是常量或常量表达式
//	//在c99之后数组大小可以是变量，为了支持边长数组
//	return 0;
//}

//数组初始化
//int main()
//{
//	//不完全初始化 剩余元素默认为0
//	int arr[10] = { 1,2,3 };
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[] = { 1,3,2 };
//
//	char ch1[10] = { 'a','b','c' };
//	char ch2[10] = "abc";
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d", arr[i]);
//	//}
//	//for (i = sz-1; i >= 1; i--)
//	//{
//	//	printf("%d", arr[i]);
//	//}
//	//打印数组每个元素的地址
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}