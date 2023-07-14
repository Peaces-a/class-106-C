#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//get_max(int x, int y)
//{
//	return (x > y ? x: y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d,%d", &a, &b);
//	int m = get_max(a, b);
//	printf("%d\n", m);
//	return 0;
//}

// 交换
//void Swap1(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
// 
//void Swap2(int *px ,int *py)
//{
//	int z = 0; 
//	z = *px; // z =a 
//	*px = *py;// a = b 
//	*py = z; // b = a
//
//}
//
//Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
////当实参传递给形参的时候，形参是实参的一份临时拷贝 
////对形参的修改不能改变实参
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	//int c = Add(a+3, b);
//	printf("%d\n", c);
//
//	printf("交换前a=%d b=%d\n", a, b);
//	Swap1(a, b);
//	Swap2(&a, &b);
//	printf("交换后a=%d b=%d\n", a,b);
//	return 0;
//}

// 写一个函数判断一个数是不是素数
//素数只能被1和被他本身所除的数

//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i < 200; i++)
//	{
//		//判断i是否为素数
//		//是素数就打印
//		//拿2到i-1之间的数字去试除i
//		int flag = 1;//是1表示是素数
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//			if (flag == 1)
//			{
//				count++;
//				printf("%d ", i);
//			}
//		
//	}	
//	printf("\n总数为%d", count);
//	return 0;
//}


//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i < 200; i += 2)
//	{
//		//判断i是否为素数
//		//是素数就打印
//		//拿2到i-1之间的数字去试除i
//		int flag = 1;//是1表示是素数
//		int j = 0;
//		for (j = 2; j <= sqrt(i) - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//
//	}
//	printf("\n总数为%d", count);
//	return 0;
//}


//是素数返回1
//不是返回0
#include <math.h>
int is_prime(int n)
{
		int j = 0;
		for (j = 2; j <= sqrt(n) - 1; j++)
		{
			if (n % j == 0)
			{
				return 0;
			}
		}
		return 1;
}

#include<math.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i < 200; i += 2)
	{
		//判断i是否为素数
		//是素数就打印
		//拿2到i-1之间的数字去试除i
		if (is_prime(i))
		{
			printf("%d ", i);
			count++;
		}

	}
	printf("\n总数为%d", count);
	return 0;
}