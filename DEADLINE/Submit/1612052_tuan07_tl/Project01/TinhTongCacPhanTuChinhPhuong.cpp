#include "ham.h"
//Kiem tra so n co phai so chinh phuong hay khoong
//tra ra 0 hay 1
int KiemTraChinhPhuong(int n)
{
	if (n<0) return 0;
	float tmp = sqrt(n + 0.0);
	if ((fmod(tmp, 1) == 0))
		return 1;
	return 0;
}
//Tinh tong cac so chinh phuong
//in: mang nguyen a co n phan tu
//out: tong so chih phuong
int TinhTongCacPhanTuChinhPhuong(int a[], int n)
{
	int S = 0;
	for (int i = 0; i < n; i++)
	if (KiemTraChinhPhuong(a[i]))
		S += a[i];
	return S;
}