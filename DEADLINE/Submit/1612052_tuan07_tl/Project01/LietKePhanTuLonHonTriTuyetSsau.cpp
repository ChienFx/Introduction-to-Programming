#include "ham.h"
void LietKeLonHonTriTuyetSau(int a[], int n)
{
	printf("\nCac so lon hon tri tuyet doi so sau no la: ");
	for (int i = 0; i <= n - 2; i++)
	if (a[i] > abs(a[i + 1])) printf("%4d", a[i]);
	printf("\n");
}