#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int main() 
{
	double r = 0.08f;
	double n = 10;
	double p = pow(1 + r, n);
	printf("�����ҹ�����������ֵ���������� 8%��10����ҹ�����������ֵ�����ڵ�%lf����\n",p);

	return 0;
}