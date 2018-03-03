#include "func.h"

void nhapDATHUC(DATHUC &P)
{
	//DATHUC P;
	do
	{
		printf("\nDA THUC:\nNhap so mu n:");
		scanf_s("%d", &P.n);
	} while (P.n < 0);
	for (int i = P.n; i >= 0; i--)
	{
		float tmp;
		printf("\nNhap a[%d]: ", i);
		scanf_s("%f", &tmp);
		P.a[i] = tmp;
	}
}

void xuatDATHUC(DATHUC P)
{
	if (P.n < 0) printf(" Empty !!");
	else
	{
	printf("\nDa thuc: ");
	if (P.a[P.n] != 0)
		printf(" %0.2fx^%d ", P.a[P.n], P.n);

	for (int i = (P.n)-1; i >=0; i--)
		if (P.a[i] > 0)
			printf(" + %0.2fx^%d", P.a[i], i);
		else if (P.a[i] < 0)
			printf(" - %0.2fx^%d", -P.a[i], i); //xu li cai so am cho dep thoi
		else 
			printf("");//truong hop p.a[i] = 0 thi khoi xuat 
	}
}

DATHUC hieu(DATHUC P1, DATHUC P2)// p1-p2
{
	DATHUC P;
	P.n = (P1.n>P2.n) ? P1.n : P2.n;
	int i = 0, j = 0, k = 0;

	while (i <= P1.n && j <= P2.n)
	{
		P.a[k] = P1.a[i] - P2.a[j];
		k++; i++; j++;
	}
	if (i > P1.n)//P1 co bac nho hon P2
	{
		for (int j = i; j <= P.n; j++)
			P.a[j] = -P2.a[j]; //
	}
	else if (j > P2.n)//P1 co bac nho hon P2
	{
		for (int i = j; i <= P.n; i++)
			P.a[i] = P1.a[i];
	}
	int kt = 1; //kiem tra da thuc P co rong khong ( P1-P2 = 0)
	for (int i = P.n; i >= 0;i--)
	if (P.a[i] != 0)
	{
		kt = 0;
		P.n = i;
		break;
	}
	//kiem tra thu P co bang rong hay khong
	if (kt == 1) 
		P.n = -1;
	return P;
}
DATHUC tong(DATHUC P1, DATHUC P2)// p1+p2
{
	DATHUC P;
	P.n = (P1.n > P2.n) ? P1.n : P2.n;
	int i = 0, j = 0, k = 0;
	while (i <= P1.n && j <= P2.n)
	{
		P.a[k] = P1.a[i] + P2.a[j];
		k++; i++; j++;
	}
	if (i > P1.n)//P1 co bac nho hon P2
	{
		for (int j = i; j <= P.n; j++)
			P.a[j] = P2.a[j]; //
	}
	else if (j > P2.n)//P1 co bac nho hon P2
	{
		for (int i = j; i <= P.n; i++)
			P.a[i] = P1.a[i];
	}
	return P;
}

DATHUC tich(DATHUC P1, DATHUC P2)
{
	DATHUC P;
	P.n = P1.n + P2.n;
	DONTHUC arr[100];
	int k = 0;
	for (int i = P1.n; i >= 0; i--)
	for (int j = P2.n; j >= 0; j--)
	{
		arr[k].a = P1.a[i] * P2.a[j];
		arr[k].n = i + j;
		k++;
	}
	for (int i = 0; i <= P.n; i++)
	{
		float tmp = 0;
		for (int j = 0; j <= k;j++)
		if (arr[j].n == i)
		{
			tmp = tmp + arr[j].a;
		}
		P.a[i] = tmp;//truog hop khong xay ra if thi van gan cho 0
	}
	return P;
}

DATHUC ThuongSo(DATHUC BiChia, DATHUC Chia)
{
	DATHUC Thuong, Du;
	DONTHUC Arr[100];
	if (BiChia.n < Chia.n)
	{
		Thuong.n = -1;
		Du = BiChia;
	}
	else
	{
		DATHUC P1 = BiChia;
		int i = 0;
		while (P1.n - Chia.n >= 0 || P1.n > 0)//so mu cao nhat con lon hon so chia
		{
			Arr[i].a = P1.a[P1.n] / Chia.a[Chia.n]; // 2 so dau chia nhau
			Arr[i].n = P1.n - Chia.n;
			DATHUC Tam = TichDonThucVaDaThuc(Arr[i], Chia);
			P1 = hieu(P1, Tam);
			i++;
		}
		Du = P1; //So du
		Thuong.n = i - 1;
		int tmp = Thuong.n;
		for (int j = 0; j <= Thuong.n; j++)// Xuat Thuong So
		{
			Thuong.a[tmp] = Arr[j].a;
			tmp--;
			//xuatdonthuc(Arr[j]); printf("    ");
		}
	}
	return Thuong;
}

DATHUC SoDu(DATHUC BiChia, DATHUC Chia)
{
	DATHUC Thuong, Du;
	DONTHUC Arr[100];
	if (BiChia.n < Chia.n)
	{
		Thuong.n = -1;
		Du = BiChia;
	}
	else
	{
		DATHUC P1 = BiChia;
		int i = 0;
		while (P1.n - Chia.n >= 0 || P1.n > 0)//so mu cao nhat con lon hon so chia
		{
			Arr[i].a = P1.a[P1.n] / Chia.a[Chia.n]; // 2 so dau chia nhau
			Arr[i].n = P1.n - Chia.n;
			DATHUC Tam = TichDonThucVaDaThuc(Arr[i], Chia);
			P1 = hieu(P1, Tam);
			i++;
		}
		Du = P1; //So du
		//Thuong.n = i - 1;
		//int tmp = Thuong.n;
		//for (int j = 0; j <= Thuong.n; j++)// Xuat Thuong So
		//{
		//	Thuong.a[tmp] = Arr[j].a;
		//	tmp--;
		//	//xuatdonthuc(Arr[j]); printf("    ");
		//}
	}
	return Du;
}

