#pragma once
#include<malloc.h>
#include<stdio.h>
#include<string.h>
#include"CData.h"

///head指针永远指向头结点，需要从头往后遍历，声明新的变量指向head
typedef struct Node{
	Data nodeData;
	struct Node* next;
}CLType;

///从用户接收数据输入
Data* GetConsoleData() {
	Data* data;
	data = (Data*)malloc(sizeof(Data));
	printf("请输入名称:\n");
	scanf("%s", data->name);
	printf("请输入用户位移标识码:\n");
	scanf("%s", data->key);
	printf("请输入用户年龄:\n");
	scanf("%d", &data->age);
	return data;
}

///添加节点，包含初始化节点
CLType* CLAddEnd(CLType* head, Data nodeData) {
	CLType* node, * htemp;
	node = (CLType*)malloc(sizeof(CLType));  //分配内存
	if (!node) {
		printf("内存分配失败！\n");
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
		htemp = head;    //头结点不动，用于返回，重新赋值一个动态头结点
		while (htemp->next!=NULL)
		{
			htemp = htemp->next;
		}
		htemp->next = node;
		return head;
	}
}

///在链表的开始处插入节点
CLType* CLAddFirst(CLType* head, Data nodeData) {
	CLType* node;
	node = (CLType*)malloc(sizeof(CLType));
	if (!node)
	{
		printf("申请内存失败！\n");
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

///根据key查找CLType
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

///插入节点到指定节点的后面
CLType* CLInsertNode(CLType* head, char* findkey, Data nodeData) {
	CLType* node, * nodeTemp;
	node = (CLType*)malloc(sizeof(CLType));
	if (!node)
	{
		printf("申请内存失败！\n");
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
		printf("未能找到正确的插入位置!\n");
		free(node);
	}
	return head;
}

///删除节点
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

///计算链表长度
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

///遍历并显示所有链表节点
void ShowAllNode(CLType* head) {
	CLType* htemp;
	Data nodeData;
	htemp = head;
	printf("当前链表共有%d个节点，链表所有数据如下：\n", CLLength(head));
	while (htemp) {
		nodeData = htemp->nodeData;
		printf("节点（%s,%s,%d）\n", nodeData.key, nodeData.name, nodeData.age);
		htemp = htemp->next;
	}
}