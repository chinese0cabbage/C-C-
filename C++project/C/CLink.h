#pragma once
#include<malloc.h>
#include<stdio.h>
#include<string.h>
#include"CData.h"

///headָ����Զָ��ͷ��㣬��Ҫ��ͷ��������������µı���ָ��head
typedef struct Node{
	Data nodeData;
	struct Node* next;
}CLType;

///���û�������������
Data* GetConsoleData() {
	Data* data;
	data = (Data*)malloc(sizeof(Data));
	printf("����������:\n");
	scanf("%s", data->name);
	printf("�������û�λ�Ʊ�ʶ��:\n");
	scanf("%s", data->key);
	printf("�������û�����:\n");
	scanf("%d", &data->age);
	return data;
}

///��ӽڵ㣬������ʼ���ڵ�
CLType* CLAddEnd(CLType* head, Data nodeData) {
	CLType* node, * htemp;
	node = (CLType*)malloc(sizeof(CLType));  //�����ڴ�
	if (!node) {
		printf("�ڴ����ʧ�ܣ�\n");
		return NULL;
	}
	else
	{
		node->nodeData = nodeData;
		node->next = NULL;
		if (head==NULL)
		{
			head = node;
			return head;
		}
		htemp = head;    //ͷ��㲻�������ڷ��أ����¸�ֵһ����̬ͷ���
		while (htemp->next!=NULL)
		{
			htemp = htemp->next;
		}
		htemp->next = node;
		return head;
	}
}

///������Ŀ�ʼ������ڵ�
CLType* CLAddFirst(CLType* head, Data nodeData) {
	CLType* node;
	node = (CLType*)malloc(sizeof(CLType));
	if (!node)
	{
		printf("�����ڴ�ʧ�ܣ�\n");
		return NULL;
	}
	else
	{
		node->nodeData = nodeData;
		node->next = head;
		head = node;
		return head;
	}
}

///����key����CLType
CLType* CLFindNode(CLType* head, char* key) {
	CLType* htemp;
	htemp = head;
	while (htemp) {
		if (strcmp(htemp->nodeData.key, key) == 0)
		{
			return htemp;
		}
		htemp = htemp->next;
	}
	return NULL;
}

///����ڵ㵽ָ���ڵ�ĺ���
CLType* CLInsertNode(CLType* head, char* findkey, Data nodeData) {
	CLType* node, * nodeTemp;
	node = (CLType*)malloc(sizeof(CLType));
	if (!node)
	{
		printf("�����ڴ�ʧ�ܣ�\n");
	}
	node->nodeData = nodeData;
	nodeTemp = CLFindNode(head, findkey);
	if (nodeTemp)
	{
		node->next = nodeTemp->next;
		nodeTemp->next = node;
	}
	else
	{
		printf("δ���ҵ���ȷ�Ĳ���λ��!\n");
		free(node);
	}
	return head;
}

///ɾ���ڵ�
int CLDelNode(CLType* head, char* key) {
	CLType* node, * htemp;
	htemp = head;
	node = head;
	while (htemp) {
		if (strcmp(htemp->nodeData.key,key)==0)
		{
			node->next = htemp->next;
			free(htemp);
			return 1;
		}
		else
		{
			node = htemp;
			htemp = htemp->next;
		}
	}
	return 0;
}

///����������
int CLLength(CLType* head) {
	CLType* htemp;
	int length = 0;
	htemp = head;
	while (htemp)
	{
		length++;
		htemp = htemp->next;
	}
	return length;
}

///��������ʾ��������ڵ�
void ShowAllNode(CLType* head) {
	CLType* htemp;
	Data nodeData;
	htemp = head;
	printf("��ǰ������%d���ڵ㣬���������������£�\n", CLLength(head));
	while (htemp) {
		nodeData = htemp->nodeData;
		printf("�ڵ㣨%s,%s,%d��\n", nodeData.key, nodeData.name, nodeData.age);
		htemp = htemp->next;
	}
}