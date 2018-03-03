#include "bai17.h"
void main()
{
	int a[MaxDong][MaxCot];
	int N;//mang vuong

	//Bai 17:
	do
	{
		printf("\nChi so mang VUONG:");
		scanf_s("%d", &N);
	} while (N<1 || N>MaxDong);
	NhapMang2Chieu(a, N, N, "Nhap Vuong mang A.");
	XuatMang2Chieu(a, N, N, "Mang Vuong A:\n");
	printf("\nSo cac so Chinh phuong tren duong cheo phu: %d", DemSoChinhPhuongTrenDuongCheoPhu(a, N));
	printf("\nSo cac so Doi Xung tren duong cheo phu: %d", DemSoDoiXungTrenDuongCheoPhu(a, N));
	printf("\nSo cac so HOAN CHINH tren duong cheo phu: %d", DemSoHoanChinhTrenDuongCheoPhu(a, N));
	printf("\nSo cac so NGUYEN TO tren duong cheo phu: %d", DemSoNguyenToTrenDuongCheoPhu(a, N));
	_getch();
}