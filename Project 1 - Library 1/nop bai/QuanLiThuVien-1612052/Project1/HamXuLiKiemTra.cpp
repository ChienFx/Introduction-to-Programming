#include "Menu.h"

//Hàm kiểm tra chuỗi tmp có nằm trong mảng chuỗi mang[] hay khong
int KiemTraMaTrung(char tmp[10], char mang[][10], int n)//kiem tra msdg[i]
{
	for (int i = 1; i <= n; i++)
	if (strcmp(tmp, mang[i]) == 0)
		return 1;
	return 0;
}

//hàm kiểm tra chuỗi tmp có nằm trong mangrp[ hay khong]
int KiemTraCMNDTrung(char tmp[10], char mang[][14], int n)//kiem tra cmnd[i]
{
	for (int i = 1; i <= n; i++)
	if (strcmp(tmp, mang[i]) == 0)
		return 1;
	return 0;
}

//ham kiem tra sach co bi trung khong
int KiemTraSachTrung(char sach[], char masach[][10], int n)
{
	for (int i = 1; i <= n; i++)
	if (strcmp(sach, masach[i]) == 0) return 1;
	return 0;
}

//hàm kiểm tra chuỗi tmp có nằm trong theloai[ư hay khong , có trả 1 khong trả 0
int KiemTraTheLoaiTrung(char tmp[], char theloai[][25], int n)
{
	for (int i = 1; i <= n; i++)
	if (strcmp(tmp, theloai[i]) == 0) return 1;
	return 0;
}

