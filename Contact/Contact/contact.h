#pragma once
#include<stdio.h>

//���͵�����
//�˵���Ϣ
typedef struct PeoInfo
{
	char name[20];
	int age;
	char sex[10];
	char tele[12];
	char addr[30];
}PeoInfo;

//ͨѶ¼

typedef struct Contact
{
	PeoInfo data[100];//����˵���Ϣ
	int count;//��¼��ǰͨѶ¼��ʵ�ʵ�����
}Contact;