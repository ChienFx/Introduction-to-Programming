#include <stdio.h>
#include <conio.h>

int main()
{
	int Money,Ten = 0,Five = 0,Two=0,One=0;
QuayLai:
	printf("\nInput the Money:");
	scanf_s("%d", &Money);
	if (Money < 0)
	{
		printf("\nError!!!");
		goto QuayLai;
	}
	else
	{
		int Temp = Money;
		while (Temp -10 >= 0)
		{
			Temp -= 10;//neu so tien >-10: tien 10; ten +1;
			Ten++;
		}
		while (Temp -5 >= 0)
		{
			Temp -= 5;
			Five++;
		}
		while (Temp - 2 >= 0)
		{
			Temp -= 2;
			Two++;
		}
		while (Temp -1 >= 0)
		{
			Temp -= 1;
			One++;
		}
	}
	printf("\n%d = 10*%d + 5*%d + 2*%d + 1*%d", Money,Ten, Five,Two,One);
	_getch();
	return 0;


}