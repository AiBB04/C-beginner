#include "数值堆栈.h"
//double EvaluateExpression(char expression[]);
//int isAccepted(char);
//char Precede(char, char);
//double Operate(double a, char theta, double b);
//
//int main() {
//	double result;
//	char expression[100] = "9-7*4+(5+1/1-3/1+8-7-5+1)*(5-8/1+6+5)#";
//	result = EvaluateExpression(expression);
//	printf("表达式的计算结果是：%lf", result);
//	return 0;
//}
//
//int flag = 0; //如果在操作数栈有连续数字的输入，则设flag=1标记，用于多位数的计算
//double EvaluateExpression(char expression[]) {
//	SqStack1 OPTR;
//	SqStack2 OPND;
//	char e, theta;
//	double a, b;
//	int count = 0;
//	e = expression[count++];
//	OPTR = InitStack1(); //运算符栈
//	Push1(&OPTR, '#');
//	OPND = InitStack2(); //操作数或运算结果栈
//	while (GetTop1(&OPTR) != '#' || e != '#') {
//		if (e == '\n')
//			break;
//		if (isAccepted(e) == 1) { //如果字符是数字
//			e = e - '0';
//			if (flag == 1) { //是多位数
//				double temp = Pop2(&OPND);
//				temp = temp * 10 + e;
//				Push2(&OPND, temp);
//			}
//			else {
//				Push2(&OPND, e);
//				flag = 1;
//			}
//			e = expression[count++];
//		}
//		else {
//			flag = 0;
//			switch (Precede(GetTop1(&OPTR), e)) {
//			case '<'://栈顶元素优先级低，压入栈
//				Push1(&OPTR, e);
//				e = expression[count++];
//				break;
//			case '>'://新运算符优先级低，将前一个运算符弹出进行计算
//				a = Pop2(&OPND);
//				theta = Pop1(&OPTR);
//				b = Pop2(&OPND); //abc
//				//将计算结果再次压入运算结果栈
//				Push2(&OPND, Operate(a, theta, b));
//				//注意这里不用再重新获取e的值
//				break;
//			case '=':
//				Pop1(&OPTR);//将剩下的一半括号弹出
//				e = expression[count++];
//				break;
//			}
//		}
//	}
//	return GetTop2(&OPND);//返回计算结果
//
//}
//
//int isAccepted(char e) { //如果字符是数字，返回1；字符是运算符，返回2；否则返回0
//	char number[15] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
//	char calculate[15] = { '+', '-', '(', ')', '*', '#', '/' };
//	for (int i = 0; i <= 9; i++) {
//		if (number[i] == e)
//			return 1;
//	}
//	for (int i = 0; i <= 6; i++) {
//		if (calculate[i] == e)
//			return 2;
//	}
//	return 0;
//}
//
//char Precede(char a, char b) {
//	if (b == '+' || b == '-') {
//		if (a == '(' || a == '#')
//			return '<';
//		else
//			return '>';
//	}
//	else if (b == '*' || b == '/') {
//		if (a == '*' || a == '/' || a == ')')
//			return '>';
//		else
//			return '<';
//	}
//	else if (b == '(')
//		return '<';
//	else if (b == ')') {
//		if (a != '(')
//			return '>';
//		else
//			return '=';
//	}
//	else if (b == '#') {
//		if (a != '#')
//			return '>';
//		else
//			return '=';
//	}
//
//}
//
//double Operate(double a, char theta, double b) {
//	if (b == 0) {
//		printf("Conflicts with calculation rules!\n");
//		return;
//	}
//	if (theta == '+')
//		return a + b;
//	else if (theta == '-')
//		return b - a;//因为栈先弹出减数，所以要交换顺序
//	else if (theta == '*')
//		return a * b;
//	else if (theta == '/')
//		return b / a;//因为栈先弹出除数，所以要交换顺序
//}