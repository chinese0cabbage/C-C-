#pragma once
#include"CPointer.h"


///冒泡排序(从小到大)
void BubbleSort(int arr[], int len) {
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = len - 1; j > i; j--)
		{
			if (arr[j-1] > arr[j])
			{
				InterChangeByPointer(&(arr[j - 1]), &(arr[j]));
			}
		}
	}
}

///插入排序(从小到大)
void InsertionSort(int arr[], int len) {
	for (int i = 1; i < len; i++)
	{
		for (int j = i; j > 0; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				InterChangeByPointer(&(arr[j]), &(arr[j - 1]));
			}
		}
	}
}

///Shell排序(从小到大)
void ShellSort(int arr[], int len) {

}

///将数组反转顺序
void Reversal(int arr[], int len) {
	int i = 0, j = len - 1;
	while (j > i)
	{
		InterChangeByPointer(&(arr[i]), &(arr[j]));
		i++;
		j = len - i - 1;
	}
}