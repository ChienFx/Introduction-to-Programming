//3. Bài tập luyện tư duy: 
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <cstdlib>
#include <math.h>
#define MAX 100

void NhapMang(int a[], int &n)// 2 kiểu: nhập tay và random
{
	do
	{
		printf("\nSo phan tu mang: ");
		scanf("%d",&n);
	}while( n < 0 || n > MAX);
	srand(time(0));
	for( int i = 0; i < n; i++)
	//	a[i] = rand() % 100;
	{
		printf("nhap a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}
void XuatMang(int a[], int n)
{
	printf("\nMang:\n");
	for( int i = 0; i < n; i++)
		printf("%4d ",a[i]);
	printf("\n");
}
//Bài 155: Hãy tìm phần giá trị trong mảng các số thực "xa giá trị x nhất".
void XaNhat(int a[],int n)
{
	int x,kcach = 0,vt = 0;
	printf("Nhap x = ");
	scanf("%d",&x);
	for(int i = 0; i < n; i++)
		if(abs(a[i] - x) > kcach)
			{
				kcach = abs(a[i] - x);
				vt = i;
			}
	printf("\nPhan tu xa %d nhat: %d",x,a[vt]);
	printf("\nKhoang cach: %d",kcach);
}

//Bài 156: Tìm một vị trí trong mảng 1 chiều mà giá trị tại vị trí đó "gần giá trị x nhất"
void GanNhat(int a[], int n)
{
	int x,vt = 0, kcach=999999;
	printf("\nNhap x = ");
	scanf("%d",&x);
	for( int i = 0; i < n; i++)
		if( abs(a[i] - x) < kcach)
		{
			vt = i;
			kcach = abs(a[i] - x);
		}

	printf("\nPhan tu gan %d nhat: %d",x,a[vt]);
	printf("\nKhoang cach: %d",kcach);
}
//Bài 157: Chưa hiểu
//Bài 158: Chưa hiểu
//Bài 159: Tìm giá trị đầu tiên lớn hơn 80, nếu ko có thì trả về 0
int DauTien(int a[],int n)
{
	for( int i = 0; i < n; i++)
		if(a[i] > 80) return a[i];
	return 0;
}

//Bài 160: Giá trị âm cuối cùng lớn hơn -1, ko có thì trả về 0.
int CuoiCung(int a[], int n)
{
	for( int i = n-1; i >= 0; i--)
		if(a[i] < 0 && a[i] >-1) return a[i];
	return 0;
}

//Bài 161: Tìm giá trị đầu tiên của mảng nằm trong khoảng (x,y) cho trước, nếu không có thì trả về x.
void NhapXY(int &x, int &y)
{
	do
	{
		printf("\nNhap (x < y):");
		printf("\nNhap x = ");
		scanf("%d",&x);
		printf("Nhap y = ");
		scanf("%d",&y);
	}while( x >= y);
}
int DauTienTrongDoan(int a[], int n,int x,int y)
{
		for (int i = 0; i < n; i++)
			if(a[i] > x && a[i] < y) return a[i];
	return x;
}

/*Bài 162: Tìm 1 VỊ TRÍ trong mảng 1 chiều thỏa mãn:
		  + Có 2 giá trị lân cận
		  + Giá trị tại vị trí đó bằng tích 2 giá trị lân cận
		  Nếu ko tồn tại thì trả về giá trị -1 */
int ViTriCoLanCan(int a[], int n)
{
	for(int i = 1; i <= n-2; i++)		// chạy từ 1 -> n-2 sẽ thỏa đkiện có 2 lân cận
		if(a[i] == a[i-1]*a[i+1]) return i;
	return -1;
}

/*Bài 163: Tìm số chính phương đầu tiên trong mảng 1 chiều các số nguyên*/
int ChinhPhuong(int n)
{
//	if ( n == 1) return 1;
	for(int i =1; i <= 1 + n/3; i++) // i<=i+n/3 để phòng trường hợp n=1 thì chạy từ 1->1 vẫn ok
		if( n == i*i) return 1;
	return 0;
}
int ChinhPhuongDauTien(int a[], int n)
{
	for(int i = 0; i < n; i++)
		if(ChinhPhuong(a[i])) return a[i];
	return -1;
}

/*Bài 164: Tìm SỐ GÁNH đầu tiên trong mảng: Ví dụ: 12321; 23432*/
int Ganh(int so)
{
	int a[MAX],n = 0,dem =0;
	if (so <= 10) return 0;
	while( so > 0 )
	{
		a[n] = so % 10; // lưu ngược và mảng a vd: 12345 -> a={5;4;3;2;1}, nếu muốn lưu đúng a={1;2;3;4;5} thì tìm số chữ số xong lưu a[i] = so/pow(10,n-1) với n là số phần tử
		n++;
		so = so / 10;
	}// out ra n = so chu so cua "so"

	for( int i = 0; i <= n/2; i++)
		if( a[i] != a[n-i-1] ) return 0;// chỉ cần khác 1 phần tử là sai ngay
	return 1;
}
int GanhDauTien(int a[], int n)
{
	for( int i = 0; i < n; i++)
		if(Ganh(a[i])) return a[i];
	return -1;
}

/*Bài 165: Tìm trong mảng 1 chiều các số nguyên có chữ số đầu tiên là chữ số lẽ, ko có thì trả về 0*/
int DauLe(int so)
{
	int n=0, temp = so;
	if( so < 0) return 0; // nếu muốn tính luôn cả số âm thì gán qua temp = -so;
	while( temp > 0) // tìm số chữ số 
	{
		n++;
		temp=temp / 10; //temp = temp / 10;
	}
	if( (so / (int)pow((float)10,n-1)) % 2 == 1) return 1; //(int)pow((float)10,n-1): là 10^(n-1), vì hàm pow trả về kiểu thực nên phải ép kiểu cả ( ta cần pow về nguyên nên ép (int)pow, còn trong cấu trúc pow(phai có 1 số thực)) 
	return 0;
}
int DauLeDauTien(int a[], int n)
{
	for( int i = 0; i < n; i++)
		if(DauLe(a[i])) return a[i];
	return -1;
}

/*Bài 166: Tìm số đầu tiên trong mảng có dạng 2^k, nếu ko có thì trả về 0*/
int HaiMuK(int n)
{
	for (int k = 0; k < 999; k++)
		if( n == (long int)pow((float)2,k)) return 1;
	return 0;
}
int HaiMuKDauTien(int a[], int n)
{
	for ( int i = 0; i < n; i++)
		if(HaiMuK(a[i])) return a[i];
	return 0;
}

/*Bài 167: Tìm giá trị thỏa mãn đk "toàn chữ số lẻ" và là giá trị lớn nhất thỏa mãn đk ấy, ko có thì trả về 0*/
int ToanLe(int n)
{
	while( n > 0)
	{
		if( (n % 10) % 2 == 0) return 0;
		n = n /10;
	}
	return 1;
}
int ToanLeLonNhat(int a[], int n)
{
	int lonnhat = 0;
	for( int i = 0; i < n; i++)
		if(ToanLe(a[i]) && a[i] > lonnhat) lonnhat = a[i];
	return lonnhat;
}

/*Bài 168: Giống 166*/
/*Bài 169: Viết hàm tìm số chẵn lớn nhất nhỏ hơn mọi giá trị lẻ có trong mảng 1 chiều nguyên, ko có thì trả về -1*/
int XuLi_169(int a[], int n)
{
	int LeMin =99999, ChanMax = -1;
	for(int i = 0; i < n; i++)
		if( a[i] % 2 != 0 && a[i] < LeMin) LeMin = a[i];// tìm số lẻ nhỏ nhất
	for(int i = 0; i < n; i++)
		if( a[i] % 2 == 0 && a[i] < LeMin && a[i] > ChanMax) ChanMax = a[i];
	return ChanMax;
}

/*Bài 170: Tìm số nguyên tố nhỏ nhất lớn hơn mọi giá trị của mảng.*/
int SNT(int n)
{
	if( n < 2) return 0;
	for( int i = 2; i <= n-1; i++)
		if(n % i == 0) return 0;
	return 1;
}
int SNT_170(int a[], int n)
{
	int max = -999999,SntMin;
	for(int i = 0; i < n; i++)
		if(a[i] > max) max = a[i]; // tìm max của mảng
	
	SntMin = max + 1;
	while( SNT(SntMin) == 0 )//tăng cho tới khi max là snt
	{
		SntMin++;
	}
	return SntMin;
}

/*Bài 171: Ước chung lớn nhất của tất cả các phần tử trong mảng.
- Giải thuật: UCLN(a,b,c)= UCLN(UCLN(a,b), c) */
int UCLN(int a, int b)
{
	if( a==0 || b==0) return 0;
	while( b != a )
	{
		if (a > b) a-=b;
		else b-=a;
	}
	return b;
}
int UCLNMang(int a[], int n)
{
	int uc = UCLN(a[0],a[1]);
	for( int i = 2; i < n; i++)
		uc = UCLN(uc,a[i]);
	return uc; 
}

/*Bài 172: Tìm Bội chung nhỏ nhất của tất cả các phần tử trong mảng.
- Giải thuật: BCNN(a,b,c)= BCNN(BCNN(a,b), c) */
int BCNN(int a, int b)
{
	if( a==0 || b==0) return 0;
	return (a*b)/UCLN(a,b);
}
long BCNNMang(int a[],int n)
{
	int bc = BCNN(a[0],a[1]);
	for( int i = 2; i < n; i++)
		bc = BCNN(bc,a[i]);
	return bc;
}

/*Bài 173: Tìm chữ số ít xuất hiện nhất trong mảng 1 chiều số nguyên.
- Comment: Muốn in ra tất cả các giá trị thỏa mảng thì dùng mảng đánh dấu */
int XuatHien(int a[],int n,int so)// đếm số lần xuất hiện của n trong mảng a[]
{
	int dem = 0;
	for( int i = 0; i < n; i++)
		if( a[i] == so) dem++;
	return dem;
}
int XuatHienItNhat(int a[], int n)//đưa ra số lần xuất hiện, từ đó truy xuất ra giá trị qua vòng for
{
	int solan = XuatHien(a,n,a[0]), vt = 0;

	for(int i = 0; i < n; i++)
		if(XuatHien(a,n,a[i]) < solan) 
			{
				solan = XuatHien(a,n,a[i]);
				vt = i;
			}
	return a[vt];
	
}

/*Bài 174: Hay nhưng dễ, vô học làm nhá*/
/*Bài 175: Hay nhưng dễ, vô học làm nhá*/
int main()
{
	int a[MAX],n,x,y;

MrC:
	NhapMang(a,n);
	XuatMang(a,n);
	//XaNhat(a,n);
	//GanNhat(a,n);
	//printf("\nSo dau tien lon hon 80: %d",DauTien(a,n));
	//printf("\nSo am cuoi cung lon hon -1: %d",CuoiCung(a,n));
	//NhapXY(x,y);
	//printf("\nSo dau tien trong doan (%d , %d): %d",x,y,DauTienTrongDoan(a,n,x,y));
	//printf("\nVi tri co so thoa 2 dieu kien bai 162: %d", ViTriCoLanCan(a,n));
	//printf("So chinh phuong dau tien: %d",ChinhPhuongDauTien(a,n));
	//printf("\nSo ganh dau tien: %d",GanhDauTien(a,n));
	//printf("\nSo co CHU SO dau tien la so le: %d",DauLeDauTien(a,n));
	//printf("\nSo co dang 2^k dau tien: %d\n",HaiMuKDauTien(a,n));
	//printf("\nSo toan chu so le lon nhat: %d",ToanLeLonNhat(a,n));
	//printf("\nSo chan lon nhat nho hon moi so le: %d",XuLi_169(a,n));
	//printf("\nSo nguyen to nho nhat lon hon max mang la: %d",SNT_170(a,n));
	//printf("\nUCNN cua mang: %d",UCLNMang(a,n));
	//printf("\nBCNN cua mang: %d",BCNNMang(a,n));
	//printf("\nSo xuat hien it nhat: %d",XuatHienItNhat(a,n));

	printf("\n\nTiep tuc ko, bam \"c\" de tiep tuc:");
	char c = getch();
	if( c == 'c' || c == 'C') goto MrC;
	else
		return 0;
}