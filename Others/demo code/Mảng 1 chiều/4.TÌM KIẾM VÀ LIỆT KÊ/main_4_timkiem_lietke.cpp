//4. BÀI TẬP MẢNG 1 CHIỀU VỀ TÌM KIẾM VÀ LIỆT KÊ
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <cstdlib>
#include <math.h>
#define MAX 100

void NhapMangNguyen(int a[], int &n)// 2 kiểu: nhập tay và random
{
	do
	{
		printf("\n\nSo phan tu mang: ");
		scanf("%d",&n);
	}while( n < 0 || n > MAX);
	srand(time(0));
	for( int i = 0; i < n; i++)
		a[i] = rand() % 100 - 15;
	/*{
		printf("nhap a[%d]: ",i);
		scanf("%d",&a[i]);
	}*/
}
void XuatMangNguyen(int a[], int n)
{
	printf("\nMang:\n");
	for( int i = 0; i < n; i++)
		printf("%4d ",a[i]);
	printf("\n");
}

void NhapMangThuc(float f[], int &n)
{
	srand(time(NULL));
	do
	{
		printf("\n\nSo phan tu cua mang THUC: ");
		scanf("%d",&n);
	}while( n < 0 || n > MAX);
	for(int i = 0; i < n; i++)
	{
		f[i] = (float)(10 + rand() % (10 + 300 - 1))/10 - 15; //random số thực trong khoang [10/10 - 15; 300/10 - 15], cho ra cả số âm
		//printf("Nhap a[%d]: ",i);
		//scanf("%f",&f[i]);
	}
}
void XuatMangThuc(float f[], int n)
{
	printf("\nMang THUC: \n");
	for( int i = 0; i < n; i++)
		printf("%5.1f  ",f[i]);
	printf("\n");
}

/*Bài 176: Liệt kê tất cả số âm trong mảng số thực*/
void LietKeAm(float f[], int n)
{
	printf("\nSo am trong mang: ");
	for( int i = 0; i < n; i++)
		if( f[i] < 0) printf("%5.1f  ",f[i]);
	printf("\n");
}

/*Bài 177: Liệt kê tất cả các số trong khoang x, y trong mảng số thực.*/
void LietKe177(float f[], int n)
{
	int x,y;
	do
	{
		printf("\nNhap doan [x;y] ( x < y): ");
		printf("\nx: ");
		scanf("%d", &x);
		printf("y: ");
		scanf("%d",&y);
	}while( x >= y);
	printf("\nCac so thuoc doan [%d ; %d]: ",x,y);
	for( int i = 0; i < n; i++)
		if(f[i] >= x && f[i] <= y)
			printf("%5.1f", f[i]);
	printf("\n");
}

/*Bài 178: Liệt kê các giá trị chẵn trong khoang [x;y] trong mảng 1 chiều sô nguyên.*/
void LietKe178(int a[], int n)
{
	int x,y;
	do
	{
		printf("\nNhap doan [x;y] ( x < y): ");
		printf("\nx: ");
		scanf("%d", &x);
		printf("y: ");
		scanf("%d",&y);
	}while( x >= y);
	
	printf("\nCac so chan thuoc doan [%d ; %d]: ",x,y);
	
	for( int i = 0; i < n; i++)
		if(a[i] >= x && a[i] <= y && a[i] % 2 == 0)
			printf("%5d ", a[i]);
	printf("\n");
}

/*Bài 179: Liệt kê các giá trị lớn hơn trị tuyệt đối của giá trị đứng liền sau nó.*/
void LietKe179(int a[], int n)
{
	printf("\nCac so lon hon abs sau no la: ");
	for(int i =0; i <= n-2; i++ )
		if(a[i] > abs(a[i+1])) printf("%4d",a[i]);
	printf("\n");
}

/*Bài 180: Liệt kê các giá trị trong mảng nhỏ hơn trị tuyệt đối giá trị đứng sau và lớn hơn trị tuyệt đối
			giá trị đứng trước nó.*/
void LietKe180(int a[], int n)
{
	printf("\nCac so thoa ycbt 180 la: ");
	for(int i = 1; i <= n-2; i++ )
		if(a[i] < abs(a[i+1]) && a[i] > abs(a[i-1])) printf("%4d",a[i]);
	printf("\n");
}

/*Bài 181: Liệt các giá trị chẵn có ít nhất 1 lân cận cũng là giá trị chẵn.*/
void LietKe181(int a[], int n)
{
	printf("\nCac so chan co it nhat 1 lan can chan la: ");
	if(a[0] % 2 == 0 && a[1] % 2 == 0) printf("%4d",a[0]);	// Kiểm tra riêng a[0]

	for(int i = 1; i <= n-2; i++ )
		if(a[i] % 2 == 0)
			if(a[i-1] % 2 ==0 || a[i+1] % 2 == 0) 
				printf("%4d",a[i]);

	if(a[n-1] % 2 == 0 && a[n-2] % 2 == 0) printf("%4d",a[n-1]);	//Kiểm tra riêng a[n-1] 
	printf("\n");
}

/*Bài 182: Choa mảng 1 chiều các số thực. Viết hàm liệt kê các số trong mảng có ít nhất 1 lần cận trái dấu với nó.*/
void LietKe182(float f[], int n)
{
	printf("\nCac so co it nhat 1 lan can trai dau: ");
	if(f[0] * f[1] < 0) printf("%5.1f ",f[0]);	// Kiểm tra riêng f[0]

	for(int i = 1; i < n-1; i++ )
		if(f[i] * f[i-1] < 0 || f[i] * f[i+1] < 0)
				printf("%5.1f ",f[i]);

	if(f[n-1] * f[n-2] < 0 ) printf("%5.1f ",f[n-1]);	//Kiểm tra riêng f[n-1] 
	printf("\n");
}

/*Bài 183: Liệt kê các VỊ TRÍ mà giá trị tại đó là giá trị lớn nhất của mảng 1 chiều các số nguyên.*/
void LietKe183(int a[], int n)
{
	int max= -999999;
	for(int i = 0; i < n; i++)
		if( a[i] > max) max = a[i];
	printf("\nMax: %d",max);
	printf("\nCac VI TRI dat GTLN: ");
	for( int i = 0; i < n; i++)
		if (a[i] == max) printf("a[%d]  ", i);
	printf("\n");
}

/*Bài 184: Liệt kê VỊ TRÍ các giá trị mà tại đó là số nguyên tố*/
int SNT(int n)  // trả về 1 là phải, 0 là ko phải
{
	if(n < 2) return 0;			//n < 2 ko phai SNT, 2 là snt nhỏ nhất
	for(int i = 2; i < n; i++)	//n= 2 thì vòng lặp ko chạy => out 1
		if( n % i == 0) return 0;
	return 1;
}
void LietKe184(int a[], int n)
{
	printf("\nCac VI TRI la so nguyen to: ");
	for( int i = 0; i < n; i++)
		if(SNT(a[i])) printf("a[%d]  ",i);
}

/*Bài 185: Liệt kê các VỊ TRÍ mà tại đó là số chính phương trong mảng chiều các số nguyên.*/
int ChinhPhuong(int n)
{
//	if ( n == 1) return 1;
	for(int i =1; i <= 1 + n/3; i++) // i<=i+n/3 để phòng trường hợp n=1 thì chạy từ 1->1 vẫn ok
		if( n == i*i) return 1;
	return 0;
}
void LietKe185(int a[], int n)
{
	printf("\nVI TRI cac so chinh phuong: ");
	for(int i = 0; i < n; i++)
		if(ChinhPhuong(a[i])) printf("a[%d] ",i);
}

/*Bài 186: Liệt kê các VỊ TRÍ trong mảng 1 chiều các số nguyên mà giá trị tại vịt trí đó bằng số âm đầu tiên. */
void LietKe186(int a[], int n)
{
	for( int i = 0; i < n; i++)
		if(a[i] < 0)
		{
			int amdau = a[i];
			printf("\nVi tri cac so bang gia tri am dau tien %d: \n",amdau);
			for (int j = 0; j < n; j++)
				if ( a[j] == amdau) printf("a[%d] ",j);
			printf("\n");
			break;
		}
}

/*Bài 187, 188: Giống bài 184, */
/*Bài 189: Liệt kê các giá trị có chữ số đầu là lẻ trong mảng 1 chiều các số nguyên.*/
int DauLe(int so)
{
	int n=0, temp;
	if (so < 0) so = -so;
	temp = so;
	if( so < 0) return 0; 
	while( temp > 0) // tìm số chữ số 
	{
		n++;
		temp=temp / 10; //temp = temp / 10;
	}
	if( (so / (int)pow((float)10,n-1)) % 2 == 1) return 1; //chữ số đầu tiên =số / (int)pow((float)10,n-1): là số/10^(n-1), vì hàm pow trả về kiểu thực nên phải ép kiểu cả ( ta cần pow về nguyên nên ép (int)pow, còn trong cấu trúc pow(phai có 1 số thực)) 
	return 0;
}
void LietKe189(int a[], int n)
{
	printf("\nCac gia tri co chu so dau la LE: ");
	for (int i = 0; i < n; i++)
		if(DauLe(a[i])) printf("%4d ", a[i]);
	printf("\n");
}

/*Bài 190: Liệt kê các giá trị có toàn các số lẻ trong mảng 1 chiều các số nguyên.*/
int ToanLe(int n)
{
	if ( n < 0) n = -n;
	while( n > 0)
	{
		if ((n % 10) % 2 == 0) return 0; // chỉ cần 1 số chẵn là ou 0 ngay
		n = n /10;
	}
	return 1;
}
void LietKe190(int a[], int n)
{
	printf("\nCac gia tri toan chu so le: ");
	for( int i = 0; i < n; i++)
		if(ToanLe(a[i])) printf("%4d ",a[i]);
}

/*Bài 191: Liệt kê các giá trị cực đại trong mảng 1 chiều các số thực.
			Một số đc gọi là cực đại khi lớn hơn các phần tử lân cận*/
void LietKe191(float f[], int n)
{

	printf("\nCac gia tri cuc dai: ");
	for (int i = 0; i < n; i++)
		if( f[i] > f[i-1] && f[i] > f[i+1]) printf("%5.1f  ",f[i]);

}

/*Bài 192: Liệt kê các giá trị trong mảng 1 chiều các số nguyên có chữ số đầu tiên là chữ số chẵn
			SẴN TIỆN CẢI TIẾN LUÔN BÀI SỐ LẺ TRƯÒNG HỢP SỐ ÂM*/
int DauChan(int n) // có thể xài lại hàm DauLe, vd: !(DauLe(22)) = 1 
{
	int temp,dem = 0,chusodau;
	if ( n < 0) n = -n;
	temp = n;
	while( temp > 0)
	{
		temp = temp / 10;
		dem++;
	}
	chusodau = n / ((int)(pow((float)10,dem-1)));
	if (chusodau % 2 == 0) return 1;
	return 0;
}
void LietKe192(int a[], int n)
{
	printf("\nCac gia tri co chu so dau tien CHAN: ");
	for(int i = 0; i < n; i++)
		if(DauChan(a[i])) printf("%4d ",a[i]);
}

/*Bài 193, 194: dễ ko làm*/
/*Bài 195(*): Cho mảng số nguyên có nhiu hơn 3 giá trị đôi một khác nhau, liệt kê các bộ ba số (a,b,c) thỏa a = b + c. Ví dụ: (6,2,4)*/
void LietKe195(int a[], int n)
{
	printf("\nBo ba thoa man: ");
	for( int i = 0; i < n-2; i++)
		for( int j = i+1; j < n-1; j++)
			for( int k = j+1; k < n; k++)
			{
				if(a[i] == a[j] + a[k]) printf("\n(%3d,%3d,%3d)",a[i],a[j],a[k]);
				else if(a[j] == a[i] + a[k]) printf("\n(%3d,%3d,%3d)",a[j],a[i],a[k]);
					 else if(a[k] == a[i] + a[j]) printf("\n(%3d,%3d,%3d)",a[k],a[i],a[j]);
			}

}

/*Bài 196: Giống i chang Bài 176*/
/*Bài 197: Giống i chang Bài 189*/
/*Bài 198: Liệt kê vị trí a[max]: làm rồi*/
/*Bài 199: Liệt Kê Số nguyên tố, Giống i chang Bài 184*/
int main()
{
	int a[MAX], n;
	float f[MAX];
MrC:	
	NhapMangNguyen(a,n);
	XuatMangNguyen(a,n);

	/*NhapMangThuc(f,n);
	XuatMangThuc(f,n);*/

	//LietKeAm(f,n);		//Bài 176
	//LietKe177(f,n);		//Bài 177
	//LietKe178(a,n);		//Bài 178
	//LietKe179(a,n);		//Bài 179
	//LietKe180(a,n);		//Bài 180
	//LietKe181(a,n);		//Bài 181
	//LietKe182(f,n);		//Bài 182
	//LietKe183(a,n);		//Bài 183
	//LietKe184(a,n);		//Bài 184
	//LietKe185(a,n);		//Bài 185
	//LietKe186(a,n);		//Bài 186
	//LietKe189(a,n);		//Bài 189
	//LietKe190(a,n);		//Bài 190
	//LietKe191(f,n);		//Bài 191
	//LietKe192(a,n);		//Bài 192
	//LietKe195(a,n);		//Bài 195


	printf("\n\nTiep tuc ko? Bam \"C\" de tiep tuc: ");
	char tieptuc = getch();
	if(tieptuc == 'C' || tieptuc == 'c') goto MrC;
	return 0;
}