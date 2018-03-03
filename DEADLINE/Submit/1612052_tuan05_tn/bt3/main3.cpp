#include "bai3.h"
int main()
{
	int dau, cuoi, dem = 0;
	do
	{
		printf("\nNhap so dau:");
		scanf_s("%d", &dau);
		printf("\nNhap so cuoi:");
		scanf_s("%d", &cuoi);
	} while (dau > cuoi);
	int tong = tongchan(dau, cuoi, dem);
	printf("\ntrong [%d,%d] co %d so chan\nTong la: %d", dau, cuoi, dem, tong);
	_getch();
	return 0;
}