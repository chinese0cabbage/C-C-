#pragma once

///ͨ�����ĵ�ַ��Ӧ�������Դﵽ���Ĵ������ݵ�Ŀ��
void InterChangeByPointer(int* x, int* y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}