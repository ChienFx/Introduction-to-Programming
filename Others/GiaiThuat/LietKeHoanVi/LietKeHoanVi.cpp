#include "LietKeHoanVi.h"


void XuatKQ(int a[MAX], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d", a[i]);
	printf("\n");
}
void HoanViHaiSo(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
int TimViTriGiamDaiNhat(int a[MAX], int n)
{
	int kq;
	for (int i = n - 1; i >= 0;i--)
	if (i != 0 && a[i]>a[i - 1])
		return i;
	else if (i == 0)
		return 0;
}
int TimViTriNhoNhatTrongDoan(int a[MAX], int n, int vt)//nho nhat trong doan nhung lon hon a[vt-1]
{
	int minIndex = vt;
	for (int i = vt; i < n;i++)
	if (a[i] < a[minIndex]&&a[i]>a[vt-1])
		minIndex = i;
	return minIndex;
}
void DaoNguoc(int a[MAX], int n, int vt)//Dao nguoc mang tu vi tri'vt'
{
	//thuc chat la sap xep mang tang dan
	for (int i = vt; i < n - 1;i++)
	for (int j = i + 1; j < n;j++)
	if (a[i]>a[j])
		HoanViHaiSo(a[i], a[j]);
}
void LietKeHoanVi(int a[MAX], int n)
{
	if (n != 1)
	{
		for (int i = 0; i < n; i++)
		a[i] = i + 1;
		int vtgiam;//luu vi tri doan giam dai nhat
		int minIndex;//luu vi tri phan tu nho nhat trong doan giam dai nhat
		do
		{
			XuatKQ(a, n);
			vtgiam = TimViTriGiamDaiNhat(a, n);
			minIndex = TimViTriNhoNhatTrongDoan(a, n, vtgiam);
			HoanViHaiSo(a[minIndex], a[vtgiam - 1]);
			DaoNguoc(a, n, vtgiam);
		} while (TimViTriGiamDaiNhat(a, n) != 0);
		for (int i = 0; i < n; i++)
			a[i] = n - i;
		XuatKQ(a, n);//xuat bo cuoi cung
	}
	else
	{
		printf("%d", n);
	}
	
}
