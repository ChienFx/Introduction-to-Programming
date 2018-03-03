//Tinh tien taxi
#include <stdio.h>
#include <conio.h>

int main()
{
	float n, price=0;
QuayLai:

	printf("\nNhap do dai quang duong:");
	scanf_s("%f", &n);
	if (n <= 0)
	{
		printf("\nNhap khong hop le.");
		goto QuayLai;
	}
	else if (n <= 1) price = n * 15;//sau cung nho nhan the 1000 => 15000
	else if (n > 1 && n < 5) price = 1 * 15 + (n - 1)*13.5;
	else price = 1 * 15 + 4 * 13.5 + (n - 5) * 11;
	if (n>=120)
	{
		price -= price*0.1;//giam 10%
	}
	printf("\nGia Tien: %0.1f", price * 1000);


	_getch();
	return 0;
}