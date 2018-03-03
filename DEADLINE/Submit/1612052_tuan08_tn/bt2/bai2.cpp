#include "bai2.h"

void SetZeroArray(int a[MAX], int n)
{
	for (int i = 0; i < n; i++)
		a[i] = 0;
}

void XuatMang(int a[MAX], int n,char chuoi[255])
{
	printf("\n%s ",chuoi);
	for (int i = 0; i < n; i++)
		printf("%5d", a[i]);
}

void XepBi(int TongBi, int a[MAX], int n)
{
	int BiNguyen = TongBi / n;//so bi moi nguoi it nhat phai co, neu so bi<so nguoi thi binguyen =0;
	int BiDu = TongBi % n;//so bi du ra sau khi chia deu cho moi nguoi

	for (int i = 0; i < n; i++)
		a[i] = BiNguyen;//chia deu truoc da
	//
	//int chay[MAX]; //de thuc hien "BiDu" lan vong lap
	//for (int i = 1; i <= BiDu; i++)
	//	chay[i] = i;
	int SoLanLap = BiDu;
	for (int i = 1; i <= SoLanLap; i++)
	{


		BiDu--;
	}


}