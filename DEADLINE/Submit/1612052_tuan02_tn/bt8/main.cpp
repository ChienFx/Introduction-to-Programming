#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	
	/*for (int i = 0; i <=127; i++)
	{
		printf("\n\t\t%03d    %c", i, i);
	}*/
	printf("\n\n\t\t\tASCII TABLE\n\n");
	int i0 = 0, i32 = 32, i64 = 64, i96 = 96;

	while (i0 <= 0 + 31 && i32 <= 32 + 31 && i64 <= 64 + 31 && i96 <= 96 + 31)
	{
		printf("\n%03d   %c\t\t", i0, i0);
		printf("%03d    %c\t\t", i32, i32);
		printf("%03d    %c\t\t", i64, i64);
		printf("%03d    %c", i96, i96);
		i0++; i32++; i64++; i96++;

	}


	_getch();
	return 0;
}