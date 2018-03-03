#include <stdio.h>
#include <conio.h>
#include <math.h>
struct donthuc
{
	float a;
	int n;
};
typedef struct donthuc DONTHUC;
struct dathuc
{
	float a[100];
	int n;
};
typedef struct dathuc DATHUC;



DONTHUC nhapdonthuc();
void xuatdonthuc(DONTHUC);
double tich(DONTHUC, DONTHUC, float);
DONTHUC tich2(DONTHUC, DONTHUC);
DONTHUC daoham(DONTHUC);
DONTHUC thuong(DONTHUC, DONTHUC);
DONTHUC daohamk(DONTHUC, int);

void nhapDATHUC(DATHUC &);
void xuatDATHUC(DATHUC);
DATHUC hieu(DATHUC P1, DATHUC P2);
DATHUC tong(DATHUC P1, DATHUC P2);
DATHUC tich(DATHUC P1, DATHUC P2);

DATHUC TichDonThucVaDaThuc(DONTHUC T, DATHUC P);
DATHUC ThuongSo(DATHUC BiChia, DATHUC Chia);
DATHUC SoDu(DATHUC, DATHUC);