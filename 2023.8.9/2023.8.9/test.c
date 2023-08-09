#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h> 

//冒泡排序

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	//冒泡排序趟数
//	for (i = 0;i < sz - 1;i++)
//	{
//		int flag = 1;
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if(flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 8,9,7,6,4,2,5,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//冒泡排序-回调函数优化版

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	//冒泡排序趟数
//	for (i = 0;i < sz - 1;i++)
//	{
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}

//void qsort(void* base,//你要排序的数据的起始位置
//			siz_t num,//待排序的数据元素的个数
//			size_t width,//待排序的数据元素的大小（单位是字节）
//			int(* cmp)(const void* e1,const void* e2));//函数指针-比较函数

//int cmp_int(const void* e1, const void* e2)
//{
//	return(*(int*)e1 - *(int*)e2);//升序
//}

//int cmp_int(const void* e1, const void* e2)
//{
//	return(*(int*)e2 - *(int*)e1);//降序
//}
//
////标准情况 e1 > e2 返回大于1的整数
////		   e1 = e2         0
////		   e1 < e2         -1
////默认情况下都是升序
//
//
//int main()
//{
//	//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//bubble_sort(arr, sz);
//
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	void* pv = &a;//无具体类型的指针，可以接受任意类型的地址
//	//void*无具体类型的指针，所以不能解应用和加减整数
//	return 0;
//}

//改造bubble_sort

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0;i < width;i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void*base, int sz,int width,int(*cmp)(const void *e1,const void*e2))
{
	int i = 0;
	int j = 0;
	//冒泡排序趟数
	for (i = 0;i < sz - 1;i++)
	{
		int flag = 1;
		for (j = 0;j < sz - 1 - i;j++)
		{
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
			{
				//交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
				flag = 0;
			}

			/*if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}*/
		}
		if (flag == 1)
		{
			break;
		}
	}
}

struct Stu 
{
	char name[20];
	int age;
};

int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int main()
{
	struct Stu s[]={ {"zhangsan",15},{"lisi",30},{"wangwu",25} };
	int sz = sizeof(s) / sizeof(s[0]);
	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	//bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);


	for (int i = 0;i < 3;i++)
	{
		printf("%s %d\n", s[i].name, s[i].age);
	}
	return 0;
}

