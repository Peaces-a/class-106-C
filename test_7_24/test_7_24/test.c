#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int arr[20] = {0};
//	printf("%p\n", arr);//arr就是首元素的地址
//	printf("%p\n", arr+1);
//	printf("----------------------\n");
//	printf("%p\n", &arr[0]);//首元素地址
//	printf("%p\n", &arr[0]+1);
//	printf("----------------------\n");
//	printf("%p\n", &arr);//数组的地址
//	printf("%p\n", &arr+1);
//
//	//int n = sizeof(arr);
//	//printf("%d\n", n);
//
//	return 0;
//}


//二维数组的数组名理解
int main()
{
	int arr[3][4] = { 0 };

	printf("%d\n",sizeof(arr) / sizeof(arr[0]));
	printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));

	//int sz = sizeof(arr);
	//printf("%d\n", sz);


	//printf("%p", arr);//二维数组的数组名也表示数组首元素地址
	//printf("%p", arr + 1);

	return 0;
}