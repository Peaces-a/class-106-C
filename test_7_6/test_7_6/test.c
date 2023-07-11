#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 1.字面常量
// 2.const修饰的常变量 
// 3.define 定义的标识符常量
// 4.枚举常量

//int main()
//{
//	//30;
//	//3.14;
//	//'w';// 字符
//	//"abc";// 字符串
//	//const int a = 10; // 在c中是变量但是，const后不能被修改
//	//a = 20;
//	//printf("%d\n", a);
//
//	
//	int arr[10] = { 0 }; // []内不可放赋值后
//
//	return 0;
//}


//#define MAX 100
//#define STR 'abcdef'
//
//int main()
//{
//	//printf("%d\n", MAX);
//	//int a = MAX;
//	//printf("%d\n", a);
//	//printf("%s\n", STR);
//	MAX = 200;
//	return 0;
//}


// 枚举常量
//enum color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//// 性别
//enum Sex
//{
//	// 枚举常量
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	//三原色
//	//  Red Green Blue
//	int num = 10;
//	enum color c = RED;
//	RED = 20; //不可改
//	MALE = 10;// 不可改
//	return 0;
//}



// 字符串
//#include <string.h>
//int main()
//{
//	//1000 - int
//	// char 字符类型
//	//'a';//字符常量
//	//char ch = 'w';
//	// 字符串
//	//C语言没有字符串类型
//	//"abcdef";// 字符串
//	char arr1[] = "abcdef";//可以存入
//	char arr2[] = {'a','b','c','d','e','f','\0'};// 没有转义字符
//
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	//int len = strlen(arr1);//求一个字符串长度的函数 需要头文件string.h
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	//printf("%d\n", len);
//
//	return 0;
//}

//转义字符
//int main()
//{
//	printf("abc\n"); //换行
//	printf("abc\0df");	// 结束
// printf("%s\n", "(are you ok \?\?)"); //问号
// printf("%c\n", '\''); // 打印单引号
// printf("%c\n","\""); // 打印双引号
// printf("abcd\\0ef"); // 让斜杠不再是转义字符
// printf("\a"); // 警告音
// printf("%c\n", '\130'); //8转10进制 0-7
// printf("%c\n", '\x60'); // 16转10进制
//	return 0;
//}
//#include <string.h>
//int main()
//{
//	//printf("%d\n", strlen("qwer t"));
//	//printf("%d\n", strlen("C:\test\628\test.c"));
//	return 0;
//}

// 注释
//int main()
//{
//	/*int a = 10; c语言的注释风格
//	int a = 20;*/
//	// int a = 10;
//	// 创建指针变量 并赋值为NULL
//	int* p = NULL;
//	return 0;
//}

//int main()
//{
//	// int a = 10； 
//	// C++ 风格
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("加入bite\n");
//	printf("要好好学习吗(0/1)\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("好offier\n");
//	}
//	else 
//	{
//		printf("卖红薯\n");
//	}
//	return 0;
//}

//int main()
//{	
//	int line = 0;
//	printf("加入bite\n");
//
//	while (line<20000)
//	{
//		printf("敲代码\n");
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("加加油\n");
//	}
//
//	return 0;
//}

// 函数
//add(int x, int y)
//{
//	return (x + y);
//}
//int main()
//{	
//	// 初始化
//	int n1 = 0;
//	int n2 = 0;
//	//输入
//	scanf("%d %d", &n1, &n2);
//	//求和
//	//int sum = n1 + n2;
//	int sum = add(n1,n2);
//	int t1 = 200;
//	int t2 = 300;
//	int r1 = add(t1, t2);
//	//打印
//	printf("%d\n", sum);
//
//
//
//	return 0;
//}


// 数组
int main()
{
	int arr[] = {10,11,12,13,14,15,16,17,18,19};
	/*printf("%d\n", arr[8]);*/
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}

	return 0;
}



