#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//enum Day
//{
//	//枚举常量
//	Mon=1,//0
//	Tues,//1
//	Wed,//2
//	Thur,//3
//	Fri,//4
//	Sat,//5
//	Sun//6
//};
//
//int main()
//{
//	enum Day d = Fri;
//	printf("%d\n", Mon);
//	printf("%d\n", Tues);
//	printf("%d\n", Wed);
//	printf("%d\n", Thur);
//	printf("%d\n", Fri);
//
//	return 0;
//}


//联合
//union Un
//{
//	int a;
//	char c;
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.a));
//	printf("%p\n", &(u.c));
//
//
//	return 0;
//}

//判断大小端存储

//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//返回1是小端，返回0是大端。
//	return u.c;
//}

//union Un
//{
//	char arr[5];
//	int i;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}

