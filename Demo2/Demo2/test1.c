#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int sum = 0;
	int count = 0;
	int arr[5];
	for (int i = 1;i <= 100;i++) {
		if (i % 3 == 0 && i % 5 != 0) {
			arr[count] = i;
			count++;
		}
		if (count == 5) {
			for (int j = 0;j < count;j++) {
				printf("%d ", arr[j]);
			}
			count = 0;
		}
	}
	if (count != 0) {
		for (int i = 0;i < count;i++) {
			printf("%d ", arr[i]);
		}
	}
	return 0;
}
