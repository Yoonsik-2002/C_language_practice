// 0~100�� n�� �л��� ������ �Է� �޾� ��հ� �ְ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�

#include<stdio.h>

int main(void)
{
	int student;
	printf("�� �ο��� �Է��� �ּ��� : ");
	scanf_s("%d", &student);

	int score = 0, avg = 0, max = 0, count = 0;
	do {

		printf("�л��� ������ �Է��� �ּ��� : ");
		scanf_s("%d", &score);

		avg += score;
		if (max < score) {
			max = score;
		}
		count++;
	} while (count < student);

	printf("\n�ְ����� : %d \n �� ��� : %d", max, avg / student);

	return 0;
}
