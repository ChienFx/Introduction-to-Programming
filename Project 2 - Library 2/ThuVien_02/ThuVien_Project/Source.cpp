#include "Menu.h"
#include "NgayThang.h"
#include "DauSach.h"
#include "DocGia.h"
void main()
{
	DocGia DSDocGia[MAX];
	int SoDocGia = 0;
	Sach DSDauSach[MAX];
	int SoDauSach = 0;
	LoadDuLieuDocGia(DSDocGia, SoDocGia);
	LoadDuLieuSach(DSDauSach, SoDauSach);

	MenuChinh(DSDocGia, SoDocGia,DSDauSach,SoDauSach);
	//LoadDuLieuDocGia(DSDocGia, SoDocGia);
	//ThemDocGia(DSDocGia, SoDocGia);
	//TimKiemDocGia(DSDocGia, SoDocGia);
	//ChinhSuaDocGia(DSDocGia, SoDocGia);
	//XoaDocGia(DSDocGia, SoDocGia);
	//GhiThongTinDocGiaLenFile(DSDocGia, SoDocGia);
	/*date p1, p2;
	NhapNgay(p1, "P1:");
	NhapNgay(p2, "P2:");
	printf("\n%d", TinhSoNgayChenhLech(p1, p2));
	_getch();*/
}