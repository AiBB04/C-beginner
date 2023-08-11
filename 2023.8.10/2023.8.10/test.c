#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//	int a[5][5];
//	printf("%p %d", &a[2][3] - &a[2][4], &a[2][3] - &a[2][4]);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char* arr2 = "arrra";
//	int len = strlen(arr2);//返回无符号整型
//
//	printf("%d", len);
//	return 0;
//}

//int main()
//{
//	if (strlen("abc") - strlen("aasdasd") > 0)
//		printf(">\n");
//	else
//		printf("<\n");
//	return 0;
//}

//模拟实现
//#include<assert.h>
//unsigned int my_strlen(const char* str)
//{
//	assert(str);
//	unsigned int num = 0;
//	while (*str != '\0')
//	{
//		num++;
//		str++;
//	}
//	return num;
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	unsigned int count = my_strlen(arr);
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	char name[20] = { 0 };
//
//	char arr[] = { 'h','e','l','l','o' };
//	strcpy(name,arr);//崩溃
//	printf("%s\n", name);
//
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";//不可更改
//	char arr[] = "arr";
//	strcpy(p, arr);
//
//	return 0;
//}

//void my_strcpy(char des[],const char source[])
//{
//	 while (*source)
//	 {
//		*des = *source;
//		des++;
//		source++;
//	 }
//	 *des = '\0';
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	char arr2[20] = { 0 };
//	my_strcpy(arr2, arr);
//
//	printf("%s", arr2);
//	return 0;
//}

//char* my_strcat(char *dest, const char* src)
//{
//	char* ret = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "hello ";
//	my_strcat(arr1, "world");//不能自己给自己追加
//
//	printf("%s\n", arr1);
//	return 0;
//}