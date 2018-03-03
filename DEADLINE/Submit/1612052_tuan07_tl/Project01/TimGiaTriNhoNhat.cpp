#include "ham.h"

//Ham tim gia tri lon nhat trong mang
//input: mang so nguyen a voi n phantu
//ouput: tra ve gia tri phan tu nhat nhat torng mang
int TimMinMang(int a[], int n)
{
	int min = a[0];
	for (int i = 0; i < n; i++)
	if (a[i] < min)
		min = a[i];
	return min;
}