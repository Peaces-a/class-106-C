#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i == 0; i < 10; i++)
//	{
//		if (i = 5)//�����Ǹ�ֵ�������ж� i=5���ʽ�Ľ����5
//			printf("%d", i);
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n)
//	{
//		default:
//			printf("hehe\n");
//			break;
//		case 1:
//			printf("1\n");
//			break;
//		case 2:
//			printf("2\n");
//			break;
//	}
//	return 0;
//}





//// B = 0
//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1:b = 30;
//	case 2:b = 20;
//	case 3:b = 10;
//	default:b = 0;
//	}
//	return 0;
//}

//��С˳�����
//void Swap(int* py, int* px)
//{
//	int tmp = *py;
//	*py = *px;
//	tmp = *px;
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	int tmp = 0;
//	if (a < b)
//	{
//		Swap(&a, &b);
//	}
//	if (a < c)
//	{
//		Swap(&a, &c);
//	}
//	if (b < c)
//	{
//		Swap(&b, &c);
//	}
//	return 0;
//}

//��ӡ1-100֮������ı���
//int main()
//{
//	//int i = 0;
//	//for (i == 0; i < 100; i++)
//	//{
//	//	if (i % 3 == 0)
//	//	{
//	//		printf("%d ", i);
//	//	}
//	//}
//	int i = 0;
//	for (i = 3; i <= 100; i += 3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}


// �������� �����������Ĺ�Լ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d ", &a, &b);//24 18
//	//�����Լ��
//	while (c=a%b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1; b = 1; a <= 100; a++)
//	{
//		if (b >= 20)break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	return 0;
//}


//// ��д������һ��1 ��100 �����������г��ֶ��ٸ�9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//�жϸ�λ
//		if (i % 10 == 9)
//			count++;
//		//�ж�ʮλ
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


////����1/1-1/2+1/3-1/4+1/5-1/99-1/100��ֵ����ӡ�����
////��������1
////��ĸ��1~100
//
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag*(1 / i);
//		flag = -flag;
//	}
//	printf("%lf", sum);
//	return 0;
//}



//
////��10�����������ֵ
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", arr[i]);
//	}
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}


// ����Ļ�����9 * 9�˷��ھ���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		//��ӡһ��
//		int j = 0;
//		for(j = 1; j<= i ;j++)
//		{
//			printf("%d*%d=%2d ", i,j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}




//������
//int main()
//{
//	int a = 0;
//	int i = 0;
//	printf("����1��ʼ������Ϸ\n");
//	scanf("%d", &i);
//	srand((unsigned int)time(NULL));
//	int ret = rand()%100;
//	while (i = 1)
//	{
//		printf("������ 0-100֮��\n");
//		scanf("%d", &a);
//		if (ret > a)
//		{
//			printf("��С��\n");
//		}
//		else if (ret < a)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//	return 0;
//}




//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		//��ӡһ��
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}


//�����ж�
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}



//����
//int main()
//{
//	int arr[10];
//	char ch[5];
//	double data1[20];
//	double data2[15 + 5];
//
//	//�������ֻ����֧��C99��׼�±���
//	int n = 10;
//	scanf("%d", &n);
//	int arr2[n];
//	//��c99��׼֮ǰ����Ĵ�С�����ǳ����������ʽ
//	//��c99֮�������С�����Ǳ�����Ϊ��֧�ֱ߳�����
//	return 0;
//}

//�����ʼ��
//int main()
//{
//	//����ȫ��ʼ�� ʣ��Ԫ��Ĭ��Ϊ0
//	int arr[10] = { 1,2,3 };
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[] = { 1,3,2 };
//
//	char ch1[10] = { 'a','b','c' };
//	char ch2[10] = "abc";
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d", arr[i]);
//	//}
//	//for (i = sz-1; i >= 1; i--)
//	//{
//	//	printf("%d", arr[i]);
//	//}
//	//��ӡ����ÿ��Ԫ�صĵ�ַ
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}