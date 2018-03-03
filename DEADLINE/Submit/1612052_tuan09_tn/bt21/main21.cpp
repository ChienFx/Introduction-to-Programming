#include "bai21.h"
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

	printf("\nTich cac so Chinh phuong nam nua tren duong cheo chinh: %d", TichChinhPhuongNuaTrenCheoPhu(a, N));
	printf("\nTich cac so Doi Xung nam nua tren duong cheo chinh: %d", TichDoiXungNuaTrenCheoPhu(a, N));
	printf("\nTich cac so HOAN CHINH nam nua tren duong cheo chinh: %d", TichHoanChinhNuaTrenCheoPhu(a, N));
	printf("\nTich cac so NGUYEN TO nam nua tren duong cheo chinh: %d", TichNguyenToNuaTrenCheoPhu(a, N));
	_getch();
}