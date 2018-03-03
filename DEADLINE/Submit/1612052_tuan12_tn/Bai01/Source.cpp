#include"Header.h"

void DocFILE(int &n, HeSo &hs)
{
	FILE *f;
	f = fopen("PTB2.txt", "rt");
	if (f == NULL)
	{
		printf("Chua co tep PTB2.txt\nVui long tao tep\n");
		system("pause");
	}
	else
	{
		fscanf(f, "%d\n", &n);
		for (int i = 0; i < n; i++)
			fscanf(f, "%f %f %f\n", &hs.a[i], &hs.b[i], &hs.c[i]);
		fclose(f);
	}
}

int TinhNghiem(HeSo hs,int vt,float &x1,float &x2)
{
	if (hs.a[vt] == 0)
	{
		if (hs.b[vt] == 0)
		{
			if (hs.c[vt] == 0)
				return -1;
			return 0;
		}
		x1 = -hs.c[vt] * 1.0 / hs.b[vt];
		return 1;
	}
	float d;
	d = hs.b[vt] * hs.b[vt] - 4 * hs.a[vt] * hs.c[vt];
	if (d < 0)
		return 0;
	if (d == 0)
	{
		x1 = -hs.b[vt] / (2.0*hs.a[vt]);
		return 1;
	}
	x2 = (-hs.b[vt] + sqrt(d)) / (2.0*hs.a[vt]);
	x1 = (-hs.b[vt] -sqrt(d))/ (2.0*hs.a[vt]);
	return 2;
}

void GhiFILE(int &n, HeSo &hs)
{
	FILE *f;
	f = fopen("GIATPTB2.txt", "wt");
	for (int i = 0; i < n; i++)
	{
		float x1, x2;
		int temp = TinhNghiem(hs, i, x1, x2);
		if (abs(x1) == 0)
			x1 = 0;
		if (abs(x2) == 0)
			x2 = 0;
		GhiPT(f, hs, i);
		switch (temp)
		{
			case -1: fprintf(f, "VO SO NGHIEM\n"); break;
			case 0: fprintf(f, "VO NGHIEM\n"); break;
			case 1: fprintf(f, "x = %g\n", x1); break;
			case 2: fprintf(f, "x1 = %g, x2 = %g\n", x1, x2); break;
		}
	}
	fclose(f);
}

int GhiPT(FILE *f, HeSo hs, int vt)
{
	if (hs.a[vt] == 0 && hs.b[vt] == 0 && hs.c[vt] == 0)
	{
		fprintf(f, "0 = 0; ");
		return 0;
	}

	//ghi he so mu 2
	if (hs.a[vt] > 0)
	{
		if (hs.a[vt] == 1)
			fprintf(f, "x^2");
		else
			fprintf(f, "%gx^2", hs.a[vt]);
	}
	else if (hs.a[vt] < 0)
	{
		if (hs.a[vt] == -1)
			fprintf(f, "-x^2");
		else
			fprintf(f, "%gx^2", hs.a[vt]);
	}
	//ghi he so mu 1
	if (hs.b[vt]>0)
	{
		if (hs.a[vt] != 0)
			fprintf(f, " + ");
		if (hs.b[vt] == 1)
			fprintf(f, "x");
		else
			fprintf(f, "%gx", hs.b[vt]);
	}
	else if (hs.b[vt] < 0)
	{
		if (hs.a[vt] != 0)
		{
			if (hs.b[vt] == -1)
				fprintf(f, " - x");
			else
				fprintf(f, " - %gx", abs(hs.b[vt]));
		}
		else
		{
			if (hs.b[vt] == -1)
				fprintf(f, "-x");
			else
				fprintf(f, "%gx", hs.b[vt]);
		}
	}
	//ghi he so khong mu
	if (hs.c[vt]>0)
	{
		if (hs.a[vt] != 0 || hs.b[vt] != 0)
			fprintf(f, " + ");
		fprintf(f, "%g", hs.c[vt]);
	}
	else if (hs.c[vt] < 0)
	{
		if (hs.a[vt] != 0 || hs.b[vt] != 0)
			fprintf(f, " - %g", abs(hs.c[vt]));
		else
			fprintf(f, "%g", hs.c[vt]);
	}
	fprintf(f, " = 0; ");
	return 0;
	
}