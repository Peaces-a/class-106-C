#define  _CRT_SECURE_NO_WARNINGS
//c���Դ�����һ��Ҫ��main����
//������

//printf��һ���⺯��
// ר��������ӡ����

//vs2022��ݼ�
// ctrl+F5
// FN+ctrl+F5
//std - ��׼
// i - input
// o - output

#include <stdio.h>
////main����Ϊ��������
//// ֻ��ӵ��һ��main����
////��׼��������д��
//int main() //int Ϊ�������� ������void��ʾ�޲�����д�ɲ�д
//{
//	printf("hello hehe\n");
//	printf("hehe\n");
//	return 0; //����0Ϊ���� 
//}

//���ϵ�д�� -���Ƽ�
//void main()
//{
//
//}


//��������
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", 100);
//	printf("%zu\n", sizeof(char)); //1 �ֽ�
//	printf("%zu\n", sizeof(short)); //2 �ֽ�
//	printf("%zu\n", sizeof(int)); //4 �ֽ�
//	printf("%zu\n", sizeof(long)); //4 �ֽ�
//	printf("%zu\n", sizeof(long long)); //8 �ֽ�
//	printf("%zu\n", sizeof(float)); //4 �ֽ�
//	printf("%zu\n", sizeof(double)); //8 �ֽ�
//	return 0;
//}
//�������λ
//bit - ����λ 
//byte - �ֽ� 1byte=8bit
//kb 1024 mb 1024  gb 1024  tb 1024  pb 1024

//#include <stdio.h>
//int main()
//{
//	int age = 20;
//	double price = 66.6;
//
//	return 0;
//}

// �����ͱ���
// ������Ϊ
// �ֲ� �����ڲ�
// ȫ�� �����ⲿ


//#include <stdio.h>

//int b = 20;
//
//int main()
//{
//	short age = 20; // ����
//	int high = 180;//���
//	float weight = 88.5; // ����
//	int a = 10;
//	return 0;
//}

//ȫ�ֱ����;ֲ�����������ͬ
// �ֲ���������

//int a = 100;
//
//int main()
//{
//	int a = 10;
//	printf("a=%d\n", a);
//	return 0;
//}

// ���鲻Ҫ��ȫ�ֱ����;ֲ���������һ��

// дһ�����룬�������������ĺ�
// scanf ���뺯��
// printf �������
// ������ʹ��
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;// ��ʼ��
//	// ������������
//	scanf("%d %d", &num1, &num2);
//	// ���
//	int sum = num1 + num2;
//	// ���
//	printf("%d\n", sum);
//	return 0;
//}


//������������
// �ֲ�����
//	�ֲ��������ڵķ�Χ
// ȫ�ֱ���
//	�����������ж�����ʹ��

//��������������
// �ֲ�����
//  ����������ʼ�������������
// ȫ�ֱ���
//	��������
// ������Լ������������

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

//���������ⲿ��ֵ
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
