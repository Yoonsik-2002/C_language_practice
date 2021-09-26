// n개의 양의 정수를 입력받아 홀수의합과 짝수의 합을 출력하는 프로그램을 작성하시오

#include <stdio.h>

int main(void)
{
	int input, odd_num = 0, even_num = 0, count = 0, max;

	printf("몇개의 정수를 입력하실건가요 ? : ");
	scanf_s("%d", &max);

	do {
		printf("정수를 입력하세요 : ");
		scanf_s("%d", &input);
		if (input % 2 == 0)
			even_num += input;
		else if (input %2 != 0)
			odd_num += input;	
		count++;
	} while (count < max);

	printf("\n* 짝수의 합 : %d \n* 홀수의 합 : %d", even_num, odd_num);

	return 0;
}