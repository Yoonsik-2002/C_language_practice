// �ʱⰪ�� �������� 10���� �����ϴ� 3���� �����µ��� ȭ���µ��� ��ȯ�Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. celcius �ʱⰪ : 12.46

#include <stdio.h>
#define MAX 3
#define INCREASE 10

int main(void)
{
	int i;
	double celcius = 12.46;

	printf("   ����(C)   ȭ��(F)\n");
	printf("----------------------------\n");

	for (i = 1; i <= MAX; i++, celcius += 10)
	{
		printf("%8.2fl %8.2fl\n", celcius, 9.0 / 5 * celcius + 32);
	}

	printf("\n ����� => %2d\n", i);

	return 0;
}