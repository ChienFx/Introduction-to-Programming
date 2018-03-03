
#include <stdio.h>
#include <conio.h>

int main()
{
	char ch = 'a';
QuayLai:
	printf("\nNhap mot chu cai:");
	scanf_s("%c", &ch);

	if ((ch < 'a' && ch > 'z') || (ch < 'A' && ch > 'Z'))
	{
		printf("\nKy tu khong doi duoc.");
		goto QuayLai;
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		printf("\nKy tu sau khi doi: %c", ch - 32);
	}
	else printf("\nKy tu sau khi doi: %c", ch + 32);

	_getch();
	return 0;
}