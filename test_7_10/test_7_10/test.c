#define  _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>

// typedef �ؼ���

//typedef unsigned int unit;
//
//int mian()
//{
//	unsigned int num = 0;
//	unit num2 = 2;    //unsigned = unit
//	return 0;
//}

//static
//1.���ξֲ�����
//2.����ȫ�ֱ���
//3.���κ���

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ",a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//
//extern int g_val;
//
//int main()
//{
//	printf("%d", g_val);
//
//	return 0;
//}

//extern int add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = add(a, b);
//	printf("%d", c);
//	return 0;
//}


// #define ���峣���ͺ�
//#define num 100;
//int main()
//{
//	printf("%d\n", num);
//	int n = num;
//	printf("%d\n", n);
//	int arr[num] = { 0 };
//	return 0;
//}

//definr �����
//#define add(x,y) ((x)+(y))
//
//
//int main()
//{
//	int a = 90;
//	int b = 20;
//	int c = add(a, b);
//	printf("%d", c);
//	return 0;
//}


// ָ��
//int main()
//{
//	int a = 10;//����ѵ����4���ֽڣ��洢10
//	&a; // ȡ��ַ��
//	int* p = &a;
//	// P����ָ�����
//	char ch = 'w';
//	char* pc = &ch;
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}

#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a;
//	gets(a);
//	int t = 0;
//	t = strlen(a);
//	printf("%d", t);
//
//	return 0;
//}

//ѧ��
struct Stu
{
	//�ṹ��ĳ�Ա
	char name[20];
	int age;
	char sex[10];
	char tele[12];
};
void print(struct Stu* ps)
{
	printf("%s,%d,%s,%s\n", (*ps).age, (*ps).name, (*ps).sex);
	//->
	//�ṹ��ָ�����->��Ա����
	printf("%s,%d,%s,%s\n", ps->name, ps->age, ps->sex, ps->tele);
}
int main()
{
	struct Stu s = {"zhangsan",20,"nan","1559665562"};
	/*printf("%s,%d,%s,%s", s.name, s.age, s.sex, s.tele);*/
	print(&s);
	return 0;
}