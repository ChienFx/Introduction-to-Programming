#include "ham.h"
void LietKeSoNguyenTo(int a[], int n)
{
	printf("\nCac SNT: ");
	for (int i = 0; i < n; i++)
	if (KiemTraSNT(a[i]))
		printf("%4d ", a[i]);
}