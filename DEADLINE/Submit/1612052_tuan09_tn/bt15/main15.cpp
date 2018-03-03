#include "bai15.h"
void main()
{
	int a[MaxDong][MaxCot];
	int N;//mang vuong

	//BAi 15:
	do
	{
	printf("\nChi so mang VUONG:");
	scanf_s("%d", &N);
	} while (N<1 || N>MaxDong);
	NhapMang2Chieu(a, N, N, "Nhap Vuong mang A.");
	XuatMang2Chieu(a, N, N, "Mang Vuong A:\n");
	printf("\nTong cac so Chinh phuong tren duong cheo phu: %d", TinhTongSoChinhPhuongTrenDuongCheoPhu(a, N));
	printf("\nTong cac so Doi Xung tren duong cheo phu: %d", TinhTongSoDoiXungTrenDuongCheoPhu(a, N));
	printf("\nTong cac so HOAN CHINH tren duong cheo phu: %d", TinhTongSoHoanChinhTrenDuongCheoPhu(a, N));
	printf("\nTong cac so NGUYEN TO tren duong cheo phu: %d", TinhTongSoNguyenToTrenDuongCheoPhu(a, N));

	_getch();
}