#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��̬�ڴ����

//int main()
//{
//	int a = 10;//4���ֽ�
//	int arr[10];//40���ֽ�
//		
//	return 0;
//}

// malloc
// calloc
// realloc
// free

#include<errno.h>
#include<string.h>
#include<stdlib.h>



//int main()
//{
//	int arr[10] = { 0 };
//	//��̬�ڴ濪��
//	//int *p=(int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	printf("%s\n", strerror(errno));
//	//	return 1;
//	//}
//	//ʹ�ö�̬�ڴ�
//	//int i = 0;
//	//for (i = 0;i < 10;i++)
//	//{
//	//	*(p + i) = i;
//	//}
//	//for (i = 0;i < 10;i++)
//	//{
//	//	printf("%d ", *(p + i));
//	//}
//
//	//int* p = (int*)malloc(INT_MAX);
//	//if (p == NULL)
//	//{
//	//	printf("%s\n", strerror(errno));
//	//	return 1;
//	//}
//		
//	//û��free
//	//������˵�ڴ�ռ�Ͳ�������
//	
//	//free(p);
//	//p = NULL;
//	
//
//
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{	
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//realloc

//int main()
//{
//	int* p =(int*)malloc(40);
//	if (NULL == p)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		*(p + i) = i + 1;
//	}
//	//����
//	int* ptr=(int*)realloc(p, 80);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	for (i = 0;i < 10;i++)
//	{
//		*(p + i) = i + 1;
//	}
//	return 0;
//}

//int main()
//{
//	realloc(NULL, 40);//���ܵȼ���malloc(40)
//	return 0;
//}

