#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	double num;
	printf("请输入一个浮点数：");
	scanf("%lf", &num);
	num = (int)(num * 100 + 0.5) / 100.0;
	printf("%f", num);
	return 0;
}