//Hàm kiểm tra số thuận nghịch (số ghánh)
int ThuanNghich(int n)
{
	int Temp = n;
	int NumNew = Temp % 10;
	Temp /= 10;
	while (Temp > 0)
	{
		NumNew = NumNew * 10 + Temp % 10;
		Temp /= 10;
	}
	if (n != NumNew) return 0;
	return 1;
}