#include "ham.h"
//Ham tim gia tri lon thu nhi trong mang
//input: mang so nguyen a voi n phantu
//ouput: tra ve gia tri lon thu nhi trong mang
int TimGiaTriLonNhi(int a[], int n)
{
	int LonNhat = TimMaxMang(a, n);
	int LonNhi = TimMinMang(a, n);
	for (int i = 0; i < n; i++)
	if (a[i] != LonNhat && a[i] > LonNhi)
		LonNhi = a[i];
	return LonNhi;
}//