#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

//调试
//int ADD(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	int sum = 0;
//	for (j = 1;j <= n;j++)
//	{
//		ret = 1;
//		for(i = 1;i <= j;i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//int my_strlen(const char* str)//恒定不变 前值后址
//{
//	assert(str != NULL);//断言
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "hello world!!";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

//编程常见错误
//1,编译型错误
//2,链接型错误
//3.运行时错误
//
//int main()
//{
//	char arr[10000] = {0};
//	gets(arr);
//	printf("%s\n", arr);
//	strlen
//	
//	return 0;
//}

