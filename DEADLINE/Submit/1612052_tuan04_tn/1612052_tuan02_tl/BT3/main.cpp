#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	float Gio, Phut, Giay;

	printf("\nNhap Gio:");
	scanf_s("%f", &Gio);
	printf("\nNhap Phut:");
	scanf_s("%f", &Phut);
	printf("\nNhap Giay:");
	scanf_s("%f", &Giay);
	if (fmod(Gio, 1) != 0 || fmod(Phut, 1) != 0 || fmod(Giay, 1) != 0 || Gio < 0 || Gio > 24 || Phut > 60 || Phut < 0 || Giay < 0 || Giay > 60)
		printf("\nThoi gian KHONG hop le!!!");
	else
		printf("\nThoi gian HOP LE!!!");
	_getch();
	return 0;
}