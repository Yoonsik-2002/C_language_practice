// ������ ���� �޴��� �����, ����ڰ� �ùٸ� �޴��� �����ϸ� �����ϰ� �ƴϸ� ��� �ݺ��ϴ� ���α׷�

#include <stdio.h>

int main(void)
{
	do {
		printf("Menu[1]  : ������Ƽ\n");
		printf("Menu[2] : ����\n");
		printf("Menu[3] : ġŲ\n");
		printf("Menu[4] : ����\n");

		int n;
		printf("�ֹ��Ͻ� ������ �޴���ȣ�� �Է��ϼ��� : ");
		scanf_s("%d", &n);

		if (n >= 1 && n <= 4)
			printf("�ֹ��� �Ϸ�Ǿ����ϴ� ��ø� ��ٷ� �ּ���");
			break;


	} while (1);

	return 0;
}