#include <stdio.h>
#include <conio.h>
#include <math.h>

int SoChuSo(int);
int LayCuoi(int, int);
void Doc1(int);
void Doc2(int);
void Doc3(int);
void Doc4(int);
void Doc5(int);
void Doc6(int);


int main()
{
	int n;
	printf("\nNhap so: ");
	scanf_s("%d", &n);
	switch (SoChuSo(n))
	{
	case 1: Doc1(n); break;
	case 2: Doc2(n); break;
	case 3: Doc3(n); break;
	case 4: Doc4(n); break;
	case 5: Doc5(n); break;
	case 6: Doc6(n); break;

	default: printf("\nSo to qua e doc khog noi :3 ^^.");
		break;
	}
	//printf("%d", LayCuoi(1234,3));
	_getch();
	return 0;
}

int SoChuSo(int n)
{
	int dem = 0;
	while (n > 0)
	{
		n = n / 10;
		dem++;
	}
	return dem;
}

int LayCuoi(int n,int i)
{
	int j = 1,s = n % 10;
	n = n / 10;
	while (j <= i-1)
	{
		s = pow(10.0,j) * (n % 10) + s;
		j++;
		n /= 10;
	}
	return s;
}

void Doc1(int n)//n=[0..9]
{
	switch (n)
	{
	case 9: printf("Chin"); break;
	case 8: printf("Tam"); break;
	case 7: printf("Bay"); break;
	case 6: printf("Sau"); break;
	case 5: printf("Nam"); break;
	case 4: printf("Bon"); break;
	case 3: printf("Ba"); break;
	case 2: printf("Hai"); break;
	case 1: printf("Mot"); break;
	default:printf("Muoi");break;//TH tổng quát, xét số 0 sau.
	}
}

void Doc2(int n)
{
	if (n == 10) printf("Muoi");
	else if (n > 10 && n < 20)
	{
		printf(" Muoi ");
		Doc1(n % 10);
	}
	else if (n % 10 == 0)
	{
		Doc1(n / 10);
		printf(" Muoi ");
	}
	else
	{
		Doc1(n / 10);
		printf(" Muoi ");
		if (LayCuoi(n, 1) == 5)printf("Lam.");
		else
		Doc1(n % 10);

	}
}

void Doc3(int n)
{

	if (n % 100 == 0)
	{
		Doc1(n / 100);
		printf(" Tram ");
	}
	else
	{
		Doc1(n / 100);
		printf(" Tram ");
		if (LayCuoi(n, 2) / 10 == 0)
		{
			printf("Linh ");
			Doc1(LayCuoi(n, 1));
		}
		else
		Doc2(n-(n/100)*100);
	}
}

void Doc4(int n)
{

	if (n % 1000 == 0)
	{
		Doc1(n / 1000);
		printf(" Nghin ");
	}
	else
	{
		Doc1(n / 1000);
		printf(" Nghin ");

		if ((LayCuoi(n, 3)) / 100 == 0) // TH	chu so hang tram bang 0
		{
			printf("Khong Tram ");
			Doc2(LayCuoi(n,2));
		}
		else
			Doc3(n - (n / 1000) * 1000);

	}
}

void Doc5(int n)
{
	if (n % 10000 == 0)
	{
		Doc2(n / 1000);
		printf("Nghin.");
	}
	else
	{
		Doc2(n / 1000);
		printf(" Nghin ");
		if ((LayCuoi(n, 3)) / 100 == 0) // TH	chu so hang tram bang 0
		{
			printf("Khong Tram ");
			if (LayCuoi(n, 2) / 10 == 0)
			{
				printf(" Linh ");
				Doc1(LayCuoi(n, 1));
			}
			else
			Doc2(LayCuoi(n, 2));
		}
		else Doc3(LayCuoi(n, 3));
	}
}

void Doc6(int n)
{
	if (n % 100000 == 0)
	{
		Doc3(n / 1000);
		printf("Nghin.");
	}
	else
	{
		Doc3(n / 1000);
		printf(" Nghin ");
		if ((LayCuoi(n, 3)) / 100 == 0) // TH	chu so hang tram bang 0
		{
			printf("Khong Tram ");
			if (LayCuoi(n, 2) / 10 == 0)
			{
				printf(" Linh ");
				Doc1(LayCuoi(n, 1));
			}
			else
			Doc2(LayCuoi(n, 2));
		}
		else Doc3(LayCuoi(n, 3));
	}

}
