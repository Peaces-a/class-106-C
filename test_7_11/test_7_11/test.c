#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//if语句
//int main()
//{
	////判断真假
	//int a = 3;
	//if (a ==5 )
	//	printf("hehe\n");
	////单分支
	//int age = 10;
	//if (age > 18)
	//	printf("chengnian");
	////双分支
	//int age = 10;
	//if (age < 18)
	//{
	//	printf("未成年\n");
	//	printf("不能饮酒\n");
	//}		
	//else
	//	printf("成年\n");
	////多分支
	//int age = 0;
	//scanf("%d", &age);
	//if (age < 18)
	//	printf("青少年");
	//else if (age >= 18 && age < 28)
	//	printf("青年");
	//else if (age >= 29 && age < 40)
	//	printf("中年");
	//else if (age >= 40 && age < 60)
	//	printf("壮年");
	//else if (age >= 60 && age < 100)
	//	printf("老年");
	//else
	//	printf("老寿星");
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

//1.变量的命名（有意义）
//2.空格 换行
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

//判断一个数是否为奇数
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	//判断
//	if (num % 2 == 1)
//		printf("这是个奇数\n");
//	else
//		printf("不是奇数\n");
//	return 0;
//}

//输出1-100的奇数
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
		printf("星期一");
	}
	if (2 == day);
	{
		printf("星期二");
	}	if (3 == day);
	{
		printf("星期三");
	}	if (4 == day);
	{
		printf("星期四");
	}
	if (5 == day);
	{
		printf("星期五");
	}
	if (6 == day);
	{
		printf("星期六");
	}
	if (7 == day);
	{
		printf("星期日");
	}*/

	//switch (day)
	//{
	//case 1:
	//	printf("星期一");
	//	break;
	//case 2:
	//	printf("星期二");
	//	break;
	//case 3:
	//	printf("星期三");
	//	break;
	//case 4:
	//	printf("星期四");
	//	break;
	//case 5:
	//	printf("星期五");
	//	break;
	//case 6:
	//	printf("星期六");
	//	break;
	//case 7:
	//	printf("星期日");
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
//		printf("选择错误");
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
//	printf("请输入密码:");
//	scanf("%d", password);
//
//	//getchar();//读取
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("确认密码(Y/N)");
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