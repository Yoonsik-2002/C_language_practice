// for���� �̿��Ͽ� 1���� 10������ ���� ���ϴ� �پ��� ���α׷��� �ۼ��Ͻÿ�.
#include <stdio.h>
#define MAX 10

int main(void)
{
	int i, sum;

	for (i = 1, sum = 0; i <= MAX; i++)
		sum += i;
	printf("1���� 10������ �� : %2d\n", sum);

	for (i = 1, sum = 0; i <= MAX; i)
		sum += i++;
	printf("1���� 10������ �� : %2d\n", sum);

	for (i = 1, sum = 0; i <= MAX; ++i)
		sum += i;
	printf("1���� 10������ �� : %2d\n", sum);

	for (i = 1, sum = 0; i <= MAX; sum += i++);
	printf("1���� 10������ �� : %2d\n", sum);

	return 0;

}