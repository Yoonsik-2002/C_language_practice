// 간단한 음식 메뉴를 만들어, 사용자가 올바른 메뉴를 선택하면 종료하고 아니면 계속 반복하는 프로그램

#include <stdio.h>

int main(void)
{
	do {
		printf("Menu[1]  : 스파케티\n");
		printf("Menu[2] : 피자\n");
		printf("Menu[3] : 치킨\n");
		printf("Menu[4] : 맥주\n");

		int n;
		printf("주문하실 음식의 메뉴번호를 입력하세요 : ");
		scanf_s("%d", &n);

		if (n >= 1 && n <= 4)
			printf("주문이 완료되었습니다 잠시만 기다려 주세요");
			break;


	} while (1);

	return 0;
}