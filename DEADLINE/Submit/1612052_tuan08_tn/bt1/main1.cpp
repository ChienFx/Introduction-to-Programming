#include "bai1.h"

int main()
{
	int a[MAX],b[MAX],c[MAX];
	int n1 = 0, n2 = 0,n3=0;
	
	NhapMang1Chieu(a, n1,"Nhap so phan tu mang A:");
	NhapMang1Chieu(b, n2,"Nhap so phan tu mang B:");
	//SapXep(a, n1, true);//sap xep tang
	//SapXep(b, n2, false);//sap xep giam
	merge_arrays(a, b, c, n1, n2, n3);
	XuatMang1Chieu(c, n3, "Mang C sau khi gop:");
	_getch();
	return 0;
}