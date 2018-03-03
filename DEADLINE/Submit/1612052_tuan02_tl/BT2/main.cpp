#include <stdio.h>
#include <conio.h>


int main()
{
	int n,s=0;
	printf("\nInput n: ");
	scanf_s("%d", &n);
	

	if (n < 0)
	{
		s = -1;
		goto OUT;
	}
	else
	while (n > 0)
	{
		s += n % 10;
		n /= 10;
	}

OUT:

	printf("\nSum: %d", s);
	_getch();
	return 0;
}

