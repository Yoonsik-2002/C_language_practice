// ���� ������ �о� ���ڸ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�

#include<stdio.h>

int main(void)
{
	int r, num;
	
	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &num);

	while (num != 0) {
		r = num % 10;
		num = num / 10;
		printf("%d", r);
	}

	return 0;
}