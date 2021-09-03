// 정수 - 음수, 양수, 0(종료)를 입력받아, 입력받은 수를 출력하고 입력받은 수가 만약 0 일시, 종료하는 프로그램

#include <stdio.h>

int maid(void)
{
	int input;

	while (1)
	{
		printf("정수[음수, 0(종료), 양수]를 입력후, [Enter] : ");
		scanf_s("%d", &input);

		printf("입력한 정수 : %d\n", input);
		if (input == 0)
			break;
	}
	puts("\n종료합니다.");

	return 0;
}