#include "Oxyz.h"

int main()
{
	DIEMKG P1,P2;
	NhapDiemKG(P1);
	NhapDiemKG(P2);
	XuatDiemKG(P1);
	XuatDiemKG(P2);
	printf("\nKhoang cach giua hai diem: %f", TinhKhoangCachGiuaHaiDiem(P1, P2));
	_getch();
	return 0;
}