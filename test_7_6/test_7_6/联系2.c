#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//���ڱ���
int main()
{
	int a = 20; 
	const int n = 15; // ���ܱ��ı�
	printf("%d\n", a, n);
	return 0;
}

#define MAX 100
#define STR 'abcdef'
int main()
{
	printf("%d\n", MAX);
	int a = MAX
	printf("%d\n,a");
	return 0;
}

enum color
{
	RED,
	GREEN,
	BLUE
};
int main()
{
	enum color c = RED;	
	return 0;
}

#include<string.h>
int main()
{
	printf("%d\n", strlen(arr1));
	return 0;
}

int main()
{	
	int line = 0;
	printf("����bite\n");

	while (line<20000)
	{
		printf("�ô���\n");
		line++;
	}
	if (line >= 20000)
	{
		printf("��offer\n");
	}
	else
	{
		printf("�Ӽ���\n");
	}

	return 0;
}

 /*����*/
add(int x, int y)
{
	return (x + y);
}
int main()
{	
	// ��ʼ��
	int n1 = 0;
	int n2 = 0;
	//����
	scanf("%d %d", &n1, &n2);
	//���
	//int sum = n1 + n2;
	int sum = add(n1,n2);
	int t1 = 200;
	int t2 = 300;
	int r1 = add(t1, t2);
	//��ӡ
	printf("%d\n", sum);



	return 0;
}


// ����
int main()
{
	int arr[] = { 10,11,12,13,14,15,16,17,18,19 };
	/*printf("%d\n", arr[8]);*/
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}

	return 0;
}