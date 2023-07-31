#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
//根据下面递归函数: 调用函数Fun(2)，返回值是多少()

//int Fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//}
//
//int main()
//{
//	int ret = Fun(2);
//	printf("%d", ret);
//	return 0;
//}


//逆序字符串(递归实现)

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str !='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//
////void reverse(char* str)
////{
////	char tmp = *str;
////	int len = my_strlen(str);
////	*str = *(str + len - 1);
////	*(str + len - 1)= '\0';
////	if (my_strlen(str + 1) >= 2)
////	reverse(str +1);
////	*(str + len - 1) = tmp;
////}
//
//
//
//void reverse(char arr[],int left,int right)
//{
//	char tmp = arr[left];
//	arr[left] = arr[right];
//	arr[left] = tmp;
//	if(left<right)
//		reverse(arr, left + 1, right - 1);
//
//}
//
//
//int main()
//{
//	char arr[] = "abcdefg";
//	int left = 0;
//	int right = my_strlen(arr)-1;
//	reverse(arr,left,right);
//
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//int left = 0;
//	//int right = sz-2;
//	//int right = strlen(arr) - 1;
//	//while (left < right)
//	//{
//	//	char tmp = arr[left];
//	//	arr[left] = arr[right];
//	//	arr[right] = tmp;
//
//	//	left++;
//	//	right--;
//	//}
//	printf("%s\n",arr);
//	return 0;
//}


//计算 一个数的每位之和

//int DigitSum(unsigned int n)
//{
//	if (n < 9)
//		return DigitSum(n/10) + n % 10;
//	else
//		return n;
//}
//
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	int sum = DigitSum(n);
//	printf("%d", sum);
//	return 0;
//}

//实现N的K次方
////Pow(n * k) -> n*Pow(n, k-1)
////k=0,1
//// k>0,Pow(n * k) -> n*Pow(n, k-1)
////K<0,1/(Pow(n,-k));
//double Pow(int n, int k)
//{
//	if (k < 0)
//		return n * Pow(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0 / Pow(n, -k);
//
//}
//
//
//int mian()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = Pow();
//
//	printf("%d", ret);
//	return 0;
//}