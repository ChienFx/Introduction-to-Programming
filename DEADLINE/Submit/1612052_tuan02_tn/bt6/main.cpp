#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	float toan, li, hoa, tbm;
	char ten[30];
QuayLai:
	printf("\nNhap ten:");
	gets_s(ten);
	printf("\nNhap diem toan:");
	scanf_s("%f", &toan);

	printf("\nNhap diem li:");
	scanf_s("%f", &li);


	printf("\nNhap diem hoa:");
	scanf_s("%f", &hoa);
	if (toan > 10 || toan<0 || li>10 || li<0 || hoa>10 || hoa < 0)
	{
		printf("\nDiem nhap khong hop le!!!");
		goto QuayLai;
	}
	tbm = (toan + li + hoa) / 3;
	printf("DTB: %0.1f\n", tbm);
	if (tbm >= 9.0)
		printf("\n%s : Xep loai XUAT SAC",ten);
	else if (tbm >= 8)
		printf("\n%s : Xep loai GIOI", ten);
	else if (tbm >= 6.5)
		printf("\n%s : Xep loai KHA",ten);
	else if (tbm >= 5)
		printf("\n%s : Xep loai TRUNG BINH",ten);
	else if (tbm >= 3)
		printf("\n%s : Xep loai YEU",ten);
	else
		printf("\n%s : Xep loai KEM",ten);



	_getch();
	return 0;
}