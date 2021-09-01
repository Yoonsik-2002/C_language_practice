// 초기값을 시작으로 10도씩 증가하는 3개의 섭씨온도를 화씨온도로 변환하여 출력하는 프로그램을 작성하시오. celcius 초기값 : 12.46

#include <stdio.h>
#define MAX 3
#define INCREASE 10

int main(void)
{
	int i;
	double celcius = 12.46;

	printf("   섭씨(C)   화씨(F)\n");
	printf("----------------------------\n");

	for (i = 1; i <= MAX; i++, celcius += 10)
	{
		printf("%8.2fl %8.2fl\n", celcius, 9.0 / 5 * celcius + 32);
	}

	printf("\n 제어변수 => %2d\n", i);

	return 0;
}