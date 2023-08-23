//#include<stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//#pragma warning (disable:4996)
#pragma warning (disable:4996)
//
//int main()
//{
//	int a;
//	int b;
//	int c;
//	int t;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d%d%d",a,b,c);
//	return 0;
//}


//
//#pragma warning (disable:4996)
//#include<stdio.h>
//int main()
//{
//	int a;
//	int b;
//	int c;
//	int d;
//	int t;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	if (a < b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (a < d)
//	{
//		t = a;
//		a = d;
//		d = t;
//	}
//	if (b < c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	if (b < d)
//	{
//		t = b;
//		b = d;
//		d = t;
//	}
//	if (c < d)
//	{
//		t = c;
//		c = d;
//		d = t;
//	}
//	printf("%d%d%d%d", a, b, c, d);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a;
//	int b;
//	int c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a >= b)
//	{
//		if (a>=c)
//		{
//			printf("%d", a);
//		}
//		else
//		{
//			printf("%d", c);
//		}
//	}
//	else
//	{
//		if (b >= c)
//		{
//			printf("%d", b);
//		}
//		else
//		{
//			printf("%d", c);
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<Windows.h>
//int main()
//{
//	system("color 0a");
//	while (1)
//	{
//		printf("wa");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a=1;
//	while (a<=100)
//	{
//		printf("%d\t", a);
//		a++;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		printf("%d\t", a);
//		a++;
//	}
//	while (a>=1)
//	{
//		printf("%d\t", a);
//		a--;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 0;
//	while (a<=100)
//	{
//		if (a % 7 == 0 || a%10==7) 
//		{
//			printf("%d ", a);
//			b=b+a;
//		}
//		a++;
//	}
//	printf("\n%d", b);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 0;
//
//	while (a <= 100)
//	{
//		if (a % 2 == 0)
//		{
//			b = b + a;
//		}
//		a++;
//	}
//	printf("%d", b);
//	return 0;
//} 

//#include <stdio.h>
//int main()
//{
//    int i, n;
//    double sum = 1;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//        sum = sum * i;
//    printf("%d!=%lf", n, sum);
//    printf("\n");
//    return 0;
//}


//#include<stdio.h>
//#include<Windows.h>
//int main()
//{
//
//	int b = 120;
//	while (b>=0)
//	{
//
//			printf("%d:%.2d", b/60,b%60);
//			Sleep(1000);
//			system("cls");
//			b--;
//	}
//	printf("爆炸力");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a, b;
//	a = 1;
//	while (a <= 5)
//	{
//		b = 1;
//		while (b<=a)
//		{
//			printf("*");
//			b++;
//		}
//		printf("\n");
//		a++;
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	int d = 1;
//	scanf("%d", &a);
//	while (b<=a)
//	{
//		c = 1;
//		while (c<=b)
//		{
//			printf("%d ", d);
//			c++;
//		}
//		printf("\n");
//		b++;
//		d++;
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	int d = 1;
//	scanf("%d", &a);
//	while (b<=a)
//	{
//		c = 1;
//		while (c<=b)
//		{
//			printf("%d ", d);
//			c++;
//			d++;
//		}
//		printf("\n");
//		b++;
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<Windows.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	while (a <= 50)
//	{
//		system("cls");
//		b = 1;
//		while (b<=a)
//		{
//			printf(" ");
//			b++;
//		}
//		printf("H");
//		Sleep(1000);
//		a++;
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int j = 0;
//	int a = 1;
//	while (i<=10)
//	{
//		j = 1;
//		while (j<=i)
//		{
//			printf("ok");
//			j++;
//			a++;
//		}
//		i++;
//}
//	printf("\n%d", a);
//	return 0;
//}



//#include<stdio.h>
//#include<Windows.h>
//int main()
//{
//	int a = 1;
//	int b = 1;
//	while (a <= 60)
//	{
//		b = 1;
//		while (b <= a)
//		{
//			printf(" ");
//			b++;
//		}
//		printf(" 0\n");
//		b = 1;
//		while (b <= a)
//		{
//			printf(" ");
//			b++;
//		}
//		printf("<H>\n");
//		b = 1;
//		while (b <= a)
//		{
//			printf(" ");
//			b++;
//		}
//		printf("I I");
//		Sleep(1000);
//		system("cls");
//		a++;
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 1;
//	for (a = 1; a < 10; a++)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			printf("%d*%d=%-2d ", a, b, a * b);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a, i;
//	int count = 0;
//	scanf("%d", &a);
//	for (i = 2; i < a - 1; i++)
//	{
//		if (a % i == 0)
//		{
//			count++;
//			printf("%d ",i);
//		}
//
//	}
//	if (count == 0)
//		printf("\n质数");
//	else
//		printf("合数");
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int count1 = 0;
//	int count2 = 0;
//	for (a = 4; a <= 100; a = a + 2)
//	{
//		for (b = 2; b <= a / 2; b++)
//		{
//			count1 = 0;
//			for (c = 2; c <= b - 1; c++)
//			{
//				if (b % c == 0)
//				{
//					count1++;
//					break;
//				}
//			}
//			if (count1 == 0)
//			{
//				count2 = 0;
//				d = a - b;
//				for (c = 2; c <= d - 1; c++)
//				{
//					if (d % c == 0)
//					{
//						count2++;
//						break;
//					}
//				}
//				if (count2 == 0)
//				{
//					printf("%d=%d+%d\t", a, b, d);
//					break;
//				}
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a;
//	int b;
//	int c;
//	for (a = 1; a <= 9; a++)
//	{
//		for (b = 1; b <= 9; b++)
//		{
//			for (c = 1; c <= 9; c++)
//			{
//				if (a * 100 + b * 10 + c == a * a * a + b * b * b + c * c * c)
//				{
//					printf("%d ", a * 100 + b * 10 + c);
//				}
//			}
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	int x = 123;
//	a = x / 100;
//	b = x / 10 % 10;
//	c = x % 10;
//	printf("%d %d %d ", a, b, c);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	int x;
//	for (x = 100; x <= 999; x++)
//	{
//		a = x / 100;
//		b = x / 10 % 10;
//		c = x % 10;
//		if (x == a * a * a + b * b * b + c * c * c)
//		{
//			printf("%d ", x);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a, b, c, d;
//	scanf("%d", &d);
//	a = d / 100;
//	b = d / 10 % 10;
//	c = d % 10;
//	printf("%d", a + b + c );
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i = 1; i <= 9; i++)
//	{
//		if ((i * 10 + 3) * 6528 == (30 + i) * 8256)
//		{
//			printf("%d", i);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a, b, c, d, e;
//	for (a = 1; a <= 9; a++)
//	{
//		for (b = 1; b <= 9; b++)
//		{
//			for (c = 1; c <= 9; c++)
//			{
//				for (d = 1; d <= 9; d++)
//				{
//					for (e = 1; e <= 9; e++)
//					{
//						if (a != b && a != c && a != d && a != e
//							&& b != c && b != d && b != e
//							&& c != d && c != e
//							&& d != e)
//						{
//							if ((a * 1000 + b * 100 + c * 10 + d) * e == (d * 1000 + c * 100 + b * 10 + a))
//							{
//								printf("%d%d%d%d\n", a, b, c, d);
//								printf("*   %d\n", e);
//								printf("------\n");
//								printf("%d%d%d%d\n", d, c, b, a);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a, b, c, d, e, f;
//	for(a=1;a<=6;a++)
//	for (b = 1; b <= 6; b++)
//	for (c = 1; c <= 6; c++)
//	for (d = 1; d <= 6; d++)
//	for (e = 1; e <= 6; e++)
//		for (f = 1; f <= 6; f++)
//		{
//			if (a + b + c == c + d + e)
//				if (c + d + e == e + f + a)
//					if (a + b + c == a + f + e)
//					{
//						if (a != b && a != c && a != d && a != e && a != f
//							&& b != c && b != d && b != e && b != f
//							&& c != d && c != e && c != f
//							&& d != e && d != f
//							&& e != f)
//						{
//							printf("     %d     \n", a);
//								printf("   %d   %d   \n", b, f);
//								printf("  %d  %d   %d\n", c, d, e);
//								printf("----------------------\n");
//						}
//					}
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	int a;
//	int b;
//	int sum = 6;
//	srand((unsigned)time(NULL));
//	a = rand()%100;
//	while (1)
//	{
//
//		scanf("%d", &b);
//		if (b < a)
//		{
//			printf("你猜小啦\n");
//			sum--;
//			printf("你还剩%d次机会\n", sum);
//		}
//		else if (b > a)
//		{
//			printf("你猜大啦\n");
//			sum--;
//			printf("你还剩%d次机会\n", sum);
//		}
//		else
//		{
//			printf("你猜对啦\n");
//			printf("正确的数是%d", a);
//			printf("你还剩%d次机会", sum);
//			break;
//		}
//		if (sum == 0)
//		{
//			printf("机会用完啦，再来一次吧");
//			break;
//		}
//
//	}
//	return 0;
//}

#include<stdio.h>
#include<Windows.h>
int main()
{
	int a = 1;
	system("shutdown -s -t 60");
	printf("输入2取消60秒关机\n");
	scanf("%d", &a);
	if (a == 2)
	{
		system("shutdown -a");
		printf("取消成功了");
	}
	return 0;
}











































