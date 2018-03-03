#include "ham.h"

//Ham tim gia tri lon nhat trong mang
//input: mang so nguyen a voi n phantu
//ouput: tra ve gia tri lon naht tong mang
int TimMaxMang(int a[], int n)
{
	int max = a[0];
	for (int i = 0; i < n; i++)
	if (a[i]>max)
	{
		max = a[i];
	}
	return max;
}