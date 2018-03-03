#include "KiemTra.h"

//hàm cho nhập ngày tháng năm theo đinh dạng, nhập sai định dạng thì nhập lại
void NhapNgayThangNam(int&ngay, int&thang, int&nam)
{
MrC:
	printf("\nNhap ngay theo dinh dang(dd/mm/yyyy):");
	scanf_s("%d/%d/%d", &ngay, &thang, &nam);

	if (ngay <1 || ngay >(TinhSoNgayTrongThang(thang, nam)) || thang<1 || thang>12 || nam < 0)
	{
		printf("\nNgay nhap vao khong hop le. Moi nhap lai!!!\n");
		goto MrC;
	}
}

//Hàm trả ra số ngày của tháng hợp lệ (tính cả trường hợp năm nhuận)
int TinhSoNgayTrongThang(int thang, int nam)
{
	int day;
	switch (thang)
	{
	case 1:case 3:case 5:case 7:case 8:case 10:case 12:day = 31; break;
	case 4:case 6:case 9:case 11:day = 30; break;
	default:
		if (KiemTraNamNhuan(nam)) day = 29;
		else day = 28;
	}
	return day;
}

//Kiểm tra n có phải là năm nhuận hay không
int KiemTraNamNhuan(int n)
{
	if (n < 0) return 0;
	if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0))
		return 1;
	return 0;
}

//Hàm tạo ngày trả dự kiến = ngày mượn + k ngày, trong lúc gọi thay k bằng giá trị bất kì(trong bài k=7)
void TaoNgayTraDuKien(int &ngay, int &thang, int &nam, int k)//+7ngay
{
	if (ngay + k <= TinhSoNgayTrongThang(thang, nam))
	{
		ngay = ngay + k;
	}
	else
	{
		ngay = ngay + k;
		while (ngay > TinhSoNgayTrongThang(thang, nam))
		{
			if (thang == 12)
			{
				thang = 1;
				nam++;
				ngay = ngay - TinhSoNgayTrongThang(thang, nam);
			}
			else
			{
				thang++;
				ngay = ngay - TinhSoNgayTrongThang(thang, nam);
			}
		}
	}
}

//Hàm tính số ngày chenh lech
int TinhSoNgayChenhLech(int ngay1, int thang1, int nam1, int ngay2, int thang2, int nam2)
{
	int kq = -1; int tmp = 0;
	if (nam1 == nam2)
	{
		if (thang1 <= thang2)
		{
			for (int i = thang1; i <= thang2 - 1; i++)
				tmp += TinhSoNgayTrongThang(i, nam1);
			kq = tmp - ngay1 + ngay2;
		}
	}
	else if (nam1 < nam2)
	{
		int k = nam2 - nam1;
		for (int i = thang1; i <= 12; i++)
			tmp += TinhSoNgayTrongThang(i, nam1);
		tmp = tmp - ngay1;
		for (int i = 1; i <= thang2 - 1; i++)
			tmp += TinhSoNgayTrongThang(i, nam2);
		tmp = tmp + ngay2;
		if (k>1)
		{
			for (int i = nam1 + 1; i <= nam2 - 1; i++)
			for (int j = 1; j <= 12; j++)
				tmp = tmp + TinhSoNgayTrongThang(j, i);
		}
		kq = tmp;
	}
	return kq;
}