#include "LietKeHoanVi.h"

void main()
{
	int a[MAX], n;
	do
	{
		printf("\nNhap n:");
		scanf_s("%d", &n);
	} while (n < 1);
	LietKeHoanVi(a, n);
	_getch();
}