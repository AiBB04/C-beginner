#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//#pragma pack(4)//修改默认对齐数
//struct S
//{
//	int i;
//	double d;
//};
//#pragma pack()//还原默认对齐数
//
//#pragma pack(1)//不存在对齐
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
//	print1(s);//传值调用
//	print2(&s);//传址调用
//	return 0;
//}


//位段---用来节省空间
//struct A
//{
//	//4byte---一次开放四个字节
//	int _a : 2;//分配給_a两个比特位
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
//	char b : 4;//浪费1bit
//	//1byte
//	char c : 5;//浪费3bit
//	//1byte
//	char d : 4;//浪费4bit
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	struct S s = { 0 };
//	s.a = 10;//发生截断
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}