#pragma once

///通过更改地址对应的数据以达到更改传入数据的目的
void InterChangeByPointer(int* x, int* y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}