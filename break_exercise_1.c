// ���� - ����, ���, 0(����)�� �Է¹޾�, �Է¹��� ���� ����ϰ� �Է¹��� ���� ���� 0 �Ͻ�, �����ϴ� ���α׷�

#include <stdio.h>

int main(void)
{
	int input; 

	while (1)
	{
		printf("����[����, 0(����), ���]�� �Է� �� [Enter] : ");
		scanf_s("%d", &input);

		printf("�Է� ���� �� : %d\n", input);

		if (input == 0)
		{
			printf("\n���α׷��� �����մϴ�.\n");
			break;
		}
	}

	return 0;
}