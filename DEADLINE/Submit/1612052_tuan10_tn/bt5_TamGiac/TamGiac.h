#include <stdio.h>
#include <conio.h>
#include <math.h>

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

struct tamgiac
{
	diem d1;
	diem d2;
	diem d3;
};
typedef struct tamgiac TAMGIAC;

void NhapDiem(DIEM&, char chuoi[255]);
void XuatDiem(DIEM, char chuoi[255]);
float TinhKhoangCachHaiDiem(DIEM, DIEM);

void NhapTamGiac(tamgiac &T, char chuoi[255]);
void XuatTamGiac(tamgiac T, char chuoi[255]);
bool KiemTraLapThanhTamGiac(tamgiac T);
float TinhDienTichTamGiac(tamgiac T);
float TinhChuViTamGiac(tamgiac T);
diem ToaDoTrongTamTamGia(tamgiac T);
diem ToaDoDinhCoHoanhDoLonNhat(tamgiac T);