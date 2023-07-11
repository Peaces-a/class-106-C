#define  _CRT_SECURE_NO_WARNINGS
//c语言代码中一定要有main函数
//主函数

//printf是一个库函数
// 专门用来打印程序

//vs2022快捷键
// ctrl+F5
// FN+ctrl+F5
//std - 标准
// i - input
// o - output

#include <stdio.h>
////main函数为程序的入口
//// 只能拥有一个main函数
////标准的主函数写法
//int main() //int 为整形类型 括号内void表示无参数可写可不写
//{
//	printf("hello hehe\n");
//	printf("hehe\n");
//	return 0; //返回0为整数 
//}

//古老的写法 -不推荐
//void main()
//{
//
//}


//数据类型
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", 100);
//	printf("%zu\n", sizeof(char)); //1 字节
//	printf("%zu\n", sizeof(short)); //2 字节
//	printf("%zu\n", sizeof(int)); //4 字节
//	printf("%zu\n", sizeof(long)); //4 字节
//	printf("%zu\n", sizeof(long long)); //8 字节
//	printf("%zu\n", sizeof(float)); //4 字节
//	printf("%zu\n", sizeof(double)); //8 字节
//	return 0;
//}
//计算机单位
//bit - 比特位 
//byte - 字节 1byte=8bit
//kb 1024 mb 1024  gb 1024  tb 1024  pb 1024

//#include <stdio.h>
//int main()
//{
//	int age = 20;
//	double price = 66.6;
//
//	return 0;
//}

// 常量和变量
// 变量分为
// 局部 括号内部
// 全局 括号外部


//#include <stdio.h>

//int b = 20;
//
//int main()
//{
//	short age = 20; // 年龄
//	int high = 180;//身高
//	float weight = 88.5; // 体重
//	int a = 10;
//	return 0;
//}

//全局变量和局部变量可以相同
// 局部变量优先

//int a = 100;
//
//int main()
//{
//	int a = 10;
//	printf("a=%d\n", a);
//	return 0;
//}

// 建议不要将全局变量和局部变量名字一致

// 写一个代码，计算两个整数的和
// scanf 输入函数
// printf 输出函数
// 变量的使用
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;// 初始化
//	// 输入两个整数
//	scanf("%d %d", &num1, &num2);
//	// 求和
//	int sum = num1 + num2;
//	// 输出
//	printf("%d\n", sum);
//	return 0;
//}


//变量的作用域
// 局部变量
//	局部变量所在的范围
// 全局变量
//	在整个工程中都可以使用

//变量的声命周期
// 局部变量
//  进入作用域开始结束作用域结束
// 全局变量
//	整个程序
// 作用域约等于声明周期

int main()
{
	{
		int a = 100;
		printf("a=%d\n", a);
	}
	printf("a=%d\n", a);
	return 0;
}

// int a = 10;

//声明来自外部的值
extern int a;

void test()
{
	printf("test==>%d\n", a);
}
int main()
{
	test();
	{
		
		printf("a=%d\n",a);
	}
	printf("a=%d\n", a);

	return 0;
}
