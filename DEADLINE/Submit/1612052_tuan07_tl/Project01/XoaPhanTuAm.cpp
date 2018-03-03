#include "ham.h"
void XoaSoAm(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	if (a[i] < 0)
	{
		dem++;
		for (int j = i; j < n - dem; j++)
			a[j] = a[j + 1];
		i--;			//Xóa xong thì a[i+1] -> a[i]
	}

	printf("\nMang Sau Xoa:\n ");
	for (int i = 0; i < n - dem; i++)
		printf("%4d ", a[i]);
}