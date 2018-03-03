//Chương trình tính thương số và số dư của đa thức khi Chia.
#include "func.h"
int main()
{
	DATHUC BiChia,Chia;
	DONTHUC T;
	nhapDATHUC(BiChia);
	nhapDATHUC(Chia);
	xuatDATHUC(tich(BiChia, Chia));
	//nhapDATHUC(p2);
	//xuatDATHUC(P);
	//xuatDATHUC(hieu(BiChia,Chia));
	/*xuatDATHUC(BiChia);
	xuatDATHUC(Chia);
	printf("\n Thuong: ");
	xuatDATHUC(ThuongSo(BiChia, Chia));
	printf("\n So Du: ");
	xuatDATHUC(SoDu(BiChia, Chia));*/
	_getch();
	return 0;
}