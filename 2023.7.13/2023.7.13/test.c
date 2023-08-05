#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <cstdlib>

//int main()
//{
//	int a = 1;
//	if (a == 1)
//		printf("hh");
//	else
//		printf("hha");
//	return 0;
//}
//
//c语言是结构化的程序设计语言，一共有三种结构，顺序结构选择结构循环结构。

//int main()
//{
//	//int age = 10;
//	//scanf("%d", &age);
//
//	//if (age < 18)
//	//	printf("青少年\n");
//	//else if (age >= 18 && age < 28)
//	//	printf("青年\n");
//	//else if (age >= 28 && age < 40)
//	//	printf("中年\n");
//	//else if (age >= 40 && age < 60)
//	//	printf("壮年\n");
//	//else if (age >= 60 && age <= 100)
//	//	printf("老年\n");
//	//else
//	//	printf("老寿星\n");
//
//	//else和最近的if匹配
//
//
//	int num = 5;
//	if (5 == num)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	
//	while (num < 100)
//	{
//		num++;
//		if (1 == num % 2)
//			printf("%d ",num);
//	}
//	return 0;
//}
//
//int main()
//{
	//int day = 0;
	//scanf("%d", &day);
	//if (1 == day)
	//	printf("星期一\n");
	//else if (2 == day)
	//	printf("星期二\n");
	//else if (3 == day)
	//	printf("星期三\n");
	////如此重复输入代码过于繁琐

	//int day = 0;
	//scanf("%d", &day);
	//switch (day)//括号内放整型表达式
	//{
	//case 1://放整型常量表达式
	//	printf("星期一\n");
	//	break;
	//case 2:
	//	printf("星期二\n");
	//	break;
	//case 3:
	//	printf("星期三\n");
	//	break;
	//case 4:
	//	printf("星期四\n");
	//	break;
	//case 5:
	//	printf("星期五\n");
	//	break;
	//case 6:
	//	printf("星期六\n");
	//	break;
	//case 7:
	//	printf("星期天\n");
	//	break;
	//}
	/*switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday\n");
		break;
	case 6:
	case 7:
		printf("weekend\n");
		break;
	default:
		printf("输入错误\n");
		break;
	}*/

	/*int i = 1;
	while (i <= 10)
	{
		if (5 == i)
		{
			i++;
			continue;
		}

		printf("%d ",i);
		i++;
	}*/
	//break是永久的终止循环，continue是跳过本次循环。

	/*int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}*/

	//printf("%c\n", 'a');
	//printf("%c\n", 97);

	//int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
	//int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);

	//while (i < sz)
	//{
	//	printf("%c", arr[i]);
	//	i++;
	//}

	//int year = 0;
	//int month = 0;
	//int date = 0;
	//scanf("%4d%2d%2d", &year, &month, &date);

	//printf("year=%d\n", year);
	//printf("month=%02d\n", month);
	//printf("date=%02d\n", date);

	//int num = printf("hello world!");
	//printf("\n%d", num);

//
//	return 0;
//}

//
//int main()
//{
//	//int i = 0;
//
//	///*while (i <= 20)
//	//{
//	//	printf("%d\n", i);
//
//	//	i++;
//	//}*/
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//
//	////for循环的判断部分省略意味着判断会恒成立，无限循环。
//	//
//	//for (i = 0;i < 10;i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//
//	//printf("%d", i);
//
//	/*for (int i = 0;i < 10;i++)
//	{
//		printf("hehe\n");
//	}*/
//
//	for (int x = 0, y = 0; x < 2 && y < 5; x++, y++)
//	{
//		printf("hehe\n");
//	}
//
//
//	return 0;
//}



//int main()
//{
//	int i = 1;
//
//	do
//	{
//		printf("%d ", i);
//		i++;
//	}
//
//	while (i <= 10);
//
//	return 0;
//}



//int main()
//{
//	int i = 1;
//	int n = 1;
//	int num = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1;i <= n;i++)
//	{	
//		num *= i;
//		sum += num;
//	}
//	printf("%d\n", num);
//	printf("%d\n", sum);
//
//	return 0;
//}


//int main()
//{	
//	int k = 0;
//	scanf("%d", &k);
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int left = 0;
//	int right = sz - 1;
//	
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//	return 0;
//}

//编写代码，演示多个字符从两端移动。向中间汇聚。
//#include<windows.h>
//#include<stdlib.h>
//
//int main()
//{
//	char arr1[] = "welcome to ECUT!!!!";
//	char arr2[] = "###################";
//
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		
//		//睡眠1000毫秒
//		Sleep(1000);
//		//清理屏幕
//		system("cls");//system是一个库函数,可以执行系统命令.
//
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//#include<string.h>
//
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 1;i <= 3;i++)
//	{
//		scanf("%s", &password);
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("登录失败\n");
//		}
//	}
//	if(i==3)
//	{
//		printf("错误密码输入三次，本次程序运行结束。\n");
//	}
//
//	return 0;
//}

//电脑产生一个随机数（1~100）
//猜数字；反馈猜大了猜小了
