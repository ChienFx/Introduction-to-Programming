#include "bai16.h"
void main()
{
	int a[MaxDong][MaxCot];
	int N;//mang vuong

	//bai 16:
	do
	{
	printf("\nChi so mang VUONG:");
	scanf_s("%d", &N);
	} while (N<1 || N>MaxDong);
	NhapMang2Chieu(a, N, N, "Nhap Vuong mang A.");
	XuatMang2Chieu(a, N, N, "Mang Vuong A:\n");
	printf("\nSo cac so Chinh phuong tren duong cheo chinh: %d", DemSoChinhPhuongTrenDuongCheoChinh(a, N));
	printf("\nSo cac so Doi Xung tren duong cheo chinh: %d", DemSoDoiXungTrenDuongCheoChinh(a, N));
	printf("\nSo cac so HOAN CHINH tren duong cheo chinh: %d", DemSoHoanChinhTrenDuongCheoChinh(a, N));
	printf("\nSo cac so NGUYEN TO tren duong cheo chinh: %d", DemSoNguyenToTrenDuongCheoChinh(a, N));
	_getch();
}