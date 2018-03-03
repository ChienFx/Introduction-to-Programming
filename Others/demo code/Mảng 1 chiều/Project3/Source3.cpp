//13.	Giá trị lớn thứ nhì của dãy và các chỉ số của các số hạng đạt giá trị lớn nhì.
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
		printf("Nhap a[%d]:",i);
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

void MangGiam(int a[],int n) // Hàm xếp mang theo chiều giảm
{
	int i,j,tam;
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(a[j]>a[i])
			{
				tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
	printf("\nXep giam dan: ");
	XuatMang(a,n);
}

void HangNhi(int a[],int n) //Hàm in ra số hạng lớn nhì và chỉ số, 
{
	MangGiam(a,n);// Xep mang giam dan
	int i,hang=1,Mark[MAX]={1};  // Mang Mark: danh dau
	int vithu= a[0];
	for(i=0;i<n;i++)
		if(a[i]<vithu)
		{
			vithu=a[i];
			hang++;
			Mark[i]=hang;	//tang hang va danh dau va mang Mark
		}

	for(i=0;i<n;i++)
	{
		if(Mark[i]==2)
		{
			printf("\nso hang lon NHi: %d", a[i]);
			break;
		}
	}

	/*printf("\nChi so: ");
	for(i=0;i<n;i++)
		if (Mark[i]==2) printf("%d  ",i);*/

}
int MaxMang(int a[],int n)
{
	int i,max=-99999;
	for(i=0;i<n;i++)
		if (a[i]>=max) max=a[i];
	return max;
}
//15.	Số lượng các số dương liên tiếp nhiều nhất.
int DemSoDuong(int a[],int dau,int cuoi)
{
	int i=dau,dem=0;
	while(a[i]>0 && i<=cuoi)
	{
		dem++;
		i++;
	}
	return dem;
}
void DuongLienTiep(int a[],int n)// Có thể đánh dấu vị trí của của bằng vị trí đầu cuối lưu vào mảng 2 chieu b[dau][dau+dem]
{
	int d[MAX],i,j=0;// Mảng d là mảng để đánh dâu và lưu vào giá trị mỗi đoạn số dương 
	for(i=0;i<n;i++) 
		if(a[i]>0) 
		{
			d[j]=DemSoDuong(a,i,n);
			j++;
		}
	for(i=0;i<n;i++) printf("%d ",d[i]);
	printf("\nChuoi so duong dai naht: %d",MaxMang(d,n)); 
}
int main()
{
	int a[MAX],n;
	NhapMang(a,n);
	XuatMang(a,n);
	
	//HangNhi(a,n);
	//printf("So so Duong : %d\n", DemSoDuong(a,0,n));
	DuongLienTiep(a,n);
	getch();
	return 0;
}