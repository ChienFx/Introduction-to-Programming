#include <stdio.h> 
#include <conio.h> 
// khai bao prototype 
void oddeven(int&); //khai bao prototype kiểu truyền tham biến
void negative(); 

int inum; //khai bao bien toan cuc 

void oddeven(int & a) // ham kiem tra chan le , làm theo kiểu truyền tham biến
{ 
 if (a % 2) 
  printf("%d la so le.\n", a); 
else 
printf("%d la sochan.\n", a); 
} 

void negative() //ham kiem tra so am , làm theo kiểu Procedure
{ 
 if (inum < 0) 
  printf("%d la so am.\n", inum); 
else 
  printf("%d la so duong.\n", inum); 
}

void main(void) 
{ 
 printf("Nhap vao 1 so nguyen : "); 
scanf("%d", &inum); 
oddeven(inum); 
negative(); 
getch(); 
} 