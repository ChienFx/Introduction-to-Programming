//Chuong trinh chuyen do C sang do F
#include <stdio.h>
#include <conio.h>

void main()
{
	float C, F;
	printf("\nNhap do C: ");
	scanf_s("%f", &C);

	F = C*1.8 + 32.0;

	printf("\n%0.2f C = %0.2f F: ",C,F);

	_getch();

}