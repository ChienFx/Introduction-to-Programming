#include "bai1.h"
#define MAX 1000
int main()
{
	int a[MAX], n,x;
	printf("\nNhap so phan tu: ");
	scanf_s("%d", &n);
	NhapMang(a, n);

QuayLaiMeNu:
	XuatMang(a, n);
	int chon;

	printf("\n-------------------------------------------------------");
	printf("\n                         MENU");
	printf("\n-------------------------------------------------------");
	printf("\n1. Tim phan tu chan lon nhat va phan tu le nho nhat");
	printf("\n2. Tinh trung binh cong cua mang");
	printf("\n3. Kiem tra x co ton tai va dem tan suat xuat hien");
	printf("\n4. Sap xep mang tang va chen vi tri");
	printf("\n5. Tinh trung binh cong cac so lon hoang hoac bang so k nhap tu ban phim");
	printf("\n6. Nhap 2 so a,b huy b phan tu tu vi tri a");
	printf("\n7. Chen mang B vao mang A tai vi tri K");
	printf("\n8. Gop hai mang xen ke va xoa cac phan tu trung");
	printf("\n9. Dem so mang con tang va xuat ra mang con tang dai nhat");
	printf("\n10.Kiem tra tinh doi xung cua mang");
	printf("\n0. Thoat");
	printf("\nChon:");
	scanf_s("%d", &chon);
	switch (chon)
	{
	case 1:
	{
			  printf("\nPhan tu chan lon nhat: %d", TimSoChanLonNhat(a, n));
			  printf("\nPhan tu le nho nhat: %d", TimSoLeNhoNhat(a, n));
			  printf("\n-------------------------------------------------------");
			  printf("\nBam phim bat ki de quay lai menu: ");
			  _getch();
			  system("cls");
			  goto QuayLaiMeNu;
			  break;
	}
	case 2:
	{
			  printf("\nTrung binh cong cua mang: %f", TinhTrungBinhCong(a, n));
			  printf("\n-------------------------------------------------------");
			  printf("\nBam phim bat ki de quay lai menu: ");
			  _getch();
			  system("cls");
			  goto QuayLaiMeNu;
			  break;
	}
	case 3:
	{
			  printf("\nNhap x:");
			  scanf_s("%d", &x);

			  if (KiemTraTonTai(a, n, x)==false)
				  printf("\n%d khong ton tai trong mang.", x);
			  else
			  {
				  printf("\n%d ton tai trong mang.", x);
				  printf("\nSo lan xuat hien: %d", DemTanSuat(a, n, x));
				  XoaTatCaPhanTuX(a, n, x);
				  printf("\nMang sau khi xoa:");
				  XuatMang(a, n);
			  }
			  printf("\n-------------------------------------------------------");
			  printf("\nBam phim bat ki de quay lai menu: ");
			  _getch();
			  system("cls");
			  goto QuayLaiMeNu;
			  break;
	}
	case 4:
	{
			  printf("\nMang Tang dan:");
			  SapXap(a, n, true);
			  XuatMang(a, n);
			  /*printf("\nMang Giam dan:");
			  SapXap(a, n, false);
			  XuatMang(a, n);*/
			  printf("\nNhap x:");
			  scanf_s("%d", &x);
			  ChenPhanTu(a, n, x);
			  printf("\nMang sau khi chen:");
			  XuatMang(a, n);
			  printf("\n-------------------------------------------------------");
			  printf("\nBam phim bat ki de quay lai menu: ");
			  _getch();
			  system("cls");
			  goto QuayLaiMeNu;
			  break;
	}
	case 5:
	{
			  printf("\nNhap k:");
			  scanf_s("%d", &x);
			  printf_s("\nTrung binh cong cac phan tu l9on hon %d: %f", x, TinhTrungBinhCongLonhon(a,n,x));
			  printf("\n-------------------------------------------------------");
			  printf("\nBam phim bat ki de quay lai menu: ");
			  _getch();
			  system("cls");
			  goto QuayLaiMeNu;
			  break;
	}
	case 6:
	{
			  printf("\nnhap vi tri:");
			  int vt; scanf_s("%d", &vt);

			  printf("\nnhap so phan tu can huy:");
			  scanf_s("%d", &x);
			  HuyPhanTu(a, n, vt, x);
			  printf("\n-------------------------------------------------------");
			  printf("\nBam phim bat ki de quay lai menu: ");
			  _getch();
			  system("cls");
			  goto QuayLaiMeNu;
			  break;

	}
	case 7:
	{
			  int c[MAX], d[MAX], n1, n2;
			  printf("\nNhap so phan tu mang C: ");
			  scanf_s("%d", &n1);
			  NhapMang(c, n1);
			  printf("\nNhap so phan tu mang D: ");
			  scanf_s("%d", &n2);
			  NhapMang(d, n2);
			  printf("\nNhap vi tri k: ");
			  scanf_s("%d", &x);
			  XuatMang(c, n1); 
			  XuatMang(d, n2);
			  GopMangBvaoATaiK(c, n1, d, n2, x);
			  printf("\nMang sau khi gop:");
			  XuatMang(c, n1);
			  printf("\n-------------------------------------------------------");
			  printf("\nBam phim bat ki de quay lai menu: ");
			  _getch();
			  system("cls");
			  goto QuayLaiMeNu;
			  break;			  
	}
	case 8:
	{

			  int b[100], n2=0;
			  printf("\nNhap so ptu mang b:"); scanf_s("%d", &n2);
			  NhapMang(b, n2);
			  XuatMang(b, n2);
			  printf("\nMang sau khi gop xen ke va xoa trung:");
			  GopXenKe(a, n, b, n2);
			  printf("\n-------------------------------------------------------");
			  printf("\nBam phim bat ki de quay lai menu: ");
			  _getch();
			  system("cls");
			  goto QuayLaiMeNu;
			  break;
	}
	case 9:
	{
			  printf("\nSo mang con tang: %d", DemSoMangConTangVaXuatMangConTangDaiNhat(a, n));
			  printf("\n-------------------------------------------------------");
			  printf("\nBam phim bat ki de quay lai menu: ");
			  _getch();
			  system("cls");
			  goto QuayLaiMeNu;
			  break;

	}
	case 10:
	{
			   if (KiemTraMangDoiXung(a, n))
				   printf("\nMang doi xung");
			   else printf("\nmang khong doi xung");
			   printf("\n-------------------------------------------------------");
			   printf("\nBam phim bat ki de quay lai menu: ");
			   _getch();
			   system("cls");
			   goto QuayLaiMeNu;
			   break;
	}
	case 0: exit(0);
	}
	_getch();
	return 0;
}