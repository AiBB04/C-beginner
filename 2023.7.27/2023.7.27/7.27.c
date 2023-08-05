#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 7;
//	int b = a << 1;
//
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	
//	return 0;
//}

//& 按位与 同时为1才为1
//| 按位或 同时为0才为0
//^ 按位异或 相同时为0 不同时为1

//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a & b;
//
//	printf("c=%d", c);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	//这种方法有溢出的风险
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//
//	//方法2
//
//	a = a ^ b;//a = 3 ^ 5
//	b = a ^ b;//b = 3 ^ 5 ^ 5 -> 3 = a
//	a = a ^ b;//a = 3 ^ 5 ^ 3 -> 5 = b
//	//异或支持交换律
//	
//	return 0;
//}

//int main()
//{
//	int a = 13;//00000000000000000000000000001101
//	a |= (1 << 1);//00000000000000000000000000001111
//	printf("%d", a);
//	a |= (1 << 4);
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	char a = 1;
//	char b = 2;
//	char c = a + b;
//	printf("%d\n", c);
//	return 0;
//}

//int fib(int n)
//{
//	if (n == 1)
//		return 1;
//	else if (n == 2)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//int main()
//{
//	printf("%d\n", fib(10));
//	return 0;
//}

int is_lily_number(int i)
{
	if (i == (i / 10000) * (i % 10000) + 
		(i / 1000) * (i % 1000) + 
		(i / 100) * (i % 100) + 
		(i / 10) * (i % 10))
		return 1;
	else
		return 0;
}

int main()
{
	int i = 0;
	for (i = 10000;i < 100000;i++)
	{
		if (is_lily_number(i))
		{
			printf("%d\n", i);
		}
	}
	return 0;
}