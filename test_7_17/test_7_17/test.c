#define  _CRT_SECURE_NO_WARNINGS
//打印1000~2000年的闰年
//能被4整除不能被100整除是闰年
//能被400整除是闰年
//#include <stdio.h>
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是不是闰年
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//			{
//			printf("%d ", year);
//			}
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


////润年1 非0
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
















//写一个函数 实现一个整形有序数组的二分查找
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int mid = left + (right = left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k);
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;//找到了返回
//		}
//	}
//	return -1;//找不到返回
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找到了返回下标
//	//找不到返回找不到
//	int ret =binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n", ret);
//	}
//	return 0;
//}

//布尔类型
#include<stdbool.h>
//bool is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j<= sqrt(n); j++)
//	{
//		if (n$j == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//int main()
//{
//	//int i = 0;
//	//for (i = 100; i < 200; i++)
//	//{
//	//	if (is_prime(i))
//	//	{
//	//		printf("%d ", i);
//	//	}
//	//}
//
//	printf("%d\n", sizeof(bool));
//	return 0;
//}







//写一个函数每调用一次 就将会num函数加1
//void Add(int *p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d ", num);//1
//	Add(&num);
//	printf("%d ", num);//2
//	Add(&num);
//	printf("%d ", num);//3
//	return 0;
//}

//int Add(int n)
//{
//	return ++n;
//}
//int main()
//{
//	int num = 0;
//	num = Add(num);
//	printf("%d ", num);//1
//	num = Add(num);
//	printf("%d ", num);//2
//	num = Add(num);
//	printf("%d ", num);//3
//	return 0;
//}




//函数嵌套
//void new_line()
//{
//	printf("hehe\n");
//}
//
//void there_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//
//int mian()
//{
//	there_line();
//	return 0;
//}




//链式访问
//
//void test()
//{
//	printf("hehe\n")
//}
//
//int main()
//{
//	//int len = strlen("abcdef");
//	//printf("%d\n", len);
//	////链式访问
//	//printf("%d\n", strlen("abcdef"));
//
//	/*printf("%d", printf("%d", printf("%d", 43)));*/
//	int n = test;
//	return 0;
//}


////函数不写返回值 默认是int
//Add(int x ,int y)//不推荐
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d", c);
//	return 0;
//}

//Add(int x ,int y)//不推荐
//{
//	printf("hehe\n");
//}
////上面的代码在一些编译器上返回的事函数中执行过程中最后一条指令的结果
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d", c);
//	return 0;
//}

//明确说明 main函数不需要参数
//int main(void)
//{
//	return 0;
//}

//main函数有三个参数
//int main(int argc, char* argv[], char* envp)
//{
//	return 0;
//}