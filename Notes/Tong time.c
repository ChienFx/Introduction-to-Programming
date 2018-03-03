int ChangeTime(int Gio,int Phut, int Giay)
{
	return Gio*3600 + Phut*60 + Giay;
} 
int main()
{
	int Temp = ChangeTime(Gio1,Phut1,Giay1)+ChangeTime(Gio2,Phut2,Giay2);
	Gio=Temp/3600;Temp-=Gio*3600;Phut=Temp/60;Giay=Temp - Phut*60;
	printf("\nTong: %d Gio %d Phut %Giay",Gio,Phut,Giay);
	
	
	int Temp = abs(ChangeTime(Gio1,Phut1,Giay1)-ChangeTime(Gio2,Phut2,Giay2));
	Gio=Temp/3600;Temp-=Gio*3600;Phut=Temp/60;Giay=Temp - Phut*60;
	printf("\nHieu: %d Gio %d Phut %Giay",Gio,Phut,Giay);
}