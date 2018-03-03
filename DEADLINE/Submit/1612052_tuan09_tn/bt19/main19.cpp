#include "bai19.h"
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

	printf("\nTong cac so Chinh phuong nam nua tren duong cheo chinh: %d", TongChinhPhuongNuaTrenCheoPhu(a, N));
	printf("\nTong cac so Doi Xung nam nua tren duong cheo chinh: %d", TongDoiXungNuaTrenCheoPhu(a, N));
	printf("\nTong cac so HOAN CHINH nam nua tren duong cheo chinh: %d", TongHoanChinhNuaTrenCheoPhu(a, N));
	printf("\nTong cac so NGUYEN TO nam nua tren duong cheo chinh: %d", TongNguyenToNuaTrenCheoPhu(a, N));
	_getch();
}