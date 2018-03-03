//Viết chương trình kiểm tra một số nguyên dương bất kỳ (2 chữ số trở lên, không quá 9 chữ
//số) có chữ số bắt đầu và kết thúc bằng nhau hay không.
#include <stdio.h>
#include <conio.h>

int TestSeem(int);

int main()
{
	int n = 21111112;
	printf("\nTEST: %d", TestSeem(n));


	_getch();
}

int TestSeem(int n)
{
	int Last = n % 10, Head = n;

	while (Head/10 > 0)
	{
		Head /= 10;
	}
	if (Head == Last) return 1;
	return 0;
}