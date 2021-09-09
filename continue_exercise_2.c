// continue문을 이용하여 만든 1에서 20까지의 정수 중에서 4로 나누어 떨어지지 않는 수를 출력하는 프로그램

#include <stdio.h>

int main(void)
{
	const int MAX = 20; // const상수(const 자료형 상수이름 = 값;) -> 값 고정

	printf("1에서 %d까지 정수 중에서 3으로 나누어 떨어지지 않는 수\n", MAX);
	for (int i = 1; i <= MAX; i++)
	{
		if (i % 4 == 0)
			continue;
		printf("%3d", i);	
	}
	puts("");

	return 0;
}
