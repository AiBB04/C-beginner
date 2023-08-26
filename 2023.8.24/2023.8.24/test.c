#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("file:%s line=%d i=%d\n", __FILE__.__LINE__, i);
//	}
//	return 0;
//}

//宏
//#define DOUBLE(X) (X)+(X)
//
//int main()
//{
//	int r = DOUBLE(3);
//	printf("%d\n", r);
//
//	return 0;
//}

//宏中可以出现define定义的变量，但不能递归

//#define PRINT(N) printf("the value of "#N" is %d\n",N)
//
//int main()
//{
//	int a = 10;
//	printf("the value of a is %d\n", a);
//	PRINT(a);
//	int b = 20;
//	PRINT(b);
//
//	return 0;
//}

//#define PRINT(N,FORMAT) printf("the value of "#N" is "FORMAT"\n",N)
//
//int main()
//{
//	float f = 10.0f;
//	int a = 10;
//	PRINT(f, "%lf");
//	PRINT(a, "%d");
//	return 0;
//}

//#define CAT(Class,Num) Class##Num
//
//int main()
//{
//	int class106 = 100;
//	printf("%d\n", CAT(class,106));
//
//	return 0;
//}

//宏名全部大写---MAX
//函数名字不全大写---Max

//#define M 100
//
//int main()
//{
//	printf("%d\n", M);
//#undef M
//	printf("%d\n", M);
//
//	return 0;
//}

//#define __DEBUG__

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0;i < 10;i++)
//	{
//		arr[i] = i;
//#ifdef __DEBUG__
//		printf("%d\n", arr[i]);//为了观察数组是否赋值成功
//#endif // __DEBUG__
//
//#if 0	//此处必须是常量表达式
//		printf("%d\n", arr[i]); //为了观察数组是否赋值成功
//#endif
//	}
//
//	return 0;
//}

//#define A 1
//
//int main()
//{
//
//#if A<10
//	printf("hello");
//#elif A>10
//	printf("world");
//#else
//	printf("hehe");
//#endif
//
//	return 0;
//}

//判断是否被定义


//int main()
//{
//#if defined(MAX)
//	printf("MAX\n");
//#endif
//
//#if !defined(MAX)
//	printf("MAX\n");
//#endif
//
//#ifdef MAX
//	printf("MAX\n");
//#endif
//
//#ifndef MAX
//	printf("MAX\n");
//#endif
//	return 0;
//}

////嵌套编译
//#if defined(OS_UNIX)
//#ifdef option1
//printf("hello world");
//#endif
//#ifdef option2
//printf("hello world");
//#endif // option2
//#endif

//头文件多次被包含情况处理
//以下写法作用都是防止头文件被多次重复包含

////1.
//#pragma once
//int Add(int x, int y);
////2.
//#ifndef __TEST_H__
//#define __test_H__
//int Add(int x, int y);
//#endif // !

//#include<stdio.h>
//#include""

//<>是直接去库目录下去查找。
//""是先去本地路径下去查找，再去库目录下去查找。找不到会弹出编译错误。

//#include"stdio.h"
