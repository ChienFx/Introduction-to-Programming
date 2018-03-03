#include "ham.h"
void XoaPhanTuBiTrung(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n - 1; i++)
	for (int j = i + 1; j < n; j++)
	if (a[i] == a[j]) a[j] = -9999;
	for (int i = 0; i < n; i++)
	if (a[i] == -9999)
	{
		dem++;
		for (int j = i; j < n - dem; j++)
			a[j] = a[j + 1];
		i--;
	}


	printf("\nMang Sau Xoa:\n ");
	for (int i = 0; i < n - dem; i++)
		printf("%4d ", a[i]);
}