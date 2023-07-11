#define  _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//int num = 10;
//
//int main()
//{
//	int num = 1;
//	printf("num = %d", num);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("     **     \n");
//	printf("     **     \n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *    \n");
//	printf("    *  *    ");
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     man");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("Hello Nowcoder!");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	float i =0;
//	scanf("%f",&i);
//	printf("%.3f", i);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 40;
//	int c = 212;
//	printf("%d",(-8+22)*a-10+c/2);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char i = 'q';
//	scanf("%c",&i);
//	printf("%c\n", i);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("%d\n",b);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char i = '#';
//	scanf("%c", &i);
//	printf("%c",i);
//	printf("%c", i);
//	printf("%c\n", i);
//	printf("%c", i);
//	printf("%c", i);
//	printf("%c\n", i);
//	printf("%c", i);
//	printf("%c", i);
//	printf("%c", i);
//	return 0;
//}
//#include <stdio.h>
//int Max(int x, int y)
//{
//	if (x < y)
//	
//		return y;
//	else
//		return x;
//	
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int r = Max(a, b);
//	printf("%d\n", r);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char i;
//	scanf("%c", &i);
//	printf("  %c  \n", i);
//	printf(" %c%c%c\n", i,i,i);
//	printf("%c%c%c%c%c\n", i,i,i,i,i);
//	printf(" %c%c%c\n", i,i,i);
//	printf("  %c  ", i);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d",&x);
//	if (x < 0)
//		y = 1;
//	else if (x == 0)
//		y = 0;
//	else
//		y = -1;
//	printf("%d", y);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char i;
//	scanf("%c", &i);
//	printf("%d", i);
//	return 0;
//}

// 操作符
//#include <stdio.h>
//int main()
//{
//	//int a = 7 / 2;
//	//int b = 7 / 2;//取模
//	// 除号两端都是整数的时候，执行的是整数除法，如果两端有一个浮点数，就执行浮点数除法
//	float a = 7 / 2.00;
//	int b = 7 / 2; // 取模不能浮点函数只能是整数
//	printf("%.2f", a); // .2表示保留两位小数
//	return 0;
//}


#include <stdio.h>
//int main()
//{
//	int a = 0;// 初始化
//	a = 10;// 赋值
//	a = a + 3;// a += 3 加 乘除同意
//	return 0;
//}

#include <string.h>
//单目操作符
//int main()
//{
//	/*int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));*/
//	int a = 10;
//	int b = a++;
//	//int b = a；a=a+1
//	int a = 20;
//	int b = ++a;
//	//a=a+1; b=a a-- --a 同意
//	printf("%d\n", b);
//	printf("%d\n", a);
//	int a = (int)3.14; // 强制转换为整数
//	printf("%d", a);
//	return 0;
//}

// 逻辑操作符
//int main()
//{
//	//&& 逻辑与 - 并且
//	//|| 逻辑或 - 或者
//
//	int a = 0;
//	int b = 20;
//	if (a && b)
//	{
//		printf("hehe\n");
//	}
//	if (a || b)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

// 条件操作符
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int r = a > b ? a : b; // a大输出a b大于a输出b exp1？ exp2： exe3
//	return 0;
//}

//逗号表达式从左向右一次运算，结果为最后一个
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = (c = a - 2, a = b + c, c - 3);
//	printf("%d", d);
//	return 0;
//}
