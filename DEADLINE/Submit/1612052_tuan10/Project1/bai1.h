#include <stdio.h>
#include <conio.h>

struct phanso
{
	int tu;
	int mau;
};
typedef struct phanso PHANSO;

void NhapPhanSo(phanso &p, char chuoi[255]);
void XuatPhanSo(phanso p,char chuoi[255]);

void RutGonPhanSo(phanso &p);
int TimUSCNLN(int a, int b);
phanso operator+(phanso p1, phanso p2);
phanso operator-(phanso p1, phanso p2);
phanso operator*(phanso p1, phanso p2);
phanso operator/(phanso p1, phanso p2);

int SoSanhHaiPhanSo(phanso p1, phanso p2);
int KiemTraDuong(phanso p);
