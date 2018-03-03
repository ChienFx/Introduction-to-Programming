/*9. Biết rằng năm 0 là năm Canh thân (năm kỵnhau có chu kì là 3, năm hợp nhau có chu 
kì là 4). Hãy viết chương trình cho phép gõ vào năm dương lịch (ví dụ1997), xuất ra năm âm 
lịch (Đinh sửu) và các năm kỵvà hợp. 
Có 12 chi: Tý, Sửu, Dần, Mão, Thìn, Tỵ, Ngọ, Mùi, Thân, Dậu, Tuất, Hợi. 
Có 10 can: Giáp, Ất, Bính, Đinh, Mậu, Kỷ, Canh, Tân, Nhâm, Quý.*/

#include <stdio.h>
#include <conio.h>
#include <string>

void Xuat(int n)
{
	char cChi[12][10]={"Than","Dau","Tuat","Hoi","Ty","Suu","Dan","Mao","Thin","Ty.","Ngo","Mui",};
	char cCan[10][10]={"Canh","Tan","Nham","Quy","Giap","At","Binh","Dinh","Mau","Ky",};
	//0: Canh Thân ; 1: Tân Dậu
	int iChi = n %12, iCan = n % 10;
	printf("\nNam %d : %s %s",n,cCan[iCan],cChi[iChi]);

}
int main()
{
	int nam;
MrC:

	printf("\nNhap nam: ");
	scanf("%d",&nam);
	Xuat(nam);

	printf("\n\nTiep tuc ko: ");
	char tiep = getch();
	if(tiep == 'c' || tiep == 'C') goto MrC;
	return 0;
}