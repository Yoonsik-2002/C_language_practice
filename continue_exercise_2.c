// continue���� �̿��Ͽ� ���� 1���� 20������ ���� �߿��� 4�� ������ �������� �ʴ� ���� ����ϴ� ���α׷�

#include <stdio.h>

int main(void)
{
	const int MAX = 20; // const���(const �ڷ��� ����̸� = ��;) -> �� ����

	printf("1���� %d���� ���� �߿��� 3���� ������ �������� �ʴ� ��\n", MAX);
	for (int i = 1; i <= MAX; i++)
	{
		if (i % 4 == 0)
			continue;
		printf("%3d", i);	
	}
	puts("");

	return 0;
}
