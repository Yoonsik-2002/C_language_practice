// 양의 정수를 입력받아 합을 출력하고 0 또는 음수를 입력 할 때까지 계속 수행하는 프로그램 

#include<stdio.h>

int main(void)
{
	int input;
	printf("양의 정수를 입력하세요 [종료 : 0] : ");
	scanf_s("%d", &input);

	int i, j, sum;

	do {
		for (i = 1; i <= input; i++) {
			for (j = 1, sum = 0; j <= i; j++) {
				printf("%d", j);
				j == i ? printf("=") : printf("+");
				sum += j;
			}
			printf("%d\n", sum);
		}
	} while (input <= 0);

	return 0;
}