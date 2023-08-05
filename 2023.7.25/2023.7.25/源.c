#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//void reverse(char arr[])
//{
//	int right = strlen(arr) - 1;
//	int left = 0;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//
//		right--;
//		left++;
//	}
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str+1)>=2)
//	{
//		reverse(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	////int sz = sizeof(arr) / sizeof(arr[0]);
//	//int right = strlen(arr) - 1;
//	//int left = 0;
//	//while (left < right)
//	//{
//	//	char tmp = arr[left];
//	//	arr[left] = arr[right];
//	//	arr[right] = tmp;
//
//	//	right--;
//	//	left++;
//	//}
//	reverse(arr);
//
//	printf("%s", arr);
//	
//	return 0;
//}

//double Pow(int n, int k)
//{
//	if (k > 0)
//		return n * Pow(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0 / Pow(n, -k);
//}
//
//int main()
//{
//	int n = 2;
//	int k = 3;
//	double ret = Pow(n, k);
//	printf("%lf", ret);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr);
//	printf("%d", sz);
//
//	return 0;
//}



int main()
{
	char arr[] = { 'a','c','d','f','t'};
	int len = strlen(arr);
	printf("%d", len);
	return 0;
}