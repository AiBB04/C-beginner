#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("num��ֵΪ:%d\n", n);
//	printf("*pFloat��ֵΪ:%f\n", *pFloat);
//	return 0;
//}

//V = (-1)^S * M * 2 ^ E
//V = 5.0f  ---> 101.0 ---> 1.01 * 2 ^ 2 ---> (-1) ^ 0 * 1.01 * 2 ^ 2
//V = 9.5f  ---> 1001.1 ---> 1.0011 * 2 ^3 ---> (-1) ^ 0 * 1.0011 * 2 ^ 3
//v = 9.6f  ---> 1001.100000000...100000010//���Ȳ��� --->
//����float���ͣ�Sռ1��bit  Eռ8�� Mռ23��
//����double���ͣ�Sռ1�� Eռ11�� Mռ52��

//5.5 ---> 101.1 ---> 1.011*2^2 ---> s=0 m=1.011 e=2 
//--->0100 0000 1011 0000 0000 0000 0000 0000//��0���ں��� 
//---> 4 0 b 0 0 0 0
//--->2 + 127 = 129

//��֤
//int main()
//{
//	float f = 5.5;
//	return 0;
//}

//int main()
//{
//	int n = 9;
//	//00000000000000000000000000001001
//	float* pFloat = (float*)&n;
//	printf("n��ֵΪ��%d\n", n);//9
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//	//0 00000000 00000000000000000001001
//	//EΪȫ0
//	//0.00000000000000000001001*2^-126
//
//	*pFloat = 9.0;
//	//1001.0
//	//1.001*2^3
//	//S=0 E=3 M=1.001
//	//0 10000010 00100000000000000000000
//	printf("num��ֵΪ:%d\n", n);
//	printf("*pFloat��ֵΪ:%f\n", *pFloat);
//	return 0;
//}
//	//n��ֵΪ��9
//	//* pFloat��ֵΪ��0.000000
//	//num��ֵΪ:1091567616
//	//* pFloat��ֵΪ : 9.000000


//void move_odd_even(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	//����������һ��ż����ͣ����
//	while (left < right)
//	{
//		while (left < right && arr[left] % 2)
//		{
//			left++;
//		}
//		//����������һ��������ͣ����
//		while (left < right && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			right++;
//			left--;
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//����
//	for (i = 0;i < sz;i++)
//	{
//		scanf("%d", arr + i);
//	}
//	//����
//	move_odd_even(arr, sz);
//	//���
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//�����������еĺϲ�

//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr1[1000];
//	int arr2[1000];
//	//����n������
//	int i = 0;
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", arr1 + i);
//	}
//	for (i = 0;i < m;i++)
//	{
//		scanf("%d", arr2 + i);
//	}
//	int j = 0;
//	int k = 0;
//	
//	while (j < n && k < m)
//	{
//		if (arr1[j] < arr2[k])
//		{
//			printf("%d ", arr1[j]);
//			j++;
//		}
//		else
//		{
//			printf("%d ", arr2[k]);
//			k++;
//		}
//	}
//	if (j < n)
//	{
//		for (;j < n;j++)
//		{
//			printf("%d ", arr1[j]);
//		}
//	}
//	else
//	{
//		for (;k < m;k++)
//		{
//			printf("%d ", arr2[k]);
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[1000];
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		scanf("%d", arr + i);
//	}
//
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}