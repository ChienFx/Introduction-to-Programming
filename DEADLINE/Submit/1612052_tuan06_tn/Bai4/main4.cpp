#include "bai4.h"

int main()
{
	int ngay, thang=2, nam=2016;
	NhapNgayThangNam(ngay, thang, nam);
	
	int A = ngay + 2 * thang + (3 * (thang + 1) / 5) + nam + nam / 4 - nam / 100 + nam / 400 + 2;
	int tmp = A % 7;
	switch (tmp)
	{
	case 0:printf("\nThu Hai"); break;
	case 1:printf("\nchu Nhat"); break;
	case 2:printf("\nThu Hai"); break;
	case 3:printf("\nThu Ba"); break;
	case 4:printf("\nThu Tu"); break;
	case 5:printf("\nThu Nam"); break;
	case 6:printf("\nThu Sau"); break;
	}
	XuatNgayHomSau(ngay, thang, nam);
	XuatNgayHomTruoc(ngay, thang, nam);
	int k;
	do
	{
		printf("\nNhap k:");
		scanf_s("%d", &k);
	} while (k < 0);
	XuatKNgayTiepTheo(ngay, thang, nam, k); 
	XuatKNgayTruoc(ngay, thang, nam, k);
	//A = d + 2m + (3(m + 1)/5) + y + (y/4) – (y /100) + (y/400) + 2 

	
	_getch();
	return 0;
}