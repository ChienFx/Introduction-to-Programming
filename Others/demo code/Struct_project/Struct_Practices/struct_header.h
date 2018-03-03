struct donthuc
{
	float a;
	int n;
};
typedef struct donthuc DONTHUC;

DONTHUC nhapdonthuc();
void xuatdonthuc(DONTHUC);
double tich(DONTHUC , DONTHUC ,float);
DONTHUC tich2(DONTHUC, DONTHUC);
DONTHUC daoham(DONTHUC);
DONTHUC thuong(DONTHUC, DONTHUC);
DONTHUC daohamk(DONTHUC, int);
