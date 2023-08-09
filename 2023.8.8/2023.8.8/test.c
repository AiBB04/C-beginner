#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int test(const char* str)
//{
//	printf("test()\n");
//	return 0;
//}
//
//int main()
//{
//	//函数指针
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	int(*pf)(const char*) = test;
//	(*pf)("abc");
//	test("abc");
//	pf("abc");
//	
//	return 0;
//}

//int main()
//{
//	(*(void(*)())0)();
//	//将0强制类型转化成函数指针并同时调用。
//	//那颗*可有可无
//	//出自《c陷阱和缺陷》
//	
//	return 0;
//}

//typedef void(*pf_t)(int);//把void(*)(int)类型重新命名为pf_t
//
//int main()
//{
//	void(*signal(int, void(*)(int)))(int);
//
//	//signal(int, void(*)(int))这段是函数声明，
//	//声明的signal函数的第一个参数类型是int，第二参数的类型是函数指针，
//	//该函数指针指向的函数参数是int，返回类型是void，signal函数的返回类型也是一个函数指针
//	//该函数指针指向的函数参数是int，返回类型是void。
//
//	pf_t signal(int, pf_t);
//
//	return 0;
//}

//函数指针的用途

//写一个计算器
//实现加法减法乘法除法

//void menu()
//{
//	printf("*******************\n");
//	printf("*** 1.add 2.sub ***\n");
//	printf("*** 3.mul 4.div ***\n");
//	printf("*** 0.exit      ***\n");
//	printf("*******************\n");
//}

//int Add(int x, int y)
//{
//	return x + y;
//}

//int Sub(int x, int y)
//{
//	return x - y;
//}

//int Mul(int x, int y)
//{
//	return x * y;
//}

//int Div(int x, int y)
//{
//	return x / y;
//}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do 
//	{
//		menu();
//		printf("请选择-->");
//		scanf("%d", &input);
//		if (input)
//		{
//			printf("请输入两个操作数-->");
//			scanf("%d%d", &x, &y);
//		}
//
//		switch (input)
//		{
//		case 1:
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			ret = Div(x, y);
//
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//
//		default:
//			printf("输入错误\n");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}

//void calc(int(*pf)(int ,int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入两个操作数-->");
//	scanf("%d%d", &x, &y);
//	//ret = (*pf)(x, y);
//	ret = pf(x, y);
//
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择-->");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//
//		default:
//			printf("输入错误\n");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}

//函数指针数组

//void menu()
//{
//	printf("*******************\n");
//	printf("*** 1.add 2.sub ***\n");
//	printf("*** 3.mul 4.div ***\n");
//	printf("*** 0.exit      ***\n");
//	printf("*******************\n");
//}
//
int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}
//
////int main()
////{
////	int(*pf)(int,int) = Add;//pf是函数指针数组
////	int(*arr[4])(int, int) = { Add,Sub,Mul,Div };//arr就是函数指针数组
////	int i = 0;
////	for (i = 0;i < 4;i++)
////	{
////		printf("%d\n",(*arr[i])(8,4));
////	}
////
////	return 0;
////}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	int input = 0;
//
//	int(*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("请选择-->");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//
//		/*switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//
//		default:
//			printf("输入错误\n");
//			break;
//		}*/
//
//	} while (input);
//
//	return 0;
//}

//指向函数指针数组的指针

int main()
{
	int(*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
	int(*(*ppfArr)[5])(int, int)=&pfArr;

	printf("%p\n", ppfArr);
	return 0;
}