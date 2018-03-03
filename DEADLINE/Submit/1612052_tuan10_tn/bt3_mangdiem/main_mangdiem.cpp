#include "mangdiem.h"

void main()
{
	diem a[MAX];
	int n;
	do
	{
		printf("\nSo phan tu cua mang diem:");
		scanf_s("%d", &n);
	} while (n<1 || n > MAX);
	NhapMangDiem(a, n, "\nNhap mang Diem:");
	XuatMangDiem(a, n, "\nMang diem vua nhap:");

	printf("\nSo diem co hoanh do duong: %d", DemDiemCoHoanhDoDuong(a, n));
	XuatDiem(TimDiemCoTungDoLonNhat(a, n), "\nDiem co tung do lon nhat: ");
	XuatDiem(TimDiemGanGocToaDoNhat(a, n), "\nDiem gan Goc toa do nhat: ");
	XuatHaiTimDiemGanNhauNhat(a, n);
	XuatHaiTimDiemXaNhauNhat(a, n);
	_getch();
}