#include "ham.h"
void SXMangTang(int a[], int n)
{
	int temp;
	for (int i = 0; i < n - 1; i++)
	for (int j = i + 1; j < n; j++)
	if (a[i] > a[j])
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}