#include <stdio.h>
#include <conio.h>

void main()
{
	int b1, b2, b3, b4;
	printf("\nNhap b1 = ");
	scanf_s("%d", &b1);

	printf("\nNhap b2 = ");
	scanf_s("%d", &b2);

	printf("\nNhap b3 = ");
	scanf_s("%d", &b3);

	printf("\nNhap b4 = ");
	scanf_s("%d", &b4);

	int Min = b1;
	if (b2 < Min) Min = b2;
	if (b3 < Min) Min = b3;
	if (b4 < Min) Min = b4;

	printf("\nSo nho nhat: %d\n", Min);

	_getch();

}