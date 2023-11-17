#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int main() 
{
	double r = 0.08f;
	double n = 10;
	double p = pow(1 + r, n);
	printf("假设我国国民生产总值的年增长率 8%，10年后我国国民生产总值是现在的%lf倍。\n",p);

	return 0;
}