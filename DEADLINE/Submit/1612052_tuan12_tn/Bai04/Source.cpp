#include"Header.h"

void DocFILE(int &n,MH a[])
{
	FILE *f;
	f = fopen("HOADON.DAT", "rt");
	char *temp;
	n = 0;
	temp = fgets(a[n].TenMH, 100, f);
	if (temp != NULL)
	{
		a[n].TenMH[strlen(a[n].TenMH) - 1] = '\0';
		fscanf(f, "%d\n", &a[n].SoLuong);
		fscanf(f, "%d\n", &a[n].DonGia);
		fscanf(f, "%d\n", &a[n].loai);
		n++;
	}
	while (temp!=NULL)
	{
		temp=fgets(a[n].TenMH, 100, f); 
		if (temp != NULL)
		{
			a[n].TenMH[strlen(a[n].TenMH) - 1] = '\0';
			fscanf(f, "%d\n", &a[n].SoLuong);
			fscanf(f, "%d\n", &a[n].DonGia);
			fscanf(f, "%d\n", &a[n].loai);
			n++;
		}
	}
	fclose(f);
}

void NhapTuBanPhimVaGhiVaoFILE(int &n, MH a[])
{
	FILE *f;
	f = fopen("HOADON.DAT", "at");
	int temp;
	system("cls");
	printf("Nhap so luong hang can them: ");
	scanf("%d", &temp);
	for (int i = 0; i < temp; i++)
	{
		system("cls");
		printf("NHAP/XUAT HANG\n");
		printf("Nhap ten mat hang: ");
		fflush(stdin); gets(a[n].TenMH);
		printf("Nhap so luong: ");
		fflush(stdin); scanf("%d", &a[n].SoLuong);
		while (a[n].SoLuong <= 0)
		{
			printf("Nhap lai so luong: ");
			fflush(stdin); scanf("%d", &a[n].SoLuong);
		}
		printf("Nhap don gia: ");
		fflush(stdin); scanf("%d", &a[n].DonGia);
		while (a[n].DonGia<=0)
		{
			printf("Nhap lai don gia: ");
			fflush(stdin); scanf("%d", &a[n].DonGia);
		}
		printf("Nhap loai hang (0.Nhap/1.Xuat): ");
		fflush(stdin); scanf("%d", &a[n].loai);
		while (a[n].loai != 0 && a[n].loai != 1)
		{
			printf("Nhap loai hang (0.Nhap/1.Xuat): ");
			fflush(stdin); scanf("%d", &a[n].loai);
		}
		fprintf(f, "%s\n", a[n].TenMH);
		fprintf(f, "%d\n", a[n].SoLuong);
		fprintf(f, "%d\n", a[n].DonGia);
		fprintf(f, "%d\n", a[n].loai);
		n++;
	}
	fclose(f);
}

void InRaManHinh(int &n, MH a[])
{
	for (int i = 0; i < n; i++)
	{
		system("cls");
		if (a[i].loai == 0)
			printf("Tieu de: Nhap hang\n");
		else
			printf("Tieu de: Xuat hang\n");
		printf("Ten mat hang: %s\n", a[i].TenMH);
		printf("So luong: %d\n", a[i].SoLuong);
		printf("Don gia: %d\n", a[i].DonGia);
		printf("Thanh tien: %d\n", a[i].SoLuong * a[i].DonGia);
		system("pause");

	}
}