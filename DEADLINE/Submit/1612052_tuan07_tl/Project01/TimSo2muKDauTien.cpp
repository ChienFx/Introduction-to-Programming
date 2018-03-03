#include "ham.h"
//Ham tiem phan tu co dang 2^k dau tien trong mang
//input mang a voi n phan tu
//ouput ra phan tu thoa yeu cau, neu khong co tra ra -1
int TimSo2muKDauTien(int a[], int n)
{
	for (int k = 0; k < 100; k++)
	if (n == (long int)pow((float)2, k)) return 1;
	return -1;
}
