#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 1.���泣��
// 2.const���εĳ����� 
// 3.define ����ı�ʶ������
// 4.ö�ٳ���

//int main()
//{
//	//30;
//	//3.14;
//	//'w';// �ַ�
//	//"abc";// �ַ���
//	//const int a = 10; // ��c���Ǳ������ǣ�const���ܱ��޸�
//	//a = 20;
//	//printf("%d\n", a);
//
//	
//	int arr[10] = { 0 }; // []�ڲ��ɷŸ�ֵ��
//
//	return 0;
//}


//#define MAX 100
//#define STR 'abcdef'
//
//int main()
//{
//	//printf("%d\n", MAX);
//	//int a = MAX;
//	//printf("%d\n", a);
//	//printf("%s\n", STR);
//	MAX = 200;
//	return 0;
//}


// ö�ٳ���
//enum color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//// �Ա�
//enum Sex
//{
//	// ö�ٳ���
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	//��ԭɫ
//	//  Red Green Blue
//	int num = 10;
//	enum color c = RED;
//	RED = 20; //���ɸ�
//	MALE = 10;// ���ɸ�
//	return 0;
//}



// �ַ���
//#include <string.h>
//int main()
//{
//	//1000 - int
//	// char �ַ�����
//	//'a';//�ַ�����
//	//char ch = 'w';
//	// �ַ���
//	//C����û���ַ�������
//	//"abcdef";// �ַ���
//	char arr1[] = "abcdef";//���Դ���
//	char arr2[] = {'a','b','c','d','e','f','\0'};// û��ת���ַ�
//
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	//int len = strlen(arr1);//��һ���ַ������ȵĺ��� ��Ҫͷ�ļ�string.h
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	//printf("%d\n", len);
//
//	return 0;
//}

//ת���ַ�
//int main()
//{
//	printf("abc\n"); //����
//	printf("abc\0df");	// ����
// printf("%s\n", "(are you ok \?\?)"); //�ʺ�
// printf("%c\n", '\''); // ��ӡ������
// printf("%c\n","\""); // ��ӡ˫����
// printf("abcd\\0ef"); // ��б�ܲ�����ת���ַ�
// printf("\a"); // ������
// printf("%c\n", '\130'); //8ת10���� 0-7
// printf("%c\n", '\x60'); // 16ת10����
//	return 0;
//}
//#include <string.h>
//int main()
//{
//	//printf("%d\n", strlen("qwer t"));
//	//printf("%d\n", strlen("C:\test\628\test.c"));
//	return 0;
//}

// ע��
//int main()
//{
//	/*int a = 10; c���Ե�ע�ͷ��
//	int a = 20;*/
//	// int a = 10;
//	// ����ָ����� ����ֵΪNULL
//	int* p = NULL;
//	return 0;
//}

//int main()
//{
//	// int a = 10�� 
//	// C++ ���
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("����bite\n");
//	printf("Ҫ�ú�ѧϰ��(0/1)\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("��offier\n");
//	}
//	else 
//	{
//		printf("������\n");
//	}
//	return 0;
//}

//int main()
//{	
//	int line = 0;
//	printf("����bite\n");
//
//	while (line<20000)
//	{
//		printf("�ô���\n");
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("�Ӽ���\n");
//	}
//
//	return 0;
//}

// ����
//add(int x, int y)
//{
//	return (x + y);
//}
//int main()
//{	
//	// ��ʼ��
//	int n1 = 0;
//	int n2 = 0;
//	//����
//	scanf("%d %d", &n1, &n2);
//	//���
//	//int sum = n1 + n2;
//	int sum = add(n1,n2);
//	int t1 = 200;
//	int t2 = 300;
//	int r1 = add(t1, t2);
//	//��ӡ
//	printf("%d\n", sum);
//
//
//
//	return 0;
//}


// ����
int main()
{
	int arr[] = {10,11,12,13,14,15,16,17,18,19};
	/*printf("%d\n", arr[8]);*/
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}

	return 0;
}



