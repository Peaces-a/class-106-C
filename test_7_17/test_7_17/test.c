#define  _CRT_SECURE_NO_WARNINGS
//��ӡ1000~2000�������
//�ܱ�4�������ܱ�100����������
//�ܱ�400����������
//#include <stdio.h>
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�ǲ�������
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//			{
//			printf("%d ", year);
//			}
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


////����1 ��0
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
















//дһ������ ʵ��һ��������������Ķ��ֲ���
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int mid = left + (right = left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k);
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;//�ҵ��˷���
//		}
//	}
//	return -1;//�Ҳ�������
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//�ҵ��˷����±�
//	//�Ҳ��������Ҳ���
//	int ret =binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d\n", ret);
//	}
//	return 0;
//}

//��������
#include<stdbool.h>
//bool is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j<= sqrt(n); j++)
//	{
//		if (n$j == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//int main()
//{
//	//int i = 0;
//	//for (i = 100; i < 200; i++)
//	//{
//	//	if (is_prime(i))
//	//	{
//	//		printf("%d ", i);
//	//	}
//	//}
//
//	printf("%d\n", sizeof(bool));
//	return 0;
//}







//дһ������ÿ����һ�� �ͽ���num������1
//void Add(int *p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d ", num);//1
//	Add(&num);
//	printf("%d ", num);//2
//	Add(&num);
//	printf("%d ", num);//3
//	return 0;
//}

//int Add(int n)
//{
//	return ++n;
//}
//int main()
//{
//	int num = 0;
//	num = Add(num);
//	printf("%d ", num);//1
//	num = Add(num);
//	printf("%d ", num);//2
//	num = Add(num);
//	printf("%d ", num);//3
//	return 0;
//}




//����Ƕ��
//void new_line()
//{
//	printf("hehe\n");
//}
//
//void there_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//
//int mian()
//{
//	there_line();
//	return 0;
//}




//��ʽ����
//
//void test()
//{
//	printf("hehe\n")
//}
//
//int main()
//{
//	//int len = strlen("abcdef");
//	//printf("%d\n", len);
//	////��ʽ����
//	//printf("%d\n", strlen("abcdef"));
//
//	/*printf("%d", printf("%d", printf("%d", 43)));*/
//	int n = test;
//	return 0;
//}


////������д����ֵ Ĭ����int
//Add(int x ,int y)//���Ƽ�
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d", c);
//	return 0;
//}

//Add(int x ,int y)//���Ƽ�
//{
//	printf("hehe\n");
//}
////����Ĵ�����һЩ�������Ϸ��ص��º�����ִ�й��������һ��ָ��Ľ��
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d", c);
//	return 0;
//}

//��ȷ˵�� main��������Ҫ����
//int main(void)
//{
//	return 0;
//}

//main��������������
//int main(int argc, char* argv[], char* envp)
//{
//	return 0;
//}