#include <stdio.h>
#include <conio.h>
#include <math.h>
void InputTime(float&, float&, float&);
int TestTime(float, float, float);
float ChangeTime(float,float,float);

int main()
{

	float Ngay, Gio, Phut, Giay;
	float Gio1, Phut1, Giay1, Gio2, Phut2, Giay2,tempgiay=0,tempphut=0,tempgio=0;
QuayLai:
	printf("\n\nNhap thoi gian thu 1:");
	InputTime(Gio1, Phut1, Giay1);
	printf("\n\nNhap thoi gian thu 2:");
	InputTime(Gio2, Phut2, Giay2);

	if (TestTime(Gio1, Phut1, Giay1) != 1 || TestTime(Gio2, Phut2, Giay2) != 1)
	{
		printf("\nThoi gian khong hop le.Moi nhap lai!!!"); goto QuayLai;
	}
	else
	{
		float Temp = ChangeTime(Gio1, Phut1, Giay1) + ChangeTime(Gio2, Phut2, Giay2);
		Gio = (int)Temp / 3600;
		Temp -= (int)Gio * 3600;
		Phut = (int)Temp / 60;
		Giay = (int)Temp - (int)Phut * 60;
		printf("\nTong: %0.0f Gio %0.0f Phut %0.0f Giay", Gio, Phut, Giay);

		Temp = abs(ChangeTime(Gio1, Phut1, Giay1) - ChangeTime(Gio2, Phut2, Giay2));
		Gio = (int)Temp / 3600;
		Temp -= (int)Gio * 3600;
		Phut = (int)Temp / 60;
		Giay = (int)Temp - (int)Phut * 60;
		printf("\nHieu: %0.0f Gio %0.0f Phut %0.0f Giay", Gio, Phut, Giay);
	}
	_getch();
	return 0;
}


void InputTime(float&Gio, float&Phut, float&Giay)
{
	printf("\nNhap Gio:");
	scanf_s("%f", &Gio);
	printf("\nNhap Phut:");
	scanf_s("%f", &Phut);
	printf("\nNhap Giay:");
	scanf_s("%f", &Giay);
}
int TestTime(float Gio, float Phut, float Giay)
{
	if (fmod(Gio, 1) != 0 || fmod(Phut, 1) != 0 || fmod(Giay, 1) != 0 || Gio < 0 || Gio > 24 || Phut > 60 || Phut < 0 || Giay < 0 || Giay > 60)
		return 0;
	return 1;
}
float ChangeTime(float Gio, float Phut, float Giay)
{
	return Gio * 3600 + Phut * 60 + Giay;
}