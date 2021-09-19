// 중첩된 반복문을 이용하여 만든 2단부터 9단까지 구구단을 출력하는 프로그램
#include<stdio.h>

int main(void)
{
	for (int i = 2; i < 10; i++) {
		for (int n = 1; n < 10; n++) {
			printf("%d X %d = %d", i, n, i * n);
			printf("\n");
		}
		puts("");
	}
	return 0;
}