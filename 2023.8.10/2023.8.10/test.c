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
//	int len = strlen(arr2);//�����޷�������
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

//ģ��ʵ��
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
//	strcpy(name,arr);//����
//	printf("%s\n", name);
//
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";//���ɸ���
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
//	my_strcat(arr1, "world");//�����Լ����Լ�׷��
//
//	printf("%s\n", arr1);
//	return 0;
//}

//ģ��ʵ��strcmp

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
//	char arr2[] = "zhangsq";//strcmp�Ƚϵ���q��a��ASCII��ֵ
//
//	//�Ƚ�һ�������ַ����Ƿ����
//	// arr1��arr2����������Ԫ�صĵ�ַ
//	// ===============================
//	// ����д�����ڱȽ������ַ����ĵ�ַ
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
//	//�����õ���gbk����Ƚ�
//
//	return 0;
//}

// strcpy  strcat  strcmp
// ���Ȳ������Ƶ��ַ�������

//int main()
//{
//	char arr[4] = { 0 };
//	strcpy(arr, "hello world");//����ȫ
//	printf("%s\n", arr);
//
//	return 0;
//}

//�������޵��ַ�������
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
//	//������һ�����ȵ���ȥԼ������
//	//�����Ͳ�0
//	printf("%s\n", arr1);
//
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "hello\0xxxx ";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 9);
//	//ĩβ��\n
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
//	//���������Ƶ��ַ�������
//	
//	return 0;
//}

//strstr

int main()
{

	return 0;
}