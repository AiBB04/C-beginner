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

//��
//#define DOUBLE(X) (X)+(X)
//
//int main()
//{
//	int r = DOUBLE(3);
//	printf("%d\n", r);
//
//	return 0;
//}

//���п��Գ���define����ı����������ܵݹ�

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

//����ȫ����д---MAX
//�������ֲ�ȫ��д---Max

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
//		printf("%d\n", arr[i]);//Ϊ�˹۲������Ƿ�ֵ�ɹ�
//#endif // __DEBUG__
//
//#if 0	//�˴������ǳ������ʽ
//		printf("%d\n", arr[i]); //Ϊ�˹۲������Ƿ�ֵ�ɹ�
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

//�ж��Ƿ񱻶���


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

////Ƕ�ױ���
//#if defined(OS_UNIX)
//#ifdef option1
//printf("hello world");
//#endif
//#ifdef option2
//printf("hello world");
//#endif // option2
//#endif

//ͷ�ļ���α������������
//����д�����ö��Ƿ�ֹͷ�ļ�������ظ�����

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

//<>��ֱ��ȥ��Ŀ¼��ȥ���ҡ�
//""����ȥ����·����ȥ���ң���ȥ��Ŀ¼��ȥ���ҡ��Ҳ����ᵯ���������

//#include"stdio.h"
