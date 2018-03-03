#include <stdio.h>
#include <conio.h>

void main()
{
	for (int i = 1; i <= 9; i++)
	{
		printf("\nBang cuu chuong %d\n\n", i);
		for (int j = 1; j <= 9; j++)
			printf("\t\t%d x %d = %d\n", i, j, i*j);
	}
	_getch();
}