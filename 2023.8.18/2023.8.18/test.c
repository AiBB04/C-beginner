#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//#pragma pack(4)//�޸�Ĭ�϶�����
//struct S
//{
//	int i;
//	double d;
//};
//#pragma pack()//��ԭĬ�϶�����
//
//#pragma pack(1)//�����ڶ���
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}

//struct S
//{
//	int data[1000];
//	int num;
//};
//
//void print1(struct S ss)
//{
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		printf("%d ", ss.data[i]);
//	}
//	printf("%d\n", ss.num);
//}
//
//void print2(struct S* ps)
//{
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		printf("%d ", ps->data[i]);
//	}
//	printf("%d\n", ps->num);
//}
//
//int main()
//{
//	struct S s = { {1,2,3},100 };
//	print1(s);//��ֵ����
//	print2(&s);//��ַ����
//	return 0;
//}


//λ��---������ʡ�ռ�
//struct A
//{
//	//4byte---һ�ο����ĸ��ֽ�
//	int _a : 2;//����o_a��������λ
//	int _b : 5;
//	int _c : 10;
//	//4byte
//	int _d : 30;
//};
////47 bit
//
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}

//struct S
//{
//	//1byte
//	char a : 3;
//	char b : 4;//�˷�1bit
//	//1byte
//	char c : 5;//�˷�3bit
//	//1byte
//	char d : 4;//�˷�4bit
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	struct S s = { 0 };
//	s.a = 10;//�����ض�
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}