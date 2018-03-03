#include "bai23.h"
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

	printf("\nTong cac so Chinh phuong nam nua Duoi duong cheo chinh: %d", TongChinhPhuongNuaDuoiCheoPhu(a, N));
	printf("\nTong cac so Doi Xung nam nua Duoi duong cheo Phu: %d", TongDoiXungNuaDuoiCheoPhu(a, N));
	printf("\nTong cac so HOAN Chinh nam nua Duoi duong cheo Phu: %d", TongHoanChinhNuaDuoiCheoPhu(a, N));
	printf("\nTong cac so NGUYEN TO nam nua Duoi duong cheo Phu: %d", TongNguyenToNuaDuoiCheoPhu(a, N));
	_getch();
}