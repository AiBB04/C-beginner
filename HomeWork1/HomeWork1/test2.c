#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    double score;
    int grade;
    printf("请输入学生的单科成绩：");
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
        printf("等级英文名称：bad\n");
        break;
    case 2:
        printf("等级英文名称：middle\n");
        break;
    case 3:
        printf("等级英文名称：good\n");
        break;
    case 4:
        printf("等级英文名称：excellent\n");
        break;
    }
    return 0;
}