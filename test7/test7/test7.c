#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define STUDENTS 5
#define COURSES 3

void calculate_student_average(int grades[STUDENTS][COURSES]) {
    for (int i = 0; i < STUDENTS; i++) {
        int sum = 0;
        for (int j = 0; j < COURSES; j++) {
            sum += grades[i][j];
        }
        printf("��%d��ѧ����ƽ������%.2f\n", i + 1, (float)sum / COURSES);
    }
}

void calculate_course_average(int grades[STUDENTS][COURSES]) {
    for (int i = 0; i < COURSES; i++) {
        int sum = 0;
        for (int j = 0; j < STUDENTS; j++) {
            sum += grades[j][i];
        }
        printf("��%d�ſε�ƽ������%.2f\n", i + 1, (float)sum / STUDENTS);
    }
}

void find_highest_grade(int grades[STUDENTS][COURSES]) {
    int max_grade = 0;
    int student, course;
    for (int i = 0; i < STUDENTS; i++) {
        for (int j = 0; j < COURSES; j++) {
            if (grades[i][j] > max_grade) {
                max_grade = grades[i][j];
                student = i;
                course = j;
            }
        }
    }
    printf("��߷���%d, �ǵ�%d��ѧ���ڵ�%d����ȡ�õĺóɼ�\n", max_grade, student + 1, course + 1);
}

int main() {
    int grades[STUDENTS][COURSES] = {
        {85, 90, 78},
        {93, 81, 88},
        {72, 76, 95},
        {88, 82, 92},
        {79, 75, 85}
    };

    calculate_student_average(grades);
    calculate_course_average(grades);
    find_highest_grade(grades);

    return 0;
}
