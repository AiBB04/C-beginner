#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    double score;
    int grade;
    printf("������ѧ���ĵ��Ƴɼ���");
    scanf("%lf", &score);
    if (score < 60) {
        grade = 1;
    }
    else if (score < 80) {
        grade = 2;
    }
    else if (score < 90) {
        grade = 3;
    }
    else {
        grade = 4;
    }
    switch (grade) {
    case 1:
        printf("�ȼ�Ӣ�����ƣ�bad\n");
        break;
    case 2:
        printf("�ȼ�Ӣ�����ƣ�middle\n");
        break;
    case 3:
        printf("�ȼ�Ӣ�����ƣ�good\n");
        break;
    case 4:
        printf("�ȼ�Ӣ�����ƣ�excellent\n");
        break;
    }
    return 0;
}