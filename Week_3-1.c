// 50���� ��(data)�� �о� �鿩 �� ���� 0���� ũ�� pos_sum�� ���ϰ� 0���� ������ nega_sum�� ���Ͽ� �� ��� pos_sum�� nega_sum�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�

#include<stdio.h>

#define MAX 50

int main(void)
{
	int count = 0, pos_sum = 0, nega_sum = 0, input;

	do {
		printf("������ �Է��ϼ��� : ");
		scanf_s("%d", &input);

		if (input > 0)
			pos_sum += input;
		else
			nega_sum += input;
		count += 1;

	} while (count < MAX);

	printf("\n�Է¹��� �������� : %d \n�Է¹��� �������� : %d", pos_sum, nega_sum);

	return 0;
}