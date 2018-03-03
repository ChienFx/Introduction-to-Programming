#include "ham.h"

//Ham tim vị trí phần tử nhỏ nhất trong mang
//input: mang so nguyen a voi n phantu
//ouput: tra ve vị trí của phần tử nhỏ nhất trong mảng
int TimViTriGiaTriNhoNhat(int a[], int n)
{
	int tmp = TimMinMang(a, n);
	for (int i = 0; i < n; i++)
	if (a[i] == tmp)
		return i;
	return -1;
}