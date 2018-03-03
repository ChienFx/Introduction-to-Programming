#include "ham.h"

//Ham tim gia tri chan dau tien trong mang
//input: mang so nguyen a voi n phantu
//ouput: tra ve gia tri phan tu chan dau tien trong mang
int TimSoChanDauTien(int a[], int n)
{
	for (int i = 0; i < n; i++)
	if (a[i] % 2 == 0)
		return a[i];
	return -1;
}