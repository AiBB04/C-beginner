#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//	int n = 0;
//	for (n = 0;n < 10;n++)
//	{
//		scanf("%d", &arr[n]);
//	}
//	int max = arr[0];//ŵ�����ж���Щ�����Ļ�����һ�е�max���ܶ����0
//	for (int i = 0;i < 10;i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (i = 1;i < 10;i++)
//	{
//		for (n = 1;n <= i;n++)
//		{
//			printf("%dx%d=%-2d ", i, n, i * n);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p\n", &arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = {1,2,3,4,2,3,4,5,3,4,5,6};
//	char arr1[][5] = { "sdas","sda" };
//	return 0;
//}

//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		int j = 0;
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//�ں����ⲿ��sz�����ǳ���Ҫ��
//	int i = 0;
//	bubble_sort(arr, sz);//���ﴫ�ݵ�����Ԫ�ص�ַ
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
// 
//������ȷʵ�ܱ����Ԫ�صĵ�ַ
//��������������
//1.sizeof�������������������������ʾ�������飬���������������Ĵ�С����λ���ֽ�
//2.&���������������������ʾ�������飬ȡ��������������ĵ�ַ


//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//arr������Ԫ�ص�ַ
//	printf("%p\n", arr+1);
//	printf("--------------");
//	printf("%p\n", &arr[0]);//��Ԫ�ص�ַ
//	printf("%p\n", &arr[0]+1);
//	printf("--------------");
//	printf("%p\n", &arr);//��������ĵ�ַ
//	printf("%p\n", &arr+1);
//
//	return 0;
//}

//int main()
//{
//	int arr[3][4];
//	int sz = sizeof(arr);
//	printf("%d\n", sz);
//
//	printf("%p\n", arr);//��ά�������������ʾ����һ�еĵ�ַ
//	printf("%p\n", arr+1);//����16
//
//	printf("%d\n",sizeof(arr)/sizeof(arr[0]));//��������
//	printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));//��������
//
//	return 0;
//}

