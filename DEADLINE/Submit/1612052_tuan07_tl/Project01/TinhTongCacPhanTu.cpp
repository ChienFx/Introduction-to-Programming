#include "ham.h"
/* Tính tổng giá trị của mảng nguyên.*/
int TinhTongGiaTri(int a[], int n)
{
	int S = 0;
	for (int i = 0; i < n; i++)
		S += a[i];
	return S;
}