#include "ham.h"

int tinhTongCacPhanTuCucTri(int a[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	if ((a[i]>a[i - 1] && a[i]>a[i + 1]) || (a[i]<a[i - 1] && a[i]<a[i + 1]))
		sum = sum + a[i];
	return sum;
}