#include "bai5.h"

void NhapMang2Chieu(int a[][MAX], int dong, int cot)
{
	srand(time(0));
	for (int i = 0; i < dong; i++)
	for (int j = 0; j < cot; j++)
		a[i][j] = rand() % 100 + 1;
}

void XuatMang2Chieu(int a[][MAX], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
			printf("%5d", a[i][j]);
		printf("\n\n");
	}
}

int KiemTraDoiXung(int n)
{
	int Temp = n % 10, t2 = n;
	n /= 10;
	while (n > 0)
	{
		Temp = Temp * 10 + (n % 10);
		n /= 10;
	}
	if (t2 == Temp) return 1;
	return 0;
}
int DemSoDuongDoiXungDongK(int a[][MAX], int dong, int cot,int k)
{
	int dem = 0;
//	for (int i = 0; i < dong; i++)
	for (int j = 0; j < cot; j++)
	if (a[k][j]>0 && KiemTraDoiXung(a[k][j]) == 1)
		dem++;
	return dem;
}
int KiemTraSNT(int n)
{
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n + 0.0); i++)
	if (n%i == 0) return 0;
	return 1;
}
int DemSoSNTDongK(int a[][MAX], int dong, int cot,int k)
{
	int dem = 0;
	//for (int i = 0; i < dong; i++)
	for (int j = 0; j < cot; j++)
	if (a[k][j]>0 && KiemTraSNT(a[k][j]) == 1)
		dem++;
	return dem;
}
int KiemTraChinhPhuong(int n)
{
	float tmp = sqrt(n + 0.0);
	if (fmod(tmp, 1) == 0) return 1;
	return 0;
}
int DemSoChinhPhuongDongK(int a[][MAX], int dong, int cot,int k)
{
	int dem = 0;
	//for (int i = 0; i < dong; i++)
	for (int j = 0; j < cot; j++)
	if (a[k][j]>0 && KiemTraChinhPhuong(a[k][j]) == 1)
		dem++;
	return dem;
}
int KiemTraHoanThien(int n)// hàm tính tổng của các ước, trừ chính nó
{
	int s = 0;
	for (int i = 1; i < n; i++)
	if (n % i == 0)
		s += i;
	if (s == n) return 1;
	return 0;
}
int DemSoHoanThienDongK(int a[][MAX], int dong, int cot,int k)
{
	int dem = 0;
	//for (int i = 0; i < dong; i++)
	for (int j = 0; j < cot; j++)
	if (a[k][j]>0 && KiemTraHoanThien(a[k][j]) == 1)
		dem++;
	return dem;
}