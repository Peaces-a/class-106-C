#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar())!=EOF)
//	{
//		printf("%c\n", ch+32);
//		getchar();
//
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("%15d", 0xABCDEF);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("%#o %#X", 1234, 1234);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char a = '0';
//	int  b = 0;
//	float c = 0.0;
//	scanf("%c\n%d\n%f", &a, &b, &c);
//	printf("%c %d %6f", a, b, c);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a;
//	int b;
//	int c;
//	scanf("%d %d %d",&a,&b,&c);
//	printf("%d%8d%8d", a, b, c);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	float a = 0.0;
//	scanf("%f", &a);
//	printf("%d", (int)a%10);
//	return 0;
//}







//for 循环
// 1-10
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 10; a++)
//		printf("%d ", a);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <= 9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
 

// do while 循环
//int main()
//{
//	int i = 1;
//	do
//	{
//		
//		if (5 == i)
//			continue;
//		printf("%d", i);
//		i++;
//	}
//		while (i <= 10);
//
//	return 0;
//}

//计算n的阶乘
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d", ret);
//	return 0;
//}

//计算1!+2!+3!......
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int num = 0;
//	/*for (n = 1; n <= 10; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;			
//		}
//		num = ret + num;
//	}*/
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		num = num + ret;
//	}
//	printf("%d", num);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &k);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//			printf("找到了下表是%d", i);
//		break;
//	}
//	if (i = sz)
//	{
//		printf("找不到");
//	}
//	return 0;
//}

//查找数据
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	scanf("%d", &k);
	int left = 0;
	int right = sz - 1;
	while (left<=right)
	{

	
		int mid = (left + right) / 2;
		for (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了下表是%d", mid);
			break;
		}
		if (left > right)
		{
			printf("找不到了");

		}
	}
	return 0;
}