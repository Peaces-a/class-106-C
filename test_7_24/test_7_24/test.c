#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int arr[20] = {0};
//	printf("%p\n", arr);//arr������Ԫ�صĵ�ַ
//	printf("%p\n", arr+1);
//	printf("----------------------\n");
//	printf("%p\n", &arr[0]);//��Ԫ�ص�ַ
//	printf("%p\n", &arr[0]+1);
//	printf("----------------------\n");
//	printf("%p\n", &arr);//����ĵ�ַ
//	printf("%p\n", &arr+1);
//
//	//int n = sizeof(arr);
//	//printf("%d\n", n);
//
//	return 0;
//}


//��ά��������������
int main()
{
	int arr[3][4] = { 0 };

	printf("%d\n",sizeof(arr) / sizeof(arr[0]));
	printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));

	//int sz = sizeof(arr);
	//printf("%d\n", sz);


	//printf("%p", arr);//��ά�����������Ҳ��ʾ������Ԫ�ص�ַ
	//printf("%p", arr + 1);

	return 0;
}