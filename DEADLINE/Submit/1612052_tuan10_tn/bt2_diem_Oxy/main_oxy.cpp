#include "diem_oxy.h"

int main()
{
	DIEM P1, P2;
	//P.x = 1;
	//P.y = 0;
	NhapDiem(P1,"Nhap toa do P1");
	NhapDiem(P2,"Nhap toa do P2");
	XuatDiem(P1,"Toan do P1");
	XuatDiem(P2,"Toa do P2");
	printf("\nKhoang cach: %f", TinhKhoangCachHaiDiem(P1, P2));
	printf("\nkhoang cach theo phuong Ox: %f", TinhKhoangCachTheoPhuongOx(P1, P2));
	printf("\nkhoang cach theo phuong Oy: %f", TinhKhoangCachTheoPhuongOy(P1, P2));
	XuatDiem(TimDoiXung(P1),"\nDiem doi xung cua P1");
	XuatDiem(TimDoiXung(P2),"\nDiem doi xung cua P2");
	XuatDiem(TimDoiXungQuaPhanGiacI(P1),"\nDiem doi xung cua P1 qua phan giac I: ");
	XuatDiem(TimDoiXungQuaPhanGiacII(P1),"\nDiem doi xung cua P1 qua phan giac II: ");
	if (ThuocPhanNaoCuaHeTruc(P1) != 0)
		printf("\nDiem P thuoc phan tu thu %d.", ThuocPhanNaoCuaHeTruc(P1));
	else printf("\nDiem P thuoc he truc toa do.");
	_getch();
	return 0;
}