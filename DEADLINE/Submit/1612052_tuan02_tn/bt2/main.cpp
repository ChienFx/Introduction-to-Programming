//In ba so theo thu tu TANG DAN
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
	float max = (a > b) ? a : b, min = (a<b)?a:b;

	if (c > max) printf("%0.3f %0.3f %0.3f ", min, max, c);
	else if (c<min) printf("%0.3f %0.3f %0.3f ",c, min, max);
	else printf("%0.3f %0.3f %0.3f ", min, c,max);

	_getch();
	return 0;
}