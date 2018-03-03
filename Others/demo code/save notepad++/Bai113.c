//Bai 113: Tinh sin(x)
#include <stdio.h>
#include <conio.h>
#include <math.h>
float SinX(float,int);
int main()
{
	float x = 2.0,S = 0;
	int n;
	//printf("\nNhap x= ");
	//scanf("%f",&x);
	printf("\nNhap n= ");
	scanf("%d",&n);
	S = SinX(x,n);
	printf("\nSin(%0.1f) = %f",x,S);
	getch();
}

float SinX(float x,int n)
{
	float S = x,Tu,Mau=1;
	int j = 1;//Bien chay de tinh (2n+1)! lien tiep
	for(int i = 1; i <= n;i++)
	{
		Tu = pow(-1.0,i)*pow(x,2*i+1);
		j++;
		Mau*= j*(j+1);
		j+= 1;
		S+= Tu/Mau;
	}
	return S;
}