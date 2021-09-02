//반복문 for문을 이용하여 2단부터 9단까지 구구단의 제목을 출력하는 프로그램을 작성하시오.

#include <stdio.h>
#define MAX 9

int main(void)
{
	int i;

	printf("=== 구구단 출력 ===\n");

	for (i = 1; i <= 9; ++i)
	{
		printf("구구단 %d 단 출력\n", i);
	}
	
	printf("\n 제어변수 => %d\n", i);

	return 0;
}