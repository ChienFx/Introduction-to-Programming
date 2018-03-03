#include "bai7.h"

int main()
{
	int n;
	printf("\nNhap n: ");
	scanf_s("%d", &n);
	if (KiemTraSoAmstrong(n))
		printf("%d la so Amstrong!!!",n);
	else printf("%d KHONG la so Amstrong!!!", n);
	LietKeAmstrongNhoHonN(n);
	_getch();
	return 0;
}