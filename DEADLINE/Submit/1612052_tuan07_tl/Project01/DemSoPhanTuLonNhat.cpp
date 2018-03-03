#include "ham.h"

int DemSoPhanTuMax(int a[], int n)
{
	int max = TimMaxMang(a, n);
	int dem = 0;
	for (int i = 0; i < n;i++)
	if (a[i] == max)
		dem++;
	return dem;
}