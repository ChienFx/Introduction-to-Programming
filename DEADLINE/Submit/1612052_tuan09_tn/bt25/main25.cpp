#include "bai25.h"
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

	printf("\nTich cac so Chinh phuong nam nua Duoi duong cheo phu: %d", TichChinhPhuongNuaDuoiCheoPhu(a, N));
	printf("\nTich cac so Doi Xung nam nua Duoi duong cheo phu: %d", TichDoiXungNuaDuoiCheoPhu(a, N));
	printf("\nTich cac so HOAN CHINH nam nua Duoi duong cheo phu: %d", TichHoanChinhNuaDuoiCheoPhu(a, N));
	printf("\nTich cac so NGUYEN TO nam nua Duoi duong cheo phu: %d", TichNguyenToNuaDuoiCheoPhu(a, N));
	_getch();
}