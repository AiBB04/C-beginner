#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>
#include<string.h>
//#include <time.h>

//
//void menu()
//{
//	printf("*************************\n");
//	printf("*********1.play**********\n");
//	printf("*********0.exit**********\n");
//	printf("*************************\n");
//}
//
//void game()
//{
//	int GN = 0;
//	int num = rand()%100+1;
//	
//	while (1)
//	{
//		printf("������֣�");
//		scanf("%d", &GN);
//		if (GN == num)
//		{
//			printf("��ϲ�ش���ȷ��\n");
//			break;
//		}
//		else if (GN < num)
//			printf("��С����\n");
//		else
//			printf("�´�����\n");
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����,������ѡ��\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//
//again:
//	printf("��ע����ĵ��Խ�����ʮ���ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//		system("shutdown -a");
//	else
//		goto again;
//
//	return 0;
//}

//void Swap2(int* px, int* py)//����ָ��
//{
//	int z = 0;
//	z = *px;//ͨ���˵�ַ�һ�ԭ����
//	*px = *py;
//	*py = z;
//}
////��ʵ�δ��ݸ��β�ʱ���β���ʵ�ε�һ����ʱ������
////�ββ��ܸı�ʵ�Ρ�
//
//int Add(int x, int y)
//{
//	int k = x + y;
//	return k;
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	Swap2(&a, &b);//&A���������ĵ�ַ
//	printf("%d %d\n", a, b);
//
//	int c = Add(a, b);
//	printf("%d", c);
//
//	return 0;
//}


//дһ�������ж��ǲ�������
//#include<math.h>

//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 100; i <= 200;i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2;j <= sqrt(i);j++)//��Ҫ����math.h
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("count=%d", count);
//
//	return 0;
//}

//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000;year++)
//	{
//		////�ж�����
//		//if (((year % 4 == 0)&&(year % 100 != 0)) || (year %  400 ==0))
//		//{
//		//	printf("%d ", year);
//		//}
//		
//		//�����ж�����
//		if (is_leap_year(year))
//			printf("%d ", year);
//
//	}
//	return 0;
//}

//дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�

//int binary_search(int arr[], int k, int sz)//���arrʵ������һ��ָ���������������Ԫ�صĵ�ַ��������4����8
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����ٺ����ڲ���sz��������ô��������1��
// 
//	//�ҵ��˾ͷ��������±�
//	//�Ҳ����ͷ���-1
//
//	int ret =binary_search(arr,k,sz);
//	if (ret == -1)
//		printf("�Ҳ���\n");
//	else
//		printf("�ҵ��ˣ������±���:%d\n", ret);
//
//	return 0;
//}

//�βκ�ʵ�ε����ֿ�����ͬҲ���Բ�ͬ

//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d ", num);
//	Add(&num);
//	printf("%d ", num);
//	Add(&num);
//	printf("%d ", num);
//	Add(&num);
//	printf("%d ", num);
//	Add(&num);
//	printf("%d ", num);
//}

//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

////����������
#include"Add.h"


int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int sum = Add(a, b);
	printf("%d\n", sum);
	
	return 0;
}

//�����Ķ���
//��������һ�����ͷ�ļ��С�

