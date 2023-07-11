#define  _CRT_SECURE_NO_WARNINGS
//控制台输出 hello word
#include <stdio.h>
int main()
{
	printf("hello word\n");
	return 0;
}
// 全局变量
int a = 100;
int main()
{
	printf("a=%d", a);
	return 0;
}

// 局部变量
int main()
{
	{
		int a = 100;
		printf("a=%d\n", a);
	}
	printf("a=%d\n", a);// 这里不受上面大括号变量影响
	return 0;
}
// 变量的使用
int main()
{
		//初始化
		int num1 = 0;
		int num2 = 0;
		//输入变量
		int sum = scanf("%d %d", &num1, &num2);
		//输出变量
		printf("%d\n", sum)
	return 0;
}
// 外部的值
extern int a;
//全局
void test()
{
	printf("test-->%d\n", a);
}
int main()
{
	test()
	{
		printf("a=%d\n",a)
	}
	printf("a=%d\n",a)
	return 0;
}

//数值的命名
int main()
{
	int age = 20;
	short high = 174;
	float weight = 55.5;
	return 0;
}



