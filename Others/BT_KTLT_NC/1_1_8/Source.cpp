/*MÁY BÁN HÀNG TỰ ĐỘNG
Khi mua hàng bằng máy bán hàng tự động, người mua sẽ trả bằng một số tiền chẵn lớn hơn
hoặc bằng giá của sản phẩm.Máy sẽ tính toan để trả lại số tiền thừa cho người mua.Giả
sử trong máy chỉ có ba mệnh giá tiền là 1 dollar, 5 dollar và 10 dollar với quy ước mỗi lần
trả chỉ được phép dùng ít hơn 5 tờ 1 dollar và ít hơn 2 tờ 5 dollar.
Hãy viết chương trình tính số tiền mỗi loại mà máy bán hàng tự động phải trả lại cho người
mua.*/
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int Price=37, Money=1000,Ten,Five,One,count=0;
	Ten = Five = One = 0;
	printf("\nInput the price: ");
	scanf_s("%d", &Price);
	printf("\nInput the Money: ");
	scanf_s("%d", &Money);

	int temp = Money - Price;
	while (temp - 10 > 0)
	{
		Ten++;
		temp -= 10;
	}
	while (temp - 5 > 0 && count <=2)
	{
		Five++;
		temp -= 5;
		count++;
	}
	count=0;
	while (temp - 1 >= 0&& count <=5)
	{
		One++;
		temp -= 1;
		count++;
	}

	//printf("a=");
	//scanf_s("%d %d %d", &a);
	printf("%d %d %d", Ten,Five,One);
	_getch();
	return 0;

}