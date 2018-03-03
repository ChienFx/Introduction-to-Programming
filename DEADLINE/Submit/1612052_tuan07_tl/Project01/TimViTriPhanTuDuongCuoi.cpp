#include "ham.h"

//Ham tim vị trí phần tử dương cuối cùng trong mang
//input: mang so nguyen a voi n phantu
//ouput: tra ve vị trí phần tử dương cuối cùng trong mảng
int TimViTriDuongCuoi(int a[], int n)
{
	for (int i = n - 1; i >= 0; i--)
	if (a[i]>0)
		return i;
	return -1;
}