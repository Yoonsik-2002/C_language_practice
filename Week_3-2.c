// n���� ���� ������ �Է¹޾� Ȧ�����հ� ¦���� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�

#include <stdio.h>

int main(void)
{
	int input, odd_num = 0, even_num = 0, count = 0, max;

	printf("��� ������ �Է��Ͻǰǰ��� ? : ");
	scanf_s("%d", &max);

	do {
		printf("������ �Է��ϼ��� : ");
		scanf_s("%d", &input);
		if (input % 2 == 0)
			even_num += input;
		else if (input %2 != 0)
			odd_num += input;	
		count++;
	} while (count < max);

	printf("\n* ¦���� �� : %d \n* Ȧ���� �� : %d", even_num, odd_num);

	return 0;
}