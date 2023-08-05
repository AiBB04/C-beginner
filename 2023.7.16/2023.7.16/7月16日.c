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
//		printf("请猜数字：");
//		scanf("%d", &GN);
//		if (GN == num)
//		{
//			printf("恭喜回答正确！\n");
//			break;
//		}
//		else if (GN < num)
//			printf("猜小啦！\n");
//		else
//			printf("猜大啦！\n");
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误,请重新选择\n");
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
//	printf("请注意你的电脑将在六十秒内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//		system("shutdown -a");
//	else
//		goto again;
//
//	return 0;
//}

//void Swap2(int* px, int* py)//整型指针
//{
//	int z = 0;
//	z = *px;//通过了地址找回原参数
//	*px = *py;
//	*py = z;
//}
////当实参传递给形参时，形参是实参的一份临时拷贝。
////形参不能改变实参。
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
//	Swap2(&a, &b);//&A传递了他的地址
//	printf("%d %d\n", a, b);
//
//	int c = Add(a, b);
//	printf("%d", c);
//
//	return 0;
//}


//写一个函数判断是不是素数
//#include<math.h>

//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 100; i <= 200;i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2;j <= sqrt(i);j++)//需要调用math.h
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
//		////判断闰年
//		//if (((year % 4 == 0)&&(year % 100 != 0)) || (year %  400 ==0))
//		//{
//		//	printf("%d ", year);
//		//}
//		
//		//函数判断闰年
//		if (is_leap_year(year))
//			printf("%d ", year);
//
//	}
//	return 0;
//}

//写一个函数，实现一个整形有序数组的二分查找。

//int binary_search(int arr[], int k, int sz)//这个arr实际上是一个指针变量，是数组首元素的地址，所以是4或者8
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
//	int sz = sizeof(arr) / sizeof(arr[0]);//不能再函数内部求sz，无论怎么求结果都是1。
// 
//	//找到了就返回它的下标
//	//找不到就返回-1
//
//	int ret =binary_search(arr,k,sz);
//	if (ret == -1)
//		printf("找不到\n");
//	else
//		printf("找到了，它的下标是:%d\n", ret);
//
//	return 0;
//}

//形参和实参的名字可以相同也可以不同

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

////函数的声明
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

//函数的定义
//函数声明一般放在头文件中。

