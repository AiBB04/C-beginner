#include "��ֵ��ջ.h"
//double EvaluateExpression(char expression[]);
//int isAccepted(char);
//char Precede(char, char);
//double Operate(double a, char theta, double b);
//
//int main() {
//	double result;
//	char expression[100] = "9-7*4+(5+1/1-3/1+8-7-5+1)*(5-8/1+6+5)#";
//	result = EvaluateExpression(expression);
//	printf("���ʽ�ļ������ǣ�%lf", result);
//	return 0;
//}
//
//int flag = 0; //����ڲ�����ջ���������ֵ����룬����flag=1��ǣ����ڶ�λ���ļ���
//double EvaluateExpression(char expression[]) {
//	SqStack1 OPTR;
//	SqStack2 OPND;
//	char e, theta;
//	double a, b;
//	int count = 0;
//	e = expression[count++];
//	OPTR = InitStack1(); //�����ջ
//	Push1(&OPTR, '#');
//	OPND = InitStack2(); //��������������ջ
//	while (GetTop1(&OPTR) != '#' || e != '#') {
//		if (e == '\n')
//			break;
//		if (isAccepted(e) == 1) { //����ַ�������
//			e = e - '0';
//			if (flag == 1) { //�Ƕ�λ��
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
//			case '<'://ջ��Ԫ�����ȼ��ͣ�ѹ��ջ
//				Push1(&OPTR, e);
//				e = expression[count++];
//				break;
//			case '>'://����������ȼ��ͣ���ǰһ��������������м���
//				a = Pop2(&OPND);
//				theta = Pop1(&OPTR);
//				b = Pop2(&OPND); //abc
//				//���������ٴ�ѹ��������ջ
//				Push2(&OPND, Operate(a, theta, b));
//				//ע�����ﲻ�������»�ȡe��ֵ
//				break;
//			case '=':
//				Pop1(&OPTR);//��ʣ�µ�һ�����ŵ���
//				e = expression[count++];
//				break;
//			}
//		}
//	}
//	return GetTop2(&OPND);//���ؼ�����
//
//}
//
//int isAccepted(char e) { //����ַ������֣�����1���ַ��������������2�����򷵻�0
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
//		return b - a;//��Ϊջ�ȵ�������������Ҫ����˳��
//	else if (theta == '*')
//		return a * b;
//	else if (theta == '/')
//		return b / a;//��Ϊջ�ȵ�������������Ҫ����˳��
//}