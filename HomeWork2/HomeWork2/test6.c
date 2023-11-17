#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() 
{
	int a = 1;
	int b = 2;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a = %d b = %d", a, b);
	return 0;
}