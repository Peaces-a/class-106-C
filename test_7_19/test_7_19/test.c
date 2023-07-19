#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//函数递归

//接收一个整形值 按照顺序打印他的第一位
//%d 打印有符号的数（有正负数）
//%u 打印无符号的整数
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	while (num)
//	{
//		printf("%d", num % 10);
//		num = num / 10;
//	}
//	return 0;
//}

//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//	return 0;
//}

// 编写函数不允许创建临时变量 求字符串长度

#include<string.h>
//int my_strlen(char * str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//int my_strlen(char * str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//int fac(int n)
//{
//	if (n < 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//
//}

//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret* n;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d", fac);
//	return 0;
//}

//求第n个斐波纳楔数
// 1 1 2 3 5 8 13 21 34
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//		count++;
//
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}


//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//
//	while ( n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//
//	return c;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d ", ret);
//
//	printf("%d ", count);
//	return 0;
//}



// 递归会炸
//void test(int n )
//{
//	if (n > 10000)
//		test(n + 1);
//}
//int main()
//{
//	test(1);
//	return 0;
//}