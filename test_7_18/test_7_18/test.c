#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#include"sunb.h"
#include"add.h"

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	//¼Ó·¨
	int sum = Add(a, b);
	printf("%d \n", sum);

	//int ret = sunb(a, b);
	//printf("%d", ret);
	return 0;
}
