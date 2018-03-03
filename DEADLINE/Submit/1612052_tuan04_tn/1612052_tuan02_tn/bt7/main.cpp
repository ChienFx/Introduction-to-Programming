#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	printf("\nCac ki tu tu 'a'..'z':\n");
	for (int i = 'a'; i <= 'z'; i++)
		printf("%3c", i);

	printf("\n\nCac ki tu tu 'A'..'Z':\n");
	for (int i = 'A'; i <= 'Z'; i++)
		printf("%3c", i);

	printf("\n\nCac ki tu tu '0'..'9':\n");
	for (int i = '0'; i <= '9'; i++)
		printf("%3c", i);



	_getch();
	return 0;
}