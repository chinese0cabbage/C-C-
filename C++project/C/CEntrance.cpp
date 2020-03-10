#include<stdio.h>
#include"CSort.h"
int main() {
	int arr[] = { 7,5,2,1,3,6,4 };
	int len = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, len);
	Reversal(arr, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d\t", arr[i]);
	}
}



//测试CLink
//#include"CLink.h"
//void main() {
//	Data* data;
//	CLType* head = NULL;
//	int tag;
//	printf("请选择是否输入，0：否，1：是\n");
//	scanf("%d", &tag);
//	while (tag == 1)
//	{
//		data = GetConsoleData();
//		head = CLAddEnd(head, *data);
//		printf("请选择是否输入，0：否，1：是\n");
//		scanf("%d", &tag);
//	}
//	ShowAllNode(head);
//}