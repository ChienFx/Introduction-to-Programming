#include "bai18.h"
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

	printf("\nTong cac so Chinh phuong nam nua tren duong cheo chinh: %d", TongChinhPhuongNuaTrenCheoChinh(a, N));
	printf("\nTong cac so Doi Xung nam nua tren duong cheo chinh: %d", TongDoiXungNuaTrenCheoChinh(a, N));
	printf("\nTong cac so HOAN CHINH nam nua tren duong cheo chinh: %d", TongHoanChinhNuaTrenCheoChinh(a, N));
	printf("\nTong cac so NGUYEN TO nam nua tren duong cheo chinh: %d", TongNguyenToNuaTrenCheoChinh(a, N));
	_getch();
}