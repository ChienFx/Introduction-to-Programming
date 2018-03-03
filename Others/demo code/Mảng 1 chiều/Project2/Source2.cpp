//Bài tập về mảng 1 chiều tiếp theo
#include <stdio.h>
#include <conio.h>
#define MAX 100

void NhapMang(int a[],int &n)  // Tham bieen
{
	int i;
	do
	{
		printf("Nhap so phan tu mang: ");
		scanf("%d",&n);
	}while(n<0 || n>100);

	for (i=0;i<n;i++)
	{
		printf("Nha a[%d]:",i);
		scanf("%d",&a[i]);

	}
}

void XuatMang(int a[], int n)
{
	int i;
	printf("Mang:  ");
	for(i=0;i<n;i++)		
		printf("%d   ",a[i]);
	printf("\n");
}
//2.	Số lượng các số hạng dương và tổng của các số hạng dương.
int TongDuong(int a[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
		if(a[i]>0) sum+=a[i];
	return sum;
}
int TongAm(int a[],int n,int &dem)//Tính tổng các số âm và đưa ra số các số âm qua biến dem
{
	int i,sum=0;
	for(i=0;i<n;i++)
		if(a[i]<0) 
			{
				sum+=a[i];
				dem++;
			}
	return sum;
}

float TBC(int a[],int n)// Hàm tính trung bình cộng của các số hạng trong mảng
{
	int i,sum=0;
	for (i=0;i<n;i++)
		sum+=a[i];
	return (float)sum/n;
}

//5.	Chỉ số của số hạng dương đầu tiên của dãy.
int DuongDau(int a[], int n)
{
	int i;
	for(i=0;i<n;i++)
		if(a[i]>0) return i; // return xong là tự out luôn nên kq là i
}

//8.	Chỉ số của số hạng âm cuối cùng của dãy.
int ChisoAmcuoi(int a[],int n)
{
	int i;
	for (i=n-1;i>=0;i--)
		if(a[i]<0) return i;  // return là out ngay
}

//9.	Số hạng lớn nhất của dãy và chỉ số của nó.
void ChiSoMax(int a[],int n,int &chiso,int &MaxM)
{
	int i;
	for (i=0;i<n;i++)
		if(a[i]>MaxM) 
			{
				MaxM=a[i];
				chiso=i;
			}
}
//13.	Giá trị lớn thứ nhì của dãy và các chỉ số của các số hạng đạt giá trị lớn nhì.
//void HangNhi(int a[],int n)
//{
//	int nhi,csnhi=0;
//	int DanhDau[MAX]=0;
//
//
//}
int main()
{
	int a[MAX],n,ChiSo,SoMax,dem=0;

	NhapMang(a,n);
	XuatMang(a,n);
	printf("Tong duong: %d", TongDuong(a,n));
	printf("\nTong am: %d",TongAm(a,n,dem));
	printf("\nCo %d so am",dem);
	printf("\nTrung binh cong: %4.2f",TBC(a,n));
	printf("\nSo hang duong dau tien: a[%d]= %d",DuongDau(a,n),a[DuongDau(a,n)]);
	printf("\nSo hang Am cuoi cung: a[%d]= %d",ChisoAmcuoi(a,n),a[ChisoAmcuoi(a,n)]);
	ChiSoMax(a,n,ChiSo,SoMax);
	printf("\nSo hang lon nhat la:a[%d]= %d",ChiSo,SoMax);
	getch();
	return 0;
}