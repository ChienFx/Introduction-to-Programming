#include "ham.h"

int main()
{
	int n, a[100];
	do
	{
		printf("\nNhap so phan tu mang: ");
		scanf_s("%d", &n);
	} while (n <= 0);
	NhapMang(a, n);
	XuatMang(a, n);
	printf("\nGia Tri Nho Nhat: %d", TimMinMang(a, n));
	printf("\nGia Tri Lon Nhat: %d", TimMaxMang(a, n));
	printf("\nGia tri Lon Nhi: %d", TimGiaTriLonNhi(a, n));
	printf("\nGia tri Nho Nhi: %d", TimGiaTriNhoNhi(a, n));
	printf("\nVi tri so duong cuoi cung: %d", TimViTriDuongCuoi(a,n));
	printf("\nSo chan dau tien: %d", TimSoChanDauTien(a,n));
	printf("\nVi tri gia tri nho nhat: %d", TimViTriGiaTriNhoNhat(a, n));
	printf("\nSo nguyen to cuoi cung: %d", TimSNTCuoi(a, n));
	LietKeCacViTriCuaPhanTuLonNhat(a, n);
	LietKePhanTuCoChuSoDauChan(a, n);
	LietKeGiaTriTrongDoan(a, n, 1, 10);
	LietKeLonHonTriTuyetSau(a, n);
	LietKeSoAm(a, n);
	LietKeSoCoLanCanLe(a, n);
	LietKeSoNguyenTo(a, n);
	lietKeCacPhanTuCoItNhatMotLanCanLe(a, n);
	SXLeTang(a, n);
	SXMangTang(a, n);
	printf("\nPhan tu chan dau tien: %d", TimSoChanDauTien(a, n));
	printf("\nPhan tu nguyen to cuoi:%d", TimSNTCuoi(a, n));
	printf("\nPhan tu co dang 2^k dau tien: %d", TimSo2muKDauTien(a, n));
	printf("\nTBC: %f", TinhTrungBinhCongPhanTuDuong(a, n));
	printf("\nTong cac phan tu chinh phuong: %d", TinhTongCacPhanTuChinhPhuong(a, n));
	printf("\nTong cac so co hang chuc chan: %d", TinhTongSoChucChan(a, n));
	XuatMangabChuaMang(a, n);

	printf("\nSo phan tu nguyen to: %d", DemSoPhanTuNguyenTo(a, n));
	printf("\nSo phan tu lon nhat: %d", DemSoPhanTuMax(a, n));
	printf("\nUoc chung lon nhat cua mang: %d",timUocChungLonNhatCuaMotMang(n,a));
	printf("\nTong cac phan tu cuc tri: %d", tinhTongCacPhanTuCucTri(a,n));
	XuatCacDayConTang(a, n);
	XoaPhanTuBiTrung(a, n);
	XoaSoAm(a, n);
	_getch();
	return 0;
}