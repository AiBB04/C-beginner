#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'b';
//	printf("%c\n", ch);
//
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";//���ַ������׵�ַ��ֵ����p
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s", arr);
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";//�����ǰ�����const
//	*p = 'w';
//	return 0;
//}

//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//
//	printf("%s==%s\n", p1, p2);
//	//p1 �� p2 �洢�ĵ�ַʵ��������ͬ�ģ�ָ��ͬһ��ֻ��������.
// 
//	if (p1 == p2)
//		printf("p1==p2\n");
//	else
//		printf("p1!=p2\n");
//
//	if (arr1 == arr2)
//	{
//		printf("arr1==arr2\n");
//	}
//	else
//	{
//		printf("arr1!=arr2\n");
//	}
//	return 0;
//}

//ָ������---�����飬���ڴ��ָ��ġ�

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 5;j++)
//		{
//		  /*printf("%d ", parr[i][j]);*/
//			printf("%d ", *(parr[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����ָ��---��ָ��---ָ�������ָ��
//int *p1[10];p1��ָ�����顣
//int (*p2)[10];p2������ָ�롣

//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	printf("%p\n",arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//
//	//������ͨ����ʾ�Ķ���������Ԫ�صĵ�ַ
//	//��������������
//	//1.sizeof(������)���������������ʾ��������,���������������Ĵ�С
//	//2.&������������ȡ����ʹ��������ĵ�ַ��
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int(*p2)[10] = &arr;//����---��int(*)[10]--����ָ������--����ָ����Ϊp2
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}

//int main()
//{
//	int arr[5] = { 0 };
//	int(*p)[5] = &arr;//����ָ��
//	printf("%p\n", &Add);//����ָ��,ÿһ�����������Լ��ĵ�ַ��
//	printf("%p\n", Add);//���Ǻ����ĵ�ַ
//
//	//��δ洢����ָ�룿
//
//	//int(*pf)(int, int) = &Add;
//	int(*pf)(int, int) = Add;//���Բ�д&
//
//	printf("%p\n", pf);
//
//	//����ָ���ʹ��
//
//	//int ret = (*pf)(2, 3);
//	int ret = pf(2, 3);//Ҳ���Բ�д*
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//����ָ������

//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//void calc(int(*pf)(int, int))
//{
//	int a = 3;
//	int b = 5;
//	int ret = pf(a, b);
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	calc(Add);
//	calc(Sub);
//
//	return 0;
//}