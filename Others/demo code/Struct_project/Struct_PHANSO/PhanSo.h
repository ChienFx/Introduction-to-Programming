
#include <stdio.h>
#include <conio.h>

struct phanso
{
	int tu;
	int mau;
};
typedef struct phanso PHANSO;

void NhapPhanSo(PHANSO &);
void XuatPhanSo(PHANSO);

void RutGonPhanSo(PHANSO &);

PHANSO TinhTongHaiPhanSo(PHANSO, PHANSO);
PHANSO TinhHieuHaiPhanSo(PHANSO, PHANSO);
PHANSO TinhThuongHaiPhanSo(PHANSO, PHANSO);
PHANSO TinhTichHaiPhanSo(PHANSO, PHANSO);
int KiemTraToiGian(PHANSO);
int KiemTraPhanSoDuong(PHANSO);
int SoSanhHaiPhanSo(PHANSO, PHANSO);