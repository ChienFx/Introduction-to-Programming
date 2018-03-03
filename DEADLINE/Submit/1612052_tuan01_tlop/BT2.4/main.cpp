#include <stdio.h>
#include <conio.h>

void main()
{
	
	float ChDai, ChRong, ChuVi, DienTich;
	printf("\nNhap chieu dai: ");
	scanf_s("%f", &ChDai);

	printf("\nNhap chieu rong: ");
	scanf_s("%f", &ChRong);
	ChuVi = (ChDai + ChRong)*2;
	DienTich = ChDai*ChRong;

	printf("\nChu vi: %0.2f\nDien tich: %0.2f", ChuVi, DienTich);

	_getch();

}