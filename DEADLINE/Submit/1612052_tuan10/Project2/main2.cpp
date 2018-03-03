#include "bai2.h"

void main()
{
	phanso a[MAX];
	int  n;
	
	do
	{
		printf("\nNhap so phan tu mang phan so:"); scanf_s("%d", &n);
	} while (n<1 || n>MAX);
	NhapMangPhanSo(a, n, "Nhap mang pha so A:\n");
	XuatMangPhanSo(a, n, "Mang phan so A:\n");
	RutGonMangPhanSo(a, n);
	XuatMangPhanSo(a, n, "\nMang phan so A sau khi rut gon:\n");
	phanso DuongNhoNhat = TimPhanSoDuongNhoNhat(a, n);
	XuatPhanSo(DuongNhoNhat, "\nPhan so duong nho nhat trong mang:");
	phanso AmLonNhat = TimPhanSoAmLonNhat(a, n);
	XuatPhanSo(AmLonNhat, "\nPhan so AM LON NHAT trong mang:");
	SapXepPhanSoChoMauGiamDan(a, n);
	XuatMangPhanSo(a, n, "\nMang phan so A sau khi sap xep cho mau so giam dan:\n");
	_getch();
}