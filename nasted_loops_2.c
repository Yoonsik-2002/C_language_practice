// ������ ���� : ����� �� �� �� �Է¹޾� �������� ����ϴ� ���α׷�

#include<stdio.h>

int main(void)
{
	int number;
	printf("����ϰ� ���� �������� �� �� �� �Է��ϼ��� : ");
	scanf_s("%d", &number);

	for (int i = 1; i < 10; i++) {
		printf("%d X %d = %d", number, i, number * i);
		puts("");
	}

	return 0;
}