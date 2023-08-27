#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	//输出上半行
//	for (i = 0;i < n;i++)
//	{
//		int j = 0;
//		for (j = 0;j < n - i;j++)
//		{
//			printf("  ");
//		}
//		for (j = 0;j <= i;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//输出下半行
//	for (i = 0;i < n + 1;i++)
//	{
//		int j = 0;
//		for (j = 0;j < i;j++)
//		{
//			printf("  ");
//		}
//		for (j = 0;j < n+1 -i;j++)
//		{
//			printf("*");
//		}
//
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int score = 0;
//	int n = 0;
//	int max = 0;
//	int min = 100;
//	int sum = 0;
//	while (scanf("%d",&score)==1)
//	{
//		n++;
//		if (score > max)
//		{
//			max = score;
//		}
//		if (score < min)
//		{
//			min = score;
//		}
//		sum += score;
//		if (n == 7)
//		{
//			printf("%.2lf", (sum - max - min) / 5.0);
//			n = 0;
//			max = 0;
//			min = 100;
//			sum = 0;
//		}
//	}
//	return 0;
//}

//struct MINE
//{
//	unsigned char A : 4;
//	unsigned char B : 6;
//	unsigned char C : 3;
//	unsigned char D : 1;
//	unsigned char E : 2;
//};

//void find_single_dog(int arr[], int sz, int* pd1, int* pd2)
//{
//	int i = 0;
//	int ret = 0;
//	//1.异或
//	for (i = 0;i < sz;i++)
//	{
//		ret ^= arr[i];
//	}
//	//2.计算ret的二进制中右边的第几位是1
//	int pos = 0;
//	for (pos = 0;pos < 32;pos++)
//	{
//		if ((((ret >> pos) & 1) == 1))
//		{
//			break;
//		}
//	}
//	for (i = 0;i < sz;i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			*pd1 ^= arr[i];
//		}
//		else
//		{
//			*pd2 ^= arr[i];
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int dog1 = 0;
//	int dog2 = 0;
//	find_single_dog(arr, sz, &dog1, &dog2);
//	printf("%d %d\n", dog1, dog2);
//	return 0;
//}
//
//#include<stdlib.h>
//#include<assert.h>
//
//int main()
//{
//	char arr[20] = "1231456";
//	int ret = atoll(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//写一个宏交换二进制位的奇数位和偶数位

//#define SWAP_BIT(n) (((n&0x55555555)<<1)+((n&0xaaaaaaaa)>>1))
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", SWAP_BIT(n));
//
//	return 0;
//}

