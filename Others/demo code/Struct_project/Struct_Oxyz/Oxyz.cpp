#include "Oxyz.h"

void NhapDiemKG(DIEMKG &P)
{
	printf("Nhap x: ");
	scanf_s("%f", &P.x);
	printf("Nhap y: ");
	scanf_s("%f", &P.y);
	printf("Nhap z: ");
	scanf_s("%f", &P.z);
}

void XuatDiemKG(DIEMKG P)
{
	printf("(%0.2f;%0.2f;%0.2f)", P.x, P.y, P.z);
}

float TinhKhoangCachGiuaHaiDiem(DIEMKG P1, DIEMKG P2)
{
	return sqrt(pow(P1.x - P2.x, 2) + pow(P1.y - P2.y, 2) + pow(P1.z - P2.z, 2));
}