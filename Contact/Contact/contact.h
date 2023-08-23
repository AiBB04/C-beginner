#pragma once
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#include<errno.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define DEFAULT_SZ 3
#define INC_SZ 2

//���͵�����
//�˵���Ϣ
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//ͨѶ¼
// 1.��̬�汾
//typedef struct Contact
//{
//	PeoInfo data[MAX];//����˵���Ϣ
//	int count;//��¼��ǰͨѶ¼��ʵ�ʵ�����
//}Contact;

typedef struct Contact
{
	PeoInfo* data;//����˵���Ϣ
	int count;//��¼��ǰͨѶ¼��ʵ�ʵ�����
	//��ǰͨѶ¼����
	int capacity;
}Contact;


int InitContact(Contact* pc);
void AddContact(Contact* pc);
void ShowContact(const Contact* pc);
void DelContact(Contact* pc);
void SearchContact(Contact* pc);
void ModifyContact(Contact* pc);
void SortContact(Contact* pc);
void DestroyContact(Contact* pc);
void SaveContact(const Contact* pc);
void LoadContact(Contact* pc);




