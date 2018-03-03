#include "bai22.h"
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

	printf("\nTong cac so Chinh phuong nam  duoi duong cheo chinh: %d", TongChinhPhuongDuoiCheoChinh(a, N));
	printf("\nTong cac so Doi Xung nam  Duoi duong cheo chinh: %d", TongDoiXungDuoiCheoChinh(a, N));
	printf("\nTong cac so HOAN CHINH nam  Duoi duong cheo chinh: %d", TongHoanChinhDuoiCheoChinh(a, N));
	printf("\nTong cac so NGUYEN TO nam  Duoi duong cheo chinh: %d", TongNguyenToDuoiCheoChinh(a, N));
	_getch();
}