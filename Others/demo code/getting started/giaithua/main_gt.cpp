//Hàm tính n!
#include <stdio.h>
#include <conio.h>

//prototype
int GiaiThua(int );
int TinhTong(int );
int Fibo(int );
float Xuli(int ,int , char );
int UCLN(int,int);


float Xuli(int a, int b, char c)
{
	if(c=='+') return (float)a+b;
	if(c=='-') return (float)a-b;
	if(c=='*') return (float)a*b;
	return (b==0)? 0:(float)a/b; // ktra b=0 thì trả về 0, khác 0 thì tính a/b
}

int GiaiThua(int n)// Hàm tính n!
{
	int i,s=1;
	for(i=1;i<=n;i++)
		s*=i;
	return s;
}

int TinhTong(int n) // Hàm tính tổng các số từ 1 đến n
{
	int i,s=0;
	for (i=1;i<=n;i++)
		s+=i;
	return s;
}

int Fibo(int n)  //Hàm tính số Ficabonacy thứ n
{
 int i,a1=1,a2=2,s=a1+a2;
 if(n==1||n==2) return 1;

 for(i=4;i<=n-1;i++)// đã biết 3 số đầu rồi nên chạy từ st 4
 {
	 a1=a2;
	 a2=s;
	 s=a1+a2;
 }
 return s;
}

int UCLN(int a, int b)// Hàm tìm ước số chung lớn nhất
{
	while(b!=0)
	{
		(a>b)?a-=b:b-=a;// if (a>b) a=a-b;else b=b-a;
	}
	return a;
}
int main()
{
	int n;
	printf("Nhap n =");
	scanf("%d",&n);
	printf("%d!=%d",n,GiaiThua(n));
	printf("\nTong= %d",TinhTong(n));
	printf("\nSo Fibo thu %d: %d",n,Fibo(n));



	printf("\n %f",Xuli(3,2,'='));

	printf("\nUSCLN: %d",UCLN(12,9));
	getch();
	return 0;
}
