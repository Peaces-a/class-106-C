#define  _CRT_SECURE_NO_WARNINGS
//����̨��� hello word
#include <stdio.h>
int main()
{
	printf("hello word\n");
	return 0;
}
// ȫ�ֱ���
int a = 100;
int main()
{
	printf("a=%d", a);
	return 0;
}

// �ֲ�����
int main()
{
	{
		int a = 100;
		printf("a=%d\n", a);
	}
	printf("a=%d\n", a);// ���ﲻ����������ű���Ӱ��
	return 0;
}
// ������ʹ��
int main()
{
		//��ʼ��
		int num1 = 0;
		int num2 = 0;
		//�������
		int sum = scanf("%d %d", &num1, &num2);
		//�������
		printf("%d\n", sum)
	return 0;
}
// �ⲿ��ֵ
extern int a;
//ȫ��
void test()
{
	printf("test-->%d\n", a);
}
int main()
{
	test()
	{
		printf("a=%d\n",a)
	}
	printf("a=%d\n",a)
	return 0;
}

//��ֵ������
int main()
{
	int age = 20;
	short high = 174;
	float weight = 55.5;
	return 0;
}



