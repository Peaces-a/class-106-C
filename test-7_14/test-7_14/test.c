#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//get_max(int x, int y)
//{
//	return (x > y ? x: y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d,%d", &a, &b);
//	int m = get_max(a, b);
//	printf("%d\n", m);
//	return 0;
//}

// ����
//void Swap1(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
// 
//void Swap2(int *px ,int *py)
//{
//	int z = 0; 
//	z = *px; // z =a 
//	*px = *py;// a = b 
//	*py = z; // b = a
//
//}
//
//Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
////��ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ���� 
////���βε��޸Ĳ��ܸı�ʵ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	//int c = Add(a+3, b);
//	printf("%d\n", c);
//
//	printf("����ǰa=%d b=%d\n", a, b);
//	Swap1(a, b);
//	Swap2(&a, &b);
//	printf("������a=%d b=%d\n", a,b);
//	return 0;
//}

// дһ�������ж�һ�����ǲ�������
//����ֻ�ܱ�1�ͱ���������������

//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i < 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�������ʹ�ӡ
//		//��2��i-1֮�������ȥ�Գ�i
//		int flag = 1;//��1��ʾ������
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//			if (flag == 1)
//			{
//				count++;
//				printf("%d ", i);
//			}
//		
//	}	
//	printf("\n����Ϊ%d", count);
//	return 0;
//}


//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i < 200; i += 2)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�������ʹ�ӡ
//		//��2��i-1֮�������ȥ�Գ�i
//		int flag = 1;//��1��ʾ������
//		int j = 0;
//		for (j = 2; j <= sqrt(i) - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//
//	}
//	printf("\n����Ϊ%d", count);
//	return 0;
//}


//����������1
//���Ƿ���0
#include <math.h>
int is_prime(int n)
{
		int j = 0;
		for (j = 2; j <= sqrt(n) - 1; j++)
		{
			if (n % j == 0)
			{
				return 0;
			}
		}
		return 1;
}

#include<math.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i < 200; i += 2)
	{
		//�ж�i�Ƿ�Ϊ����
		//�������ʹ�ӡ
		//��2��i-1֮�������ȥ�Գ�i
		if (is_prime(i))
		{
			printf("%d ", i);
			count++;
		}

	}
	printf("\n����Ϊ%d", count);
	return 0;
}