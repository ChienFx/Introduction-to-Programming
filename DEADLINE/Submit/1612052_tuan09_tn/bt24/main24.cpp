#include "bai24.h"
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

	printf("\nTich cac so Chinh phuong nam  duoi duong cheo chinh: %d", TichChinhPhuongDuoiCheoChinh(a, N));
	printf("\nTich cac so Doi Xung nam  Duoi duong cheo chinh: %d", TichDoiXungDuoiCheoChinh(a, N));
	printf("\nTich cac so HOAN CHINH nam  Duoi duong cheo chinh: %d", TichHoanChinhDuoiCheoChinh(a, N));
	printf("\nTich cac so NGUYEN TO nam  Duoi duong cheo chinh: %d", TichNguyenToDuoiCheoChinh(a, N));
	_getch();
}