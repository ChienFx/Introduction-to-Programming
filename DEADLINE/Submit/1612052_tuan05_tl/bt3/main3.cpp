#include "bai3.h"

int main()
{
	int dai, rong;
	do
	{
		printf("\nNhap chieu dai:");
		scanf_s("%d", &dai);
		printf("\nNhap chieu rong:");
		scanf_s("%d", &rong);
	} while (dai < 0 || rong < 0 || dai < rong);
	printf("\nChu vi : %d\nDien tich: %d", tinhchuvi(dai, rong), tinhdientich(dai, rong));
	vehcn(dai, rong);
	_getch();
	return 0;
}