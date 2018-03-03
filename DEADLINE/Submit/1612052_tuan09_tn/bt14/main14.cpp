#include "bai14.h"
void main()
{
	int a[MaxDong][MaxCot];
	int N;//mang vuong
	
	//Bai 14:
	do
	{
		printf("\nChi so mang VUONG:");
		scanf_s("%d", &N);
	} while (N<1 || N>MaxDong);
	NhapMang2Chieu(a, N, N, "Nhap Vuong mang A.");
	XuatMang2Chieu(a, N, N, "Mang Vuong A:\n");
	printf("\nTong cac so Chinh phuong tren duong cheo chinh: %d", TinhTongSoChinhPhuongTrenDuongCheoChinh(a, N));
	printf("\nTong cac so Doi Xung tren duong cheo chinh: %d", TinhTongSoDoiXungTrenDuongCheoChinh(a, N));
	printf("\nTong cac so HOAN CHINH tren duong cheo chinh: %d", TinhTongSoHoanChinhTrenDuongCheoChinh(a, N));
	printf("\nTong cac so NGUYEN TO tren duong cheo chinh: %d", TinhTongSoNguyenToTrenDuongCheoChinh(a, N));
	_getch();
}