// ��ø�� �ݺ����� �̿��Ͽ� ���� 2�ܺ��� 9�ܱ��� �������� ����ϴ� ���α׷�
#include<stdio.h>

int main(void)
{
	for (int i = 2; i < 10; i++) {
		for (int n = 1; n < 10; n++) {
			printf("%d X %d = %d", i, n, i * n);
			printf("\n");
		}
		puts("");
	}
	return 0;
}