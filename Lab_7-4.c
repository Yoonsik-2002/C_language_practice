// 분기문 continue문을 사용하여 1부터 15까지의 정수 중에서 5의 배수가 아닌 수를 출력하는 프로그램을 작성하시오. 

#include<stdio.h>
# define MAX 15

int main(void)
{
	for (int i = 1; i <= MAX; i++) {
		if (i % 5 == 0) {
			continue;
		}
		printf("%3d", i);
	}
	puts("");
	return 0;
}