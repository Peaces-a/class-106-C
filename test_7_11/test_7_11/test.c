#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//if���
//int main()
//{
	////�ж����
	//int a = 3;
	//if (a ==5 )
	//	printf("hehe\n");
	////����֧
	//int age = 10;
	//if (age > 18)
	//	printf("chengnian");
	////˫��֧
	//int age = 10;
	//if (age < 18)
	//{
	//	printf("δ����\n");
	//	printf("��������\n");
	//}		
	//else
	//	printf("����\n");
	////���֧
	//int age = 0;
	//scanf("%d", &age);
	//if (age < 18)
	//	printf("������");
	//else if (age >= 18 && age < 28)
	//	printf("����");
	//else if (age >= 29 && age < 40)
	//	printf("����");
	//else if (age >= 40 && age < 60)
	//	printf("׳��");
	//else if (age >= 60 && age < 100)
	//	printf("����");
	//else
	//	printf("������");
	//return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	}
//
//	return 0;
//}

//1.�����������������壩
//2.�ո� ����
//int main()
//{
//	char first_name[20] = { 0 };
//
//	int a = 10;
//
//
//	return 0;
//}

//int test()
//{
//	int a = 3;
//	if (a == 3)
//		return y;
//	else
//	return 0;
//}
//
//int main()
//{
//	int r = test();
//	printf("%d", r);
//	return 0;
//}


//int main()
//{
//	//int num = 3;
//	//if (5 == num)// if (num == 5)
//	//	printf("hehe\n");
//	//if (5 == num)
//	//{
//	//	printf("hehe\n");
//	//}
//
//
//	return 0;
//}

//�ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	//�ж�
//	if (num % 2 == 1)
//		printf("���Ǹ�����\n");
//	else
//		printf("��������\n");
//	return 0;
//}

//���1-100������
//int main()
//{
//	int num = 1;
//	while (num <101)
//	{
//		if (num % 2 == 1)
//			printf("%d  ", num);
//		num++;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
	/*if (1 == day);
	{
		printf("����һ");
	}
	if (2 == day);
	{
		printf("���ڶ�");
	}	if (3 == day);
	{
		printf("������");
	}	if (4 == day);
	{
		printf("������");
	}
	if (5 == day);
	{
		printf("������");
	}
	if (6 == day);
	{
		printf("������");
	}
	if (7 == day);
	{
		printf("������");
	}*/

	//switch (day)
	//{
	//case 1:
	//	printf("����һ");
	//	break;
	//case 2:
	//	printf("���ڶ�");
	//	break;
	//case 3:
	//	printf("������");
	//	break;
	//case 4:
	//	printf("������");
	//	break;
	//case 5:
	//	printf("������");
	//	break;
	//case 6:
	//	printf("������");
	//	break;
	//case 7:
	//	printf("������");
	//	break;
	//}

//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekady");
//		break;
//	case 6:
//	case 7:
//		printf("weekend");
//		break;
//	default:
//		printf("ѡ�����");
//		break;
//	}
//
//	return 0;
//}



//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1: n++;
//	case 2: m++;
//	case 3: 
//		switch (n)
//		{
//		case 1: n++;
//		case 2: m++; n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d n = %d", m, n);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i<=10) 
//	{
//		i++;
//		if(5==i)
//			continue;
//		printf("%d", i);
//	}
//
//	return 0;
//}

//int main()
//{
//	/*int ch = 0;*/
//	//while(getchar())
//	//int ch = getchar();
//	//printf("%c", ch);
//	//putchar(ch);
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//	char password[20] = { 0 };
//	printf("����������:");
//	scanf("%d", password);
//
//	//getchar();//��ȡ
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("ȷ������(Y/N)");
//	int ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("Yes");
//	}
//	else
//	{
//		printf("No");
//	}
//	return 0;
//}

//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}