#pragma once
#include"CPointer.h"

typedef struct Node {
	int val;
	LinkTreeNode* leftChild, * rightChild;
}LinkTreeNode;

void StructMaxHeap(int arr[], int len) {
	for (int i = 0; i < len; i++)
	{
		if (arr[i] < arr[2 * i])
		{
			InterChangeByPointer(&(arr[i]), &(arr[2 * i]));
		}
		if (arr[i] < arr[2 * i + 1])
		{
			InterChangeByPointer(&(arr[i]), &(arr[2 * i + 1]));
		}
	}
}