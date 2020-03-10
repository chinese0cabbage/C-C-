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

///��ͨShell����(��С����)
void ShellSort_Normal(int arr[], int len) {
	for (int i = len / 2; i >= 1; i /= 2)
	{//���㲽��
		for (int j = i; j < len; j++)
		{//ѭ������ÿһ������
			for (int k = j - i; k >= 0; k -= i)
			{//�ӵ�һ�����鿪ʼ�����ζԺ���ķ���ͬһ��λ�õ������в�������
				if (arr[k] > arr[k + i])
				{
					InterChangeByPointer(&(arr[k]), &(arr[k + i]));
				}
			}
		}
	}
}

///Hibbard������Shell����(��С����),����2^k-1�����Ӷ�O��n^(3/2)��
void ShellSort_Hibbard(int arr[], int len) {

}

///Sedgewick������Shell����(��С����),����9*4^k-9*2^k+1����4^k-3*2^k+1���Ӷ�O��n^(4/3)��
void ShellSort_Sedgewick(int arr[], int len) {

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