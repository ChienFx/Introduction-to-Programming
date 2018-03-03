#include "bai1.h"

void NhapMang(int a[], int n)
{
	srand((unsigned int)time(0));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 100-10;

}
void XuatMang(int a[], int n)
{
	printf("\nMang: \n");
	for (int i = 0; i < n; i++)
		printf("%-3d  ", a[i]);
	printf("\n");
}

int TimSoChanLonNhat(int a[], int n)
{
	int chanlon;//
	for (int i = 0; i < n;i++)
	if (a[i] % 2 == 0)
	{
		chanlon = a[i];
		for (int j = i + 1; j < n;j++)
		if (a[j] % 2 == 0 && a[j]>chanlon)
			chanlon = a[j];
		break;
	}
	return chanlon;
}
int TimSoLeNhoNhat(int a[], int n)
{
	int lenho;//
	for (int i = 0; i < n; i++)
	if (a[i] % 2 != 0)
	{
		lenho = a[i];
		for (int j = i + 1; j < n; j++)
		if (a[j] % 2 != 0 && a[j]<lenho)
			lenho = a[j];
		break;
	}
	return lenho;
}

int TinhTongMang(int a[], int n)
{
	int s = 0;
	for (int i = 0; i<n; i ++)
		s = s + a[i];
	return s;
}
float TinhTrungBinhCong(int a[], int n)
{
	return (float)TinhTongMang(a, n) / n;
}
bool KiemTraTonTai(int a[], int n, int x)//kiem tra x co nam trong a khon
{
	for (int i = 0; i < n;i++)
	if (a[i] == x)
		return true;
	return false;
}

int DemTanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n;i++)
	if (a[i] == x)
		dem++;
	return dem;
}

void XoaPhanTuThuI(int a[], int &n, int vitri)
{
	for (int i = vitri; i < n; i++)
		a[i] = a[i + 1];
	n--;
}

void XoaTatCaPhanTuX(int a[], int &n, int x)
{
	for (int i = 0; i < n;i++)
	if (a[i] == x)
		XoaPhanTuThuI(a, n, i);

}

void SapXap(int a[], int n, bool Tang)//1 la tang 0 la giam
{
	for (int i = 0; i < n-1;i++)
	for (int j = i+1; j < n; j++)
	{
		if (Tang == true)
		{
			if (a[i] > a[j])
			{
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
		else
		{
			if (a[i] < a[j])
			{
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}


void ChenPhanTu(int a[], int &n, int x)//truong hop mang da dduoc sap xep
{
	if (x <= a[0])
	{
		n++;
		for (int j = n - 1; j >= 1; j--)
			a[j] = a[j - 1];
		a[0] = x;
	}
	else if (x >= a[n-1])
	{
		n++;
		a[n - 1] = x;
	}
	else
	for (int i = 0; i < n; i++)
	{
		if ((a[i]>=x && a[i + 1] <= x) || (a[i]<=x && a[i + 1]>=x))
		{
			n++; 
			for (int j = n - 1; j >= i + 2;j--)
				a[j] = a[j - 1];
			a[i + 1] = x;
			break;
		}
	}
}

float TinhTrungBinhCongLonhon(int a[], int n, int k)
{
	float s = 0; int dem = 0;

	for (int i = 0; i < n;i++)
	if (a[i] >= k)
	{
		dem++;
		s += a[i];
	}
	return s / dem;
}

void HuyPhanTu(int a[], int &n, int vt, int k)//hủy k phan tu tu vi tri vt
{
	/*for (int i = vt; ;i++)
	for (int j = ; ; j++)*/
	int i = vt, j = vt + k;
	while (i <= vt + n - vt -k&&j < n)
	{
		a[i] = a[j];
		i++; j++;
	}
	n = n - k;
	XuatMang(a, n);
}

void GopMangBvaoATaiK(int a[], int &n1, int b[], int&n2,int k)
{
	int n = n1 + n2;
	int cuoi = n - 1;
	int dau = n1 - 1;
	while (dau >=k)
	{
		a[cuoi] = a[dau];
		dau--;
		cuoi--;
	}
	n1 = n;
	int j = 0;
	for (int i = k; i <= k + n2-1; i++)
	{
		a[i] = b[j];
		j++;
	}
}

void XoaPhanTuBiTrung(int a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i;j++)
		if (a[i] == a[j])//nghĩa là trước đã đó xuất hiện giá trị a[j] nên xóa a[i] đi
			XoaPhanTuThuI(a, n, i);
	}
}
void GopXenKe(int a[], int n1, int b[], int n2)
{
	int c[2000];
	int n = n1 + n2;
	int vitri1 = 0;
	int vitri2 = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			c[i] = a[vitri1++];
		}
		else c[i] = b[vitri2++];
	}
	XoaPhanTuBiTrung(a, n);
	XuatMang(c, n);	
}
bool KiemTraMangConTang(int a[], int dau, int cuoi)
{
	for (int i = dau; i <= cuoi;i++)
	if (a[i] >= a[i + 1])
		return false;
	return true;
}

int DemSoMangConTangVaXuatMangConTangDaiNhat(int a[], int n)
{
	int dem = 0;
	int dau = 0, cuoi = 0;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i+1; j < n;j++)
		if (KiemTraMangConTang(a, i, j)) dem++;
		/*if (KiemTraMangConTang(a,i,j)==true)
		{
			if (j - i > cuoi - dau)
			{
				dau = i; cuoi = j;
			}
			dem++;
		}*/
	}/*
	printf("\nMang con tang dai nhat:");
	for (int i = dau; i <= cuoi; i++)
		printf("%d  ", a[i]);*/
	return dem;
}

bool KiemTraMangDoiXung(int a[], int n)
{
	int dau = 0, cuoi = n - 1;
	while (dau < cuoi)
	{
		if (a[dau] != a[cuoi])
			return false;
		dau++; cuoi--;
	}
	return true;
}