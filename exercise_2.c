// for문을 이용하여 1에서 10까지의 합을 구하는 다양한 프로그램을 작성하시오.
#include <stdio.h>
#define MAX 10

int main(void)
{
	int i, sum;

	for (i = 1, sum = 0; i <= MAX; i++)
		sum += i;
	printf("1에서 10까지의 합 : %2d\n", sum);

	for (i = 1, sum = 0; i <= MAX; i)
		sum += i++;
	printf("1에서 10까지의 합 : %2d\n", sum);

	for (i = 1, sum = 0; i <= MAX; ++i)
		sum += i;
	printf("1에서 10까지의 합 : %2d\n", sum);

	for (i = 1, sum = 0; i <= MAX; sum += i++);
	printf("1에서 10까지의 합 : %2d\n", sum);

	return 0;

}