/* 5.Viết chương trình tính tổng nghịch đảo của N số nguyên đầu tiên theo công thức
S = 1 + 1/2 + 1/3 + … + 1/N */
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	int i,n;
	float tong;
	tong=0;				// kết quả thực là phải khởi tao 0.0
	printf("Nhap so n=");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		//tong+= (float)1/i;   // chia thực phải là 1.0 hoắc ép kiểu qua thực (float)1/i.
		tong+= 1.0/i;
	}

	printf("Tong %0.2f",tong);
	getch();
}