//for문을 이용하여 "C 언어 재미있네요!" 라는 문구에 정수를 1에서 5까지 함께 출력하는 프로그램을 작성하시오.

#include <stdio.h>
#define MAX 5

int main(void)
{
	int i;

	for (i = 1; i <= MAX; i++)
	{
		printf("C 언어 재미있네요! %3d\n", i);
	}

	printf("\n제어변수 => %2d", i);

	return 0;
}
