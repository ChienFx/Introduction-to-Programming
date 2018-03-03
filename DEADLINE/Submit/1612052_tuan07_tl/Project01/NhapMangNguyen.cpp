#include "ham.h"

//Ham nhap vao 1 mang so nguyen
//input: mang so nguyen a, n pha ntu
//ouput: gan cac gia tri nhap vao vao mang a
void NhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\nA[%d]: ", i);
		scanf_s("%d", &a[i]);
	}
}