#include "Oxy.h"

int main()
{
	DIEM P1,P2;
	//P.x = 1;
	//P.y = 0;
	NhapDiem(P1);
//	NhapDiem(P2);
	XuatDiem(P1);
//	XuatDiem(P2);
	//printf("\nKhoang cach: %f", TinhKhoangCachHaiDiem(P1, P2));
	//printf("\nkhoang cach theo phuong Ox: %f", TinhKhoangCachTheoPhuongOx(P1, P2));
	//printf("\nkhoang cach theo phuong Oy: %f", TinhKhoangCachTheoPhuongOy(P1, P2));
	//XuatDiem(TimDoiXung(P1));
	//XuatDiem(TimDoiXung(P2));
	//XuatDiem(TimDoiXungQuaPhanGiacI(P1));
	//XuatDiem(TimDoiXungQuaPhanGiacII(P1));
	if (ThuocPhanNaoCuaHeTruc(P1)!=0)
	printf("\nDiem P thuoc phan tu thu %d.", ThuocPhanNaoCuaHeTruc(P1));
	else printf("\nDiem P thuoc he tru toa do.");
	_getch();
	return 0;
}