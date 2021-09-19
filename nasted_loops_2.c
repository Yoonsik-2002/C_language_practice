// 구구단 변형 : 출력할 단 수 를 입력받아 구구단을 출력하는 프로그램

#include<stdio.h>

int main(void)
{
	int number;
	printf("출력하고 싶은 구구단의 단 수 를 입력하세요 : ");
	scanf_s("%d", &number);

	for (int i = 1; i < 10; i++) {
		printf("%d X %d = %d", number, i, number * i);
		puts("");
	}

	return 0;
}