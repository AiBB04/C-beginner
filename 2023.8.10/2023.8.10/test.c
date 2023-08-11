#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

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

//模拟实现strcmp

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0');
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//}
//
//int main()
//{
//	char arr1[] = "zhangsan";
//	//char arr2[] = "lisi";
//	//char arr2[] = "zhangsanfeng";
//	char arr2[] = "zhangsq";//strcmp比较的是q和a的ASCII码值
//
//	//比较一下两个字符串是否相等
//	// arr1和arr2都是数组首元素的地址
//	// ===============================
//	// 下述写法是在比较两个字符串的地址
//	/*if (arr1 == arr2)
//	{
//		printf("==\n");
//	}
//	else
//	{
//		printf("!=\n");
//	}*/
//	
//	int ret = strcmp(arr1, arr2);
//	if (ret < 0)
//		printf("<\n");
//	else if (ret == 0)
//	{
//		printf("==\n");
//	}
//	else
//		printf(">\n");
//
//	//中文用的是gbk编码比较
//
//	return 0;
//}

// strcpy  strcat  strcmp
// 长度不受限制的字符串函数

//int main()
//{
//	char arr[4] = { 0 };
//	strcpy(arr, "hello world");//不安全
//	printf("%s\n", arr);
//
//	return 0;
//}

//长度受限的字符串函数
//strncpy
//strncat
//strncmp

//int main()
//{
//	char arr1[] = "abcdef";
//	//char arr2[] = "123defgh";
//	char arr2[] = "123";
//
//	strncpy(arr1, arr2, 5);
//	//增加了一个长度的量去约束代码
//	//不够就补0
//	printf("%s\n", arr1);
//
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "hello\0xxxx ";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 9);
//	//末尾补\n
//	printf("%s\n", arr1);
//	
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abc";
//	int ret = strncmp(arr1, arr2, 3);
//	if (ret < 0)
//		printf("<\n");
//	else if (ret == 0)
//		printf("==\n");
//	else
//		printf(">\n");
//
//	//长度受限制的字符串长度
//	
//	return 0;
//}

//strstr

int main()
{

	return 0;
}