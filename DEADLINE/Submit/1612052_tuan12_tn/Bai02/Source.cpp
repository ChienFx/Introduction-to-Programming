#include"Header.h"

void DocFILE(int &n, float a[])
{
	FILE *f;
	f = fopen("DATHUC.txt", "rt");
	if (f == NULL)
	{
		printf("Chua co tep DATHUC.txt\nVui long tao tep\n");
		system("pause");
	}
	else
	{
		fscanf(f, "%d\n", &n);
		for (int i = 0; i <= n; i++)
			fscanf(f, "%f", &a[i]);
		fclose(f);
	}
}

float TinhGiaTriDaThuc(int n, float a[],float &x)
{
	system("cls");
	float kq=0;
	printf("Nhap gia tri x = ");
	scanf("%f", &x);
	for (int i = 0; i <= n; i++)
		kq = kq + a[i] * pow(x, i);
	return kq;
}

void DaoHam(int &n, float a[])
{
	n--;
	for (int i = 0; i <= n; i++)
		a[i] = (i + 1)*a[i + 1];
}

void GhiDaThuc(FILE *f, int n, float a[])
{
	int t = 0;
	if (a[0] != 0)
	{
		fprintf(f, " %g", a[0]);
		t = 1;
	}
	if (a[1] > 0)
	{
		if (t)
			fprintf(f, " +");
		if (a[1] == 1)
			fprintf(f, " x");
		else
			fprintf(f, " %gx", a[1]);
		t = 1;
	}
	else if (a[1]<0)
	{
		if (a[1] == -1)
			fprintf(f, " - x");
		else
			fprintf(f, " - %gx", abs(a[1]));
		t = 1;
	}
	for (int i = 2; i <= n; i++)
	{
		if (a[i] > 0)
		{
			if (t)
				fprintf(f, " +");
			if (a[i] == 1)
				fprintf(f, " x^%d", i);
			else
				fprintf(f, " %gx^%d", a[i], i);
			t = 1;
		}
		else if (a[i]<0)
		{
			if (a[i] == -1)
				fprintf(f, " - x^%d", i);
			else
				fprintf(f, " - %gx^%d", abs(a[i]), i);
			t = 1;
		}
	}
}

void GhiFILE(int n, float a[])
{
	FILE *f; float x; int t = 0;
	f = fopen("KETQUA.txt", "wt");
	float kq = TinhGiaTriDaThuc(n, a, x);
	fprintf(f, "f(%g) = %g\n",x,kq);
	DaoHam(n, a);
	fprintf(f, "f'(x) =");
	GhiDaThuc(f, n, a);
	fclose(f);
}