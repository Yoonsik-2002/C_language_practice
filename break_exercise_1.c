// ���� - ����, ���, 0(����)�� �Է¹޾�, �Է¹��� ���� ����ϰ� �Է¹��� ���� ���� 0 �Ͻ�, �����ϴ� ���α׷�

#include <stdio.h>

int maid(void)
{
	int input;

	while (1)
	{
		printf("����[����, 0(����), ���]�� �Է���, [Enter] : ");
		scanf_s("%d", &input);

		printf("�Է��� ���� : %d\n", input);
		if (input == 0)
			break;
	}
	puts("\n�����մϴ�.");

	return 0;
}