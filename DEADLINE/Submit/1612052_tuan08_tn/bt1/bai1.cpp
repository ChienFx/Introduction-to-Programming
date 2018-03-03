#include "bai1.h"

void NhapMang1Chieu(int a[MAX], int &n,char chuoi[255])
{
	do
	{
		printf("\n%s", chuoi);//
		scanf_s("%d", &n);
	} while (n<1 || n>MAX);

	srand((unsigned int)time(0));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 100 - 10;

}
void XuatMang1Chieu(int a[MAX], int n,char chuoi[255])
{
	printf("\n%s",chuoi);
	for (int i = 0; i < n; i++)
		printf("%-3d  ", a[i]);
	printf("\n");
}
void SapXep(int a[], int n, bool tang)//tang la TRUE, giam la FALSE
{
	for (int i = 0; i < n - 1;i++)
	for (int j = i + 1; j < n; j++)
	{
		if (tang == true)//sap xep tang
		{
			if (a[i]>a[j])
			{
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
		else//sap xep giam
		{
			if (a[i]<a[j])
			{
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}
void merge_arrays(int a[MAX], int b[MAX], int c[MAX], int n1, int n2, int &n3)
{
	bool KieuSX;
	KieuSX = true;
	SapXep(a, n1, KieuSX);//sap xep mang a tang dan
	SapXep(b, n2, KieuSX);//sap xep mang b tang dan
	XuatMang1Chieu(a, n1, "Mang A sau khi xep TANG:");
	XuatMang1Chieu(b, n2, "Mang B sau khi xep TANG:");
	n3 = n1;
	for (int i = 0; i < n3; i++)
		c[i] = a[i];
	for (int i = 0; i < n2; i++)
	{
		ChenPhanTu(b[i], c, n3, KieuSX);
		//ChenPhanTu(b[i], c, n3, KieuSX);
	}

}
void ChenPhanTu(int x,int a[MAX], int &n,bool tang)//chen x vao mang da duoc sap xep
{
	if (tang == true)//mang tang
	{
		if (x >= a[n - 1])
		{
			n++;
			a[n - 1] = x;
		}
		else if (x <= a[0])
		{
			n++;
			for (int j = n - 1; j >= 1; j++)
				a[j] = a[j - 1];
			a[0] = x;
		}
		else
		{
			for (int i = 0; i < n-1;i++)
			if (a[i] <= x && x<= a[i + 1])
			{
				n++;
				for (int j = n - 1; j >= i+1; j--)
					a[j] = a[j - 1];
				a[i+1] = x;
				break;
			}
		}
	}
	else//mang giam dan
	{
		if (x <= a[n - 1])
		{
			n++;
			a[n - 1] = x;
		}
		else if (x >= a[0])
		{
			n++;
			for (int j = n - 1; j >= 1; j++)
				a[j] = a[j - 1];
			a[0] = x;
		}
		else
		{
			for (int i = 0; i < n - 1; i++)
			if (a[i] >= x && x >= a[i + 1])
			{
				n++;
				for (int j = n - 1; j >= i + 1; j--)
					a[j] = a[j - 1];
				a[i + 1] = x;
				break;
			}
		}
	}
}
