#include "bai2.h"


void NhapPhanSo(phanso &p, char chuoi[255])
{
	printf("%s", chuoi);
	do
	{
		printf(" - Tu so:");
		scanf_s("%d", &p.tu);
		printf(" - Mau so:");
		scanf_s("%d", &p.mau);
	} while (p.mau == 0);
}

void XuatPhanSo(phanso p, char chuoi[255])
{

	printf("%s", chuoi);
	if (p.tu == 0)
		printf("0");
	else if (p.tu == p.mau)
		printf("1");
	else if (p.mau == 1)
		printf("%d", p.tu);
	else
		printf("%d/%d", p.tu, p.mau);
}

int TimUSCNLN(int a, int b)
{
	if (a<0)a = -a;
	if (b<0)b = -b;
	if (a == 0 || b == 0)
		return 1;
	while (a != b)
	{
		(a > b) ? a -= b : b -= a;
	}
	return a;
}

void RutGonPhanSo(phanso &p)
{
	int tmp = TimUSCNLN(p.tu, p.mau);
	p.tu /= tmp;
	p.mau /= tmp;
}

phanso operator+(phanso p1, phanso p2)
{
	phanso tong;// = p1;
	tong.tu = p1.tu*p2.mau + p2.tu*p1.mau;
	tong.mau = p1.mau*p2.mau;
	RutGonPhanSo(tong);
	return tong;
}
phanso operator-(phanso p1, phanso p2)
{
	phanso t1 = p1, t2 = p2, hieu;
	p2.tu = -p2.tu;
	hieu = p1 + p2;
	return hieu;
}

phanso operator*(phanso p1, phanso p2)
{
	phanso tich = p1;
	tich.tu = p1.tu*p2.tu;//
	tich.mau = p1.mau*p2.mau;
	RutGonPhanSo(tich);
	return tich;
}
phanso operator/(phanso p1, phanso p2)
{
	phanso thuong;

	thuong.tu = p1.tu*p2.mau;//
	thuong.mau = p1.mau*p2.tu;
	RutGonPhanSo(thuong);
	return thuong;
}

int SoSanhHaiPhanSo(phanso p1, phanso p2)
{
	float tmp1 = (float)p1.tu / p1.mau;
	float tmp2 = (float)p2.tu / p2.mau;
	if (tmp1 > tmp2)
		return 1;
	if (tmp1 < tmp2)
		return -1;
	return 0;
}

int KiemTraDuong(phanso p)
{
	float tmp = (float)p.tu / p.mau;
	if (tmp>0)
		return 1;
	else if (tmp == 0)
		return -1;
	return 0;
}

//////////
void NhapMangPhanSo(phanso a[MAX], int n, char chuoi[255])
{
	printf("%s", chuoi);
	for (int i = 0; i < n; i++)
	{
		printf("\nNhap phan so A[%d]:\n", i);
		NhapPhanSo(a[i], " ");
	}
}
void XuatMangPhanSo(phanso a[MAX], int n, char chuoi[255])
{
	printf("%s", chuoi);
	for (int i = 0; i < n; i++)
	{
		XuatPhanSo(a[i], "  ");
	}
}
void RutGonMangPhanSo(phanso a[MAX], int n)
{
	
	for (int i = 0; i < n; i++)
	{
		RutGonPhanSo(a[i]);
	}
}

phanso TimPhanSoDuongNhoNhat(phanso a[MAX], int n)
{
	phanso min;
	int minIndex=-1;
	for (int i = 0; i < n; i++)
	{
		if (KiemTraDuong(a[i]))
			minIndex = i;
		break;
	}
	for (int i = minIndex + 1; i < n;i++)
	if (KiemTraDuong(a[i]) && SoSanhHaiPhanSo(a[i], a[minIndex]) == -1)//=-1 la a[min]<a[i]
		minIndex = i;
	min = a[minIndex];
	return min;
}

phanso TimPhanSoAmLonNhat(phanso a[MAX], int n)
{
	phanso max;
	int maxIndex = -1;
	for (int i = 0; i < n; i++)
	{
		if (KiemTraDuong(a[i])==0)
			maxIndex = i;
		break;
	}
	for (int i = maxIndex + 1; i < n; i++)
	if (KiemTraDuong(a[i])==0 && SoSanhHaiPhanSo(a[i], a[maxIndex]) == 1)//=1 la a[max]>a[i]
		maxIndex = i;
	max = a[maxIndex];
	return max;
}

void SapXepPhanSoChoMauGiamDan(phanso a[MAX], int n)
{
	for (int i = 0; i < n - 1;i++)
	for (int j = i + 1; j < n;j++)
	if (a[i].mau < a[j].mau)
	{
		phanso tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}