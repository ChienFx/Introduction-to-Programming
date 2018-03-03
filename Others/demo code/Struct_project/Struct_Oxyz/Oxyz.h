#include <stdio.h>
#include <conio.h>
#include <math.h>
struct diemkg
{
	float x;
	float y;
	float z;	
};
typedef struct diemkg DIEMKG;

void NhapDiemKG(DIEMKG&);
void XuatDiemKG(DIEMKG);
float TinhKhoangCachGiuaHaiDiem(DIEMKG P1, DIEMKG P2);	
//Các hàm tìm điểm đối xứng qua Oxy,Oxz,Oyz tương tự như Oxy