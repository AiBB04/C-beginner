#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 123456;//a�����ͱ�����ռ���ĸ��ֽڵ��ڴ�ռ�
//	char* pa = (char*)&a;//pa��ָ�������������ŵ�ַ��
//	printf("%c", *pa);
//	
//	return 0;
//}

//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;
//};//p1,p2;//�����p1��p2������ȫ�ֵĽṹ�����
//
//int main()
//{
//	struct Peo p1 = { 0 };//�ṹ������Ĵ���
//
//	return 0;
//}

////int count_num_of_1(int n)//�޷����㸺��
//int count_num_of_1(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}

//int count_num_of_1(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//int count_num_of_1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int n = count_num_of_1(num);
//	printf("%d\n", n);
//	return 0;
//}

//int main()
//{
//	//��ȡ����λ������
//	int i = 0;
//	int num = 0;
//	scanf("%d", &num);
//	
//	for (i = 30;i >= 0;i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//
//	for (i = 31;i >= 1;i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//
//	return 0;
//}

int is_leap_year(int y)
{
	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
}

int main()
{
	int y = 0;
	int m = 0;
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	while (scanf("%d%d", &y, &m) == 2)
	{
		int d = days[m];
		if (is_leap_year(y)&&m==2)
			d++;
		printf("%d\n", d);
	}

	return 0;
}