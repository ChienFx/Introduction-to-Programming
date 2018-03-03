#include "ham.h"
//Ham kiem tra so nguyen n co phai so co hang chuc la so chan hay khong
//input: so nguyen n
//ouput : 0 hay 1 truong ung voi phai, khong phai
int KiemTraHangChucChan(int n)
{
	int dem = 0, temp;
	if (n < 0) n = -n;
	temp = n;
	if (n<10) return 0;
	temp = temp / 10;
	if (temp % 2 == 0) return 1;
	return 0;
}
//Tinh Tong cac so co phan chuc chan
//in: mang nguyen a voi n phan tu
//ouput: tong cua so co chuc chan
int TinhTongSoChucChan(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	if (KiemTraHangChucChan(a[i])) s += a[i];
	return s;
}
