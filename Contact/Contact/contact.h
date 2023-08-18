#pragma once
#include<stdio.h>

//类型的声明
//人的信息
typedef struct PeoInfo
{
	char name[20];
	int age;
	char sex[10];
	char tele[12];
	char addr[30];
}PeoInfo;

//通讯录

typedef struct Contact
{
	PeoInfo data[100];//存放人的信息
	int count;//记录当前通讯录中实际的人数
}Contact;