#include "KiemTraXuLiChuoi.h"

//xu li chuoi
void NhapChuoi(char *p, char ThongBao[255])
{
	do
	{
		printf("%s", ThongBao);
		fflush(stdin);
		gets(p);
		if (strlen(p) < 1)
			printf("\nKhong duoc de trong. Moi nhap lai.\n");
	} while (strlen(p) < 1);
	ChuanHoaChuoi(p);
}
void XuatChuoi(char *p, char ThongBao[255])
{
	printf("%s", ThongBao);
	printf("%s", p);
}

//xu li chuoi
void ChuanHoaChuoi(char*s)
{
	while (s[0] == ' ' || s[0] == '\t')
		strcpy(&s[0], &s[1]);// xoa ki tu chua dau cach
	// xoa ki tu trang o cuoi xau
	while (s[strlen(s) - 1] == ' ' || s[strlen(s) - 1] == '\t')
		strcpy(&s[strlen(s) - 1], &s[strlen(s)]);//xoa ki tu chua dau cach

	//xoa ki tu trang thua o giua xau

	for (int i = 0; i<strlen(s); i++)
	if ((s[i] == ' ') && (s[i + 1] == ' '))
	{
		strcpy(&s[i], &s[i + 1]);
		i--;
	}

}


//kiem tra chuoi bi trung cua DOC GIA
int KiemTraMaDocGiaTrung(char*chuoi, DocGia m[MAX], int SoDocGia)
{
	for (int i = 1; i <= SoDocGia; i++)
	if (strcmp(chuoi, m[i].madg) == 0)
		return i;
	return 0;
}
int KiemTraCMNDTrung(char*chuoi, DocGia m[MAX], int SoDocGia)
{
	for (int i = 1; i <= SoDocGia; i++)
	if (strcmp(chuoi, m[i].cmnd) == 0)
		return i;
	return 0;
}

//kiem tra sach
int KiemTraISBNTrung(char*chuoi, Sach p[MAX], int SoSach)
{
	for (int i = 1; i <= SoSach; i++)
	if (strcmp(chuoi, p[i].masach) == 0)
		return i;
	return 0;
}
int KiemTraTheLoaiTrung(char*chuoi, Sach p[MAX], int SoSach)
{
	for (int i = 1; i <= SoSach; i++)
	if (strcmp(chuoi, p[i].masach) == 0)
		return i;
	return 0;
}