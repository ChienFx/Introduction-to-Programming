#include "ngay.h"

void main()
{
	date ng;
	NhapNgay(ng, "Nhap ngay:");
	XuatNgay(ng, "\nNgay vua nhap:");
	XuatNgay(TimNgayKeTiep(ng), "\n - Ngay ke tiep: ");
	XuatNgay(TimNgayTruocDo(ng), "\n - Ngay truoc do: ");
	_getch();
}