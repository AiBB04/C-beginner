#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'b';
//	printf("%c\n", ch);
//
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";//把字符串的首地址赋值给了p
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s", arr);
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";//最好在前面加上const
//	*p = 'w';
//	return 0;
//}

//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//
//	printf("%s==%s\n", p1, p2);
//	//p1 和 p2 存储的地址实际上是相同的，指向同一个只读的数据.
// 
//	if (p1 == p2)
//		printf("p1==p2\n");
//	else
//		printf("p1!=p2\n");
//
//	if (arr1 == arr2)
//	{
//		printf("arr1==arr2\n");
//	}
//	else
//	{
//		printf("arr1!=arr2\n");
//	}
//	return 0;
//}

//指针数组---是数组，用于存放指针的。

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 5;j++)
//		{
//		  /*printf("%d ", parr[i][j]);*/
//			printf("%d ", *(parr[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//数组指针---是指针---指向数组的指针
//int *p1[10];p1是指针数组。
//int (*p2)[10];p2是数组指针。

//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	printf("%p\n",arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//
//	//数组名通常表示的都是数组首元素的地址
//	//但是有两个例外
//	//1.sizeof(数组名)，这里的数组名表示整个数组,计算的是整个数组的大小
//	//2.&数组名，这里取出的使整个数组的地址。
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int(*p2)[10] = &arr;//类型---》int(*)[10]--数组指针类型--数组指针名为p2
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}

//int main()
//{
//	int arr[5] = { 0 };
//	int(*p)[5] = &arr;//数组指针
//	printf("%p\n", &Add);//函数指针,每一个函数都有自己的地址。
//	printf("%p\n", Add);//都是函数的地址
//
//	//如何存储函数指针？
//
//	//int(*pf)(int, int) = &Add;
//	int(*pf)(int, int) = Add;//可以不写&
//
//	printf("%p\n", pf);
//
//	//函数指针的使用
//
//	//int ret = (*pf)(2, 3);
//	int ret = pf(2, 3);//也可以不写*
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//函数指针用例

//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//void calc(int(*pf)(int, int))
//{
//	int a = 3;
//	int b = 5;
//	int ret = pf(a, b);
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	calc(Add);
//	calc(Sub);
//
//	return 0;
//}