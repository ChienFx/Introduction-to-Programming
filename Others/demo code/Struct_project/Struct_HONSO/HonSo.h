#include <stdio.h>
#include <conio.h>

struct honso
{
	int coso;
	int tu;
	int mau;
};
typedef struct honso HONSO;

struct phanso
{
	int tu;
	int mau;
};
typedef struct phanso PHANSO;

void NhapHonSo(HONSO&);
void XuatHonSo(HONSO);
void XuatPhanSo(PHANSO);
PHANSO RutGonHonSo(HONSO);