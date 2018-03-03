#include "bai4.h"
void change10to16()
{
	int n;
	printf("\nNhap n theo he co so 10:");
	scanf_s("%d", &n);
	printf("He co so 16: %x", n);
}
void change16to10()
{
	int n;
	printf("\nNhap n theo he co so 16:");
	scanf_s("%x", &n);
	printf("He co so 10: %d", n);
}