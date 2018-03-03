#include "ham.h"
void SXLeTang(int a[], int n)
{
	int temp;
	for (int i = 1; i < n - 1; i += 2)
	for (int j = i + 2; j < n; j += 2) // c2: 2 vòng for, điều kiện i,j lẻ
	if (a[i] > a[j])
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}