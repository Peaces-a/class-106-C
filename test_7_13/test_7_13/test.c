#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,6,7,8,9,10 };
//	int k = 7;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ���,�±���%d",mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���");
//	}
// 	return 0;
//}

//#include<Windows.h>
//int main()
//{
//	char arr1[] =  "Welcome to bit!!!!" ;
//	char arr2[] =  "##################" ;
//	int left = 0;
//	int right = sizeof(arr1)-1;//int right = sizeif(arr1)/sizeif(arr1[0])-2;
//	while (left <= right )
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		// �����Ļ
//		system("cls");//�⺯��������ִ��ϵͳ����
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0;i<3;i++)
//	{ 
//		printf("����������");
//		scanf("%s", password);
//		if (strcmp(password,"abcdef") ==0)// �Ƚ������ַ����Ƿ���Ȳ���ʹ�� == ����ʹ�ÿ⺯�� strcmp �������ֵΪ0��ʾ�����ַ������
//		{
//			printf("������ȷ\n");
//			break;
//		}
//		else
//		{
//			printf("�������");
//		}
//	}
//	if (i == 3)
//	{
//		printf("������󳬹�����");
//	}
//	return 0;
//}

// ���Բ���һ���������1-100��
//������
//�´���
//��С��

//#include<time.h>
//
//void menu()
//{
//	printf("*********************************\n");
//	printf("************1.play****************\n");
//	printf("************0.exit***************\n");
//	printf("*********************************\n");
//}
//
//void game()
//{	
//	int	guss = 0;
//	//���������
//	int ret = rand()%100+1;//���������
//	/*printf("%d\n", ret);*/
//	// ������
//	while (1)
//	{
//		printf("�������\n");
//		scanf("%d", &guss);
//		if (guss < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guss > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//}


////ָ��
////int *p = NULL
////int a = 0
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//ʱ������������
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ");
//			break;
//		default:
//			printf("�������,����ѡ��");
//			break;
//		}
//	} while (input);
//	{
//
//	}
//	return 0;
//}

////go tu ���
//int main()
//{
//again:
//	printf("hehe");
//	printf("haha");
//	goto again;
//	return 0;
//}

//�ػ�����
//��������������һ���ӹػ� ��ʼshutdown -s -t  60  ȡ��shutdown -a
//������� ȡ���ػ� ����ȡ��
//#include<Windows.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("ע����ĵ��Խ���60s�ڹػ����롰ȡ���ػ���ȡ��\n");
//	scanf("%s", &input);
//	if (strcmp(input, "ȡ���ػ�") == 0)
//	{
//		system("shutdown -a");
//		printf("ȡ���ػ���\n");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

