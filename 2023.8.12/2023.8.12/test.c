#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>


//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* p = str1;
//
//	while (*p)
//	{
//		s1 = p;
//		s2 = str2;
//		while (*s1 != '\0'&&*s2!='\0'&& * s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)p;
//		}
//		p++;
//	}
//	return NULL;
//
//}
//
//int main()
//{
//	char email[] = "abcdef";
//	char substr[] = "bcd";
//
//	char* ret = my_strstr(email, substr);
//
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else 
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}
// 
//#include<errno.h>
// 
//int main()
//{
//	//printf("%s\n", strerror(0));
//	//printf("%s\n", strerror(1));
//	//printf("%s\n", strerror(2));
//	//printf("%s\n", strerror(3));
//	//printf("%s\n", strerror(4));
//	//printf("%s\n", strerror(5));
//	//printf("%s\n", strerror(6));
//
//	//errno---c语言设置的一个全局的错误码存放变量
//
//	FILE*pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	else
//	{
//
//	}
//	return 0;
//}
//#include<ctype.h>
//
//int main()
//{
//	//int a = isspace(' ');
//	//printf("%d\n", a);
//	//int a = isdigit('w');
//	//printf("%d\n", a);
//
//	printf("%c\n", tolower('W'));
//
//	return 0;
//}

//memcpy - 内存拷贝 - 负责拷贝两块独立空间中间的数据
//重叠内存的拷贝靠的是memmove

void* my_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;

	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}

int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int arr2[10] = { 0 };
	//memcpy(arr2, arr1, 28);

	//float arr3[5] = { 1.0,2.5,3.0,5.0,7.0 };
	//float arr4[10] = { 0 };
	//memcpy(arr4, arr3, 20);

	my_memcpy(arr1 + 2, arr1, 20);


	return 0;
}