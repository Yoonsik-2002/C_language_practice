//n개의 물건값에 대하여 원가격(price)과 할인비율(rate)을 읽어 들여 지불금액(total_price)를 출력하는 프로그램을 작성하시오
/*#include <stdio.h>

int main(void)
{
	int n, price;
	int	total_price = 0;
	float rate;
	
	printf("구매한 물건의 개수를 입력하시오 : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		printf("물건의 원가격과 할인비율을 입력하시오: ");
		scanf_s("%d %fl", &price, &rate);
		total_price += (price * (1 - rate));
	}
	printf("\nTotal price = %d\n", total_price);

	return 0;
}*/