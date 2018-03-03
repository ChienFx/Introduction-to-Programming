#include <stdio.h>
#include <conio.h>

typedef struct tagGio
{
	int gio;
	int phut;
	int giay;
}TAGGIO;

void NhapGio(tagGio &ng, char chuoi[255]);
void XuatGio(tagGio ng, char chuoi[255]);

bool KiemTraHopLe(tagGio);
tagGio TongHaiGio(tagGio t1, tagGio t2);