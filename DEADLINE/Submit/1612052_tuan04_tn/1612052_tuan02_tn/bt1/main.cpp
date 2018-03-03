//Giai phuong trinh bac 2
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	float a, b, c;
QuayLai:

	printf("\nNhap 3 he so a, b, c (a khac 0)\na= ");
	scanf_s("%f", &a);
	printf("\nb= ");
	scanf_s("%f", &b);
	printf("\nc= ");
	scanf_s("%f", &c);
	if (a == 0)
	{
		/*printf("\nKhong phai phuong trinh bac 2.\nVui long nhap a khac 0!!");
		goto QuayLai;*/
		if (b == c == 0) printf("\nPhuong trinh co VO SO nghiem.!");
		else if (b == 0 && c != 0)  printf("\nPhuong trinh VO NGHIEM.!");
		else printf("\nPhuong trinh co nghiem x= %0.3f",-c/b);
	}
	else
	{
		float Delta = pow(b,2) - 4 * a*c;
		if (Delta < 0)
			printf("\nPhuong trinh vo nghiem.");
		else
		{
			if (Delta == 0)
				printf("\nPhuong trinh co nghiem kep x = %0.3f", -b / (2 * a));
			else
			{
				printf("\nPhuong trinh co hai nghiem phan biet\nx1= %0.3f\nx2= %0.3f", (-b - sqrt(Delta)) / (2 * a), (-b + sqrt(Delta)) / (2 * a));
			}
		}
	}
	_getch();
	return 0;
}