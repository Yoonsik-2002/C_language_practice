// ���� �Է¹޾�, �� �� ��ŭ '*'�� ����Ͽ� �״� ���α׷�

#include<stdio.h>

int main(void)
{
	int num;
	printf("�� ���� ������? : ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++) {
		for (int h = 1; h <= num; h++) {
			printf("*");
		}
		puts("");
	}
	return 0;
}