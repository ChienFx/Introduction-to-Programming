#include"Header.h"

void DocFILE(int &n, int a[])
{
	FILE  *f;
	f = fopen("MANG.txt", "rt");
	if (f == NULL)
	{
		printf("Chua co tep MANG.txt\nVui long tao tep\n");
		system("pause");
	}
	else
	{
		fscanf(f, "%d\n", &n);
		for (int i = 0; i < n; i++)
			fscanf(f, "%d", &a[i]);
		fclose(f);
	}
}

int DemSoLuongSoChinhPhuong(int n, int a[])
{
	int cout = 0;
	for (int i = 0; i < n; i++)
	{
		int t = sqrt(a[i]*1.0);
		if (t*t == a[i])
			cout++;
	}
	return cout;
}

int TimSoChinhPhuongNhoNhat(int n, int a[])
{
	int i = 0;
	for ( i = 0; i < n; i++)
	{
		int t = sqrt(a[i] * 1.0);
		if (t*t == a[i])
			break;
	}
	if (i == n)
		return -1;
	int min = a[i];
	for (i++; i < n; i++)
	{
		int t = sqrt(a[i] * 1.0);
		if (t*t == a[i] && min>a[i])
			min = a[i];
	}
	return min;
}

void GhiFILE(int n, int a[])
{
	FILE *f;
	f = fopen("KETQUA.txt", "wt");
	fprintf(f, "%d\n%d", DemSoLuongSoChinhPhuong(n, a), TimSoChinhPhuongNhoNhat(n, a));
	fclose(f);
}