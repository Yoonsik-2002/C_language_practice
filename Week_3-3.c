// 양의 정수를 읽어 끝자리부터 출력하는 프로그램을 작성하시오

#include<stdio.h>

int main(void)
{
	int r, num;
	
	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &num);

	while (num != 0) {
		r = num % 10;
		num = num / 10;
		printf("%d", r);
	}

	return 0;
}