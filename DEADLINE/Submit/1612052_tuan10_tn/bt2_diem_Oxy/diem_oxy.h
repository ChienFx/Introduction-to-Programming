#include <stdio.h>
#include <conio.h>
#include <math.h>

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void NhapDiem(DIEM&,char chuoi[255]);
void XuatDiem(DIEM,char chuoi[255]);
float TinhKhoangCachHaiDiem(DIEM, DIEM);
float TinhKhoangCachTheoPhuongOx(DIEM, DIEM);
float TinhKhoangCachTheoPhuongOy(DIEM, DIEM);
DIEM TimDoiXung(DIEM);//Qua goc toa do
DIEM TimDoiXungQuaPhanGiacI(DIEM);//phan giac I: y = x;
DIEM TimDoiXungQuaPhanGiacII(DIEM);//phan giac II: y=-x;
int ThuocPhanNaoCuaHeTruc(DIEM P);//// trả về điểm P thuộc phần tư thứ mấy
