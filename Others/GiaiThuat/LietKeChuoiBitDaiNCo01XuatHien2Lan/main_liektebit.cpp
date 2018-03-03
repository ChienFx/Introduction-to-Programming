//Liet ke cac day ni phan co do dai n cu '01' xuat hien dung 2 lanf
#include "LietKe01.h"

void main()
{
	int a[MAX], n;
	do
	{
		printf("\n-Nhap do dai chuoi bit:");
		scanf_s("%d", &n);
	} while (n < 1);
	printf("\nCac day nhi phan dai %d co cum '01' xuat hien dung 2 lan:\n", n);
	XuatHoanVi(a, n);

	_getch();
}