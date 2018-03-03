//Ví dụ đầu tiền về hàm _ Trong C, HÀM bao gồm cả thủ tục
#include <stdio.h>
#include <conio.h>

void line(); // Khai báo prototype - Nên khai báo 


void line() // Viet ham in ra 1 dong ***********
{
	int i;			// i là biến cục bộ chỉ chạy trong hàm
	for (i=1;i<=19;i++)
		 printf("*");
	printf("\n");
}

void main()
{
	line();
	printf("* Minh hoa ve ham *\n");
	line();
	getch();
}