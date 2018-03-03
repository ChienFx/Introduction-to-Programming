#include "bai5.h"
void change10to2()
{
	int n;
	printf("\nNhap n theo he co so 10:");
	scanf_s("%d", &n);
	int b[8] = { 0 };
	int j = 7;
	if (n>=0)//n duong
	while (n > 0)
	{
		b[j] = n % 2;
		n = n / 2;
		j--;
	}
	else// so am = bu 2 so duong ( bu->+1)
	{
		n = -n;
		while (n > 0)
		{
			b[j] = n % 2;
			n = n / 2;
			j--;
		}
		//Lay so bu 1
		for (int i = 0; i < 8; i++)
		{
			if (b[i] == 0) b[i] = 1; 
			else b[i] = 0;
		}
		//Lay bu 2: +1
		int nho = 1;
		int i = 7;
		do
		{
			int tong = b[i] + nho;
			if (tong > 1)
			{
				b[i] = 0;
				nho = 1;
			}
			else
			{
				b[i] = 1;
				nho = 0;
			}
			i--;
		} while (i >= 0 && nho > 0);
	}
	printf("\nNhi phan: ");
	for (int i = 0; i < 8; i++)
	{
		printf("%d", b[i]);
	}

}
void change2to10()
{
	int n = 0;
	char b[9];
mrc:
	//nhap theo he nhi phan
	printf("\nNhap n theo he co so 2:");
	for (int i = 0; i <= 7; i++)
	{
		scanf_s("%c", &b[i]);
		if (b[i] > '1' || b[i] < '0')
		{
			printf("\nNhap khong hop le. Moi nhap lai."); 
			goto mrc;
		}
	}
	//gets_s(b);
	
	if (b[0] == '0')//so duong
	{
		for (int i = 0; i <= 7; i++)
		{
			if (b[i] == '1')
				n = n + (int)pow(2.0,7-i);
		}
	}
	printf("He co so 10: %d", n);
}