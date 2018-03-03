#include "ham.h"

//Ham tim gia tri nho thu nhi trong mang
//input: mang so nguyen a voi n phantu
//ouput: tra ve gia tri phan tu nho thu nhi trong mang
int TimGiaTriNhoNhi(int a[], int n)
{
	int NhoNhat = TimMinMang(a, n);
	int NhoNhi = TimMaxMang(a, n);
	for (int i = 0; i < n; i++)
	if (a[i] != NhoNhat && a[i] < NhoNhi)
		NhoNhi = a[i];
	return NhoNhi;
}////