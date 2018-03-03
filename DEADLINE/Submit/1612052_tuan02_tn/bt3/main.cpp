
#include <stdio.h>
#include <conio.h>

int main()
{
	float a, b, c;
	printf("\na=");
	scanf_s("%f", &a);
	printf("\nb=");
	scanf_s("%f", &b);
	printf("\nc=");
	scanf_s("%f", &c);

	if (a + b > c && a + c > b && b + c > a)
	{
		printf("\nBA canh co tao thanh tam giac.");
		if (a == b && a == c && b == c) printf("\nTam giac DEU");
		else if (a == b || a == c || b == c)
		{
			if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == b*b + a*a)
				printf("\nTam giac Vuong CAN");
			else printf("\nTam giac CAN.");
		}
		else if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == b*b + a*a)
			 printf("\nTam giac Vuong");
		else printf("\nTam giac thuong.");
	}
	else printf("\nBA canh KHONG tao tam giac.");


	_getch();
	return 0;
}