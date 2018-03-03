#include "bai26.h"
void main()
{
	int a[MaxDong][MaxCot];
	int N;//mang vuong

	//Bai 18:
	do
	{
		printf("\nChi so mang VUONG:");
		scanf_s("%d", &N);
	} while (N<1 || N>MaxDong);
	NhapMang2Chieu(a, N, N, "Nhap Vuong mang A.");
	XuatMang2Chieu(a, N, N, "Mang Vuong A:\n");

	printf("\nPhan tu lon nhat tren DUONG CHEO CHINH: %d", TimMaxTrenDuongCheoChinh(a, N));
	printf("\nPhan tu lon nhat tren DUONG CHEO PHU: %d", TimMaxTrenDuongCheoPhu(a, N));
	_getch();
}