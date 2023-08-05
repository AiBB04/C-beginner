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
//	int max = arr[0];//诺数组中都是些负数的话，这一行的max不能定义成0
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
//	int sz = sizeof(arr) / sizeof(arr[0]);//在函数外部求sz，这点非常重要。
//	int i = 0;
//	bubble_sort(arr, sz);//这里传递的是首元素地址
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
// 
//数组名确实能表达首元素的地址
//但是有两个例外
//1.sizeof（数组名），这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2.&数组名，这里的数组名表示整个数组，取出的是整个数组的地址


//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//arr就是首元素地址
//	printf("%p\n", arr+1);
//	printf("--------------");
//	printf("%p\n", &arr[0]);//首元素地址
//	printf("%p\n", &arr[0]+1);
//	printf("--------------");
//	printf("%p\n", &arr);//整个数组的地址
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
//	printf("%p\n", arr);//二维数组的数组名表示的是一行的地址
//	printf("%p\n", arr+1);//涨了16
//
//	printf("%d\n",sizeof(arr)/sizeof(arr[0]));//计算行数
//	printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));//计算列数
//
//	return 0;
//}

