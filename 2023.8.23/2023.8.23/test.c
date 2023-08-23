#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
//常见动态内存错误
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	*p = 20;
//	free(p);
//	p = NULL;
//	return 0;
//}

//struct S
//{
//	int n;
//	int arr[];//柔性数组成员
//};
//
//int main()
//{
//	int sz = sizeof(struct S);
//	printf("%d\n", sz);
//
//	//柔性数组的使用
//	struct S*ps=(struct S*)malloc(sizeof(struct S) + 40);
//	ps->n = 100;
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	return 0;
//}

//struct S
//{
//	int n;
//	int* arr;
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	if (NULL == ps)
//	{
//		return 1;
//	}
//	ps->n = 100;
//	ps->arr = (int*)malloc(40);
//	if (NULL == ps->arr)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//释放
//	free(ps->arr);
//	free(ps);
//	ps->arr = NULL;
//	ps = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("C:\\Users\\22402\\Desktop\\test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE*pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	char i = 0;
//	for (i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i,pf);
//	}
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	//读文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	while ((ch=fgetc(pf))!=EOF)
//	{
//		printf("%c ", ch);
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

int main()
{
	
	return 0;
}