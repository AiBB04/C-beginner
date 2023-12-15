#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a[] = { 1,2,3 };
//	int* p, i;
//	p = a;
//	for (i = 0;i < 3;i++)
//		printf("%d,%d,%d,%d\n", a[i], p[i], *(p + i), *(a + i));
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	void swap(int* pt1, int* pt2);
//	int a, b, c;
//	int* p1, * p2, * p3;
//	printf("请输入三个数a,b,c:");
//	scanf("%d,%d,%d", &a, &b, &c);
//	p1 = &a;p2 = &b;p3 = &c;
//	if (a > b) swap(p1, p2);
//	if (a > c) swap(p1, p3);
//	if (b > c) swap(p2, p3);
//	printf("排序后的三个数为：%d,%d,%d\n", a, b, c);
//	return 0;
//}
//void swap(int* pt1, int* pt2)
//{
//	int p;
//	p = *pt1;
//	*pt1 = *pt2;
//	*pt2 = p;
//}


//#include <stdio.h>
//int main()
//{
//	void move(int* pointer);
//	int a[3][3], * p, i, j;
//	printf("请输入数组矩阵元素：\n");
//	for (i = 0;i < 3;i++)
//		for (j = 0;j < 3;j++)
//			scanf("%d", (*a+3*i+j));
//	p = &a[0];
//	move(p);
//	printf("转置后的矩阵为：\n");
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 3;j++)
//			printf("%d ", *(*a+3*i+j));
//		printf("\n");
//	}
//	return 0;
//}
//void move(int* pt)
//{
//	int i, j, t;
//	for (i = 0;i < 3;i++)
//		for (j = i;j < 3;j++)
//		{
//			t = *(pt + 3 * i + j);
//			*(pt + 3 * i + j) = *(pt + 3 * j + i);
//			*(pt + 3 * j + i) = t;
//		}
//}

//#include<stdio.h>
//
//int main() {
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	printf("%x %x %X", arr[1], arr[2], arr[3]);
//	return 0;
//}

//#include<stdio.h>
//
//int str_length1(char arr[]) 
//{
//	int count = 0;
//	int i = 0;
//	while (arr[i] != '\0') {
//		count++;
//		i++;
//	}
//	return count;
//}
//
//int str_length2(char* arr) 
//{
//	int count = 0;
//	int i = 0;
//	while (arr[i] != '\0') 
//	{
//		count++;
//		i++;
//	}
//	return count;
//}
//
//int main() {
//	char arr[] = "hello world";
//	printf("%d\n", str_length1(arr));
//	printf("%d\n", str_length2(arr));
//	return 0;
//}
//

#include<stdio.h>

#define DEFAULTSIZE 5

void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}

void change_arr(int arr[][DEFAULTSIZE]) {
	int maxi, maxj, mini, minj;
	maxi = maxj = mini = minj = 0;
	for (int i = 0;i < DEFAULTSIZE;i++) {
		for (int j = 0;j < DEFAULTSIZE;j++) {
			if (arr[i][j] < arr[mini][minj]) {
				mini = i;
				minj = j;
			}
			if (arr[i][j] > arr[maxi][maxj]) {
				maxi = i;
				maxj = j;
			}
		}
	}
	swap(&arr[mini][minj], &arr[0][0]);
	swap(&arr[maxi][maxj], &arr[2][2]);
}
int main() {
	int arr[DEFAULTSIZE][DEFAULTSIZE] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25 };
	change_arr(arr);
	for (int i = 0;i < DEFAULTSIZE;i++) {
		for (int j = 0;j < DEFAULTSIZE;j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}