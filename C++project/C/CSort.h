#pragma once
#include"CPointer.h"


///ð������(��С����)
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

///��������(��С����)
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

///Shell����(��С����)
void ShellSort(int arr[], int len) {

}

///�����鷴ת˳��
void Reversal(int arr[], int len) {
	int i = 0, j = len - 1;
	while (j > i)
	{
		InterChangeByPointer(&(arr[i]), &(arr[j]));
		i++;
		j = len - i - 1;
	}
}