// ���� ������ �Է¹޾� ���� ����ϰ� 0 �Ǵ� ������ �Է� �� ������ ��� �����ϴ� ���α׷� 

#include<stdio.h>

int main(void)
{
	int input;
	printf("���� ������ �Է��ϼ��� [���� : 0] : ");
	scanf_s("%d", &input);

	int i, j, sum;

	do {
		for (i = 1; i <= input; i++) {
			for (j = 1, sum = 0; j <= i; j++) {
				printf("%d", j);
				j == i ? printf("=") : printf("+");
				sum += j;
			}
			printf("%d\n", sum);
		}
	} while (input <= 0);

	return 0;
}