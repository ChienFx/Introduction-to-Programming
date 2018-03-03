#include "ham.h"

int DemSoPhanTuNguyenTo(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n;i++)
	if (KiemTraSNT(a[i]))
		dem++;
	return dem;
}