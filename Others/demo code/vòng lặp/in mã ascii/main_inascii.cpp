//18.Viết chương trình lặp lại nhiều lần công việc nhập một ký tự và in ra mã ASCII của ký tự đó, khi nào nhập số 0 thì dừng.
#include <stdio.h>
#include <conio.h>
void main()
{
 char c;
 for(;;)
 {
	 printf("nhap ki tu: ");
	 scanf("%c",&c);
	 
	 if (c!='0')
		printf("ASCII: %d\n\n",c);
	 else break;
 }

 getch();
}