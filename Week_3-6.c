// 0�̳� ������ ���� ������ ����� ���� ��, �Էµ� �����ͼ��� �ִ밪�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�(ù �����Ͱ� ������ ��� ��no data"�� ����Ѵ�)

#include<stdio.h>

int main(void)
{
	int num, size = 0, max = 0;

	printf("������ �Է� : \n");
	scanf_s("%d", &num);
	while (num > 0) {
		size++;
		if (num > max) max = num;
		scacf_s("%d", &num);
	}
	printf("������ ��: %d\n", size);
	if (size)
		printf("�ִ밪 : %d\n", max);
	else
		printf("No data\n");

	return 0;
}