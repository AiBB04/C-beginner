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
//	//����ָ��
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
//	//��0ǿ������ת���ɺ���ָ�벢ͬʱ���á�
//	//�ǿ�*���п���
//	//���ԡ�c�����ȱ�ݡ�
//	
//	return 0;
//}

//typedef void(*pf_t)(int);//��void(*)(int)������������Ϊpf_t
//
//int main()
//{
//	void(*signal(int, void(*)(int)))(int);
//
//	//signal(int, void(*)(int))����Ǻ���������
//	//������signal�����ĵ�һ������������int���ڶ������������Ǻ���ָ�룬
//	//�ú���ָ��ָ��ĺ���������int������������void��signal�����ķ�������Ҳ��һ������ָ��
//	//�ú���ָ��ָ��ĺ���������int������������void��
//
//	pf_t signal(int, pf_t);
//
//	return 0;
//}

//����ָ�����;

//дһ��������
//ʵ�ּӷ������˷�����

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
//		printf("��ѡ��-->");
//		scanf("%d", &input);
//		if (input)
//		{
//			printf("����������������-->");
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
//			printf("�˳�������\n");
//			break;
//
//		default:
//			printf("�������\n");
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
//	printf("����������������-->");
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
//		printf("��ѡ��-->");
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
//			printf("�˳�������\n");
//			break;
//
//		default:
//			printf("�������\n");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}

//����ָ������

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
////	int(*pf)(int,int) = Add;//pf�Ǻ���ָ������
////	int(*arr[4])(int, int) = { Add,Sub,Mul,Div };//arr���Ǻ���ָ������
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
//		printf("��ѡ��-->");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("�˳�������\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("ѡ�����\n");
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
//			printf("�˳�������\n");
//			break;
//
//		default:
//			printf("�������\n");
//			break;
//		}*/
//
//	} while (input);
//
//	return 0;
//}

//ָ����ָ�������ָ��

int main()
{
	int(*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
	int(*(*ppfArr)[5])(int, int)=&pfArr;

	printf("%p\n", ppfArr);
	return 0;
}