#include "ham.h"
void XuatCacDayConTang(int a[], int n)
{
	printf("\nDay con tang: ");
	int sluong = 1;
	while (sluong <= n)
	{
		for (int i = 0; i < n; i++)
		if (sluong >= 2 && i + sluong <= n && KiemTraTang(a, i, i + sluong - 1))
		{
			printf("\n");
			for (int j = i; j <= i + sluong - 1; j++)
				printf("%-4d", a[j]);
		}
		sluong++;
	}
	printf("\n");
}
int KiemTraTang(int a[], int dau, int cuoi)
{
	for (int i = dau; i <= cuoi - 1; i++)
	if (a[i] >= a[i + 1]) return 0;
	return 1;
}