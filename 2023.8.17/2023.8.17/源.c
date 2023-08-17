#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	int i = 0;
//	int flag1 = 0;
//	int flag2 = 0;
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//		if (i > 0)
//		{
//			if (arr[i] > arr[i - 1])
//			{
//				flag1 = 1;
//			}
//			else if (arr[i] = arr[i - 1])
//			{
//				;
//			}
//			else
//			{
//				flag2 = 1;
//			}
//		}
//	}
//	if (flag1 + flag2 <= 1)
//	{
//		printf("sorted\n");
//	}
//	else
//	{
//		printf("unsorted\n");
//	}
//	return 0;
//}

//struct Stu
//{
//	//学生的相关属性
//	char name[20];
//	int age;
//};

//struct Stu//全局变量
//{
//	//学生的相关属性
//	char name[20];
//	int age;
//}s1,s2;//s1s2是全局变量

//int main()
//{
//	struct Stu//局部变量
//	{
//		//学生的相关属性
//		char name[20];
//		int age;
//	}s1, s2;
//
//	struct Stu s3;
//	
//	return 0;
//}

//匿名结构体类型--只能用一次
//struct 
//{
//	//学生的相关属性
//	char name[20];
//	int age;
//}x;

//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//
//struct
//{
//	int a;
//	char b;
//	float c;
//}a[20],*p;
//
//int main()
//{
//	p = &x;//无法实现--不兼容,即使成员一模一样也无法实现
//	return 0;
//}

//结构体的自引用
//struct Node
//{
//	int data;
//	struct Node next;
//};
//
//int main()
//{
//	sizeof(struct Node);//无法计算
//	return 0;
//}

//struct Node
//{
//	int data;//数据域
////	----------------------------
//	struct Node* next;//指针域
//};

////第一种
//typedef struct Node
//{
//	int datea;
//	struct Node* next
//}*linklist;
//
////第二种
//struct Node
//{
//	int datea;
//	struct Node* next
//};
//typedef struct Node* linklist;

//struct Point
//{
//	int x;
//	int y;
//}p1 = { 2,3 };
//
//struct score
//{
//	int n;
//	char ch;
//};
//
//struct Stu
//{
//	char name[20];
//	int age;
//	struct score s;
//
//};
//
//int main()
//{
//	struct Point p2 = { 3,4 };
//	struct Stu s1 = { "zhangsan",20,{100,'q'}};
//	printf("%s %d %d %c", s1.name, s1.age, s1.s.n, s1.s.ch);
//
//
//	return 0;
//}