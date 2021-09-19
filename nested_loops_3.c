// 층을 입력받아, 그 수 만큼 '*'을 출력하여 쌓는 프로그램

#include<stdio.h>

int main(void)
{
	int num;
	printf("몇 층을 쌓을까? : ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++) {
		for (int h = 1; h <= num; h++) {
			printf("*");
		}
		puts("");
	}
	return 0;
}