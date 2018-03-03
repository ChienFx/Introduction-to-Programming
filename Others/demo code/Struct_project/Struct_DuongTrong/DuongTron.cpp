#include "DuongTron.h"


void NhapDuongTron(DUONGTRON&O)
{
	printf("\nNhap tam duong tron:\nx: ");
	scanf_s("%f", &O.I.x);
	printf("y: ");
	scanf_s("%f", &O.I.y);
	printf("Ban kinh: ");
	scanf_s("%f", &O.R);

}
void XuatDuongTron(DUONGTRON O)
{ 
	printf("((%0.2f,%0.2f),%0.2f)",O.I.x,O.I.y,O.R);
}
float TinhChuViDuongTron(DUONGTRON O)
{
	return 2 * PI*O.R;
}
float TinhDienTichDuongTron(DUONGTRON O)
{
	return PI*O.R*O.R;
}
void XuatViTriTuongDoi(DUONGTRON O1, DUONGTRON O2)
{
	float KhoangCach = sqrt(pow(O1.I.x - O2.I.x,2) + pow(O1.I.y-O2.I.y,2));
	if (KhoangCach == O1.R + O2.R)
		printf("\nHai duong trong tiep xuc nhau.");
	else if (KhoangCach > O1.R + O2.R)
		printf("\nHai duong tron KHONG cat nhau.");
	else 
		printf("\nHai duong tron cat nhau.");
}//thieu