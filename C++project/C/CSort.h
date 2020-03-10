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

///普通Shell排序(从小到大)
void ShellSort_Normal(int arr[], int len) {
	for (int i = len / 2; i >= 1; i /= 2)
	{//计算步长
		for (int j = i; j < len; j++)
		{//循环排序每一个分组
			for (int k = j - i; k >= 0; k -= i)
			{//从第一个分组开始，依次对后面的分组同一个位置的数进行插入排序
				if (arr[k] > arr[k + i])
				{
					InterChangeByPointer(&(arr[k]), &(arr[k + i]));
				}
			}
		}
	}
}

///Hibbard增量的Shell排序(从小到大),增量2^k-1，复杂度O（n^(3/2)）
void ShellSort_Hibbard(int arr[], int len) {

}

///Sedgewick增量的Shell排序(从小到大),增量9*4^k-9*2^k+1或者4^k-3*2^k+1复杂度O（n^(4/3)）
void ShellSort_Sedgewick(int arr[], int len) {

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