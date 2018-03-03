#include "ham.h"
void LietKeSoAm(int a[], int n)
{
	printf("\nSo am trong mang: ");
	for (int i = 0; i < n; i++)
	if (a[i] < 0) printf("%d  ", a[i]);
	printf("\n");
}