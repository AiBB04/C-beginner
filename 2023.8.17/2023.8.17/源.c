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
//	//ѧ�����������
//	char name[20];
//	int age;
//};

//struct Stu//ȫ�ֱ���
//{
//	//ѧ�����������
//	char name[20];
//	int age;
//}s1,s2;//s1s2��ȫ�ֱ���

//int main()
//{
//	struct Stu//�ֲ�����
//	{
//		//ѧ�����������
//		char name[20];
//		int age;
//	}s1, s2;
//
//	struct Stu s3;
//	
//	return 0;
//}

//�����ṹ������--ֻ����һ��
//struct 
//{
//	//ѧ�����������
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
//	p = &x;//�޷�ʵ��--������,��ʹ��Աһģһ��Ҳ�޷�ʵ��
//	return 0;
//}

//�ṹ���������
//struct Node
//{
//	int data;
//	struct Node next;
//};
//
//int main()
//{
//	sizeof(struct Node);//�޷�����
//	return 0;
//}

//struct Node
//{
//	int data;//������
////	----------------------------
//	struct Node* next;//ָ����
//};

////��һ��
//typedef struct Node
//{
//	int datea;
//	struct Node* next
//}*linklist;
//
////�ڶ���
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