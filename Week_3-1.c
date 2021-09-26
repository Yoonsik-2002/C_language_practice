// 50개의 수(data)를 읽어 들여 그 수가 0보다 크면 pos_sum에 더하고 0보다 작으면 nega_sum에 더하여 그 결과 pos_sum과 nega_sum을 출력하는 프로그램을 작성하시오

#include<stdio.h>

#define MAX 50

int main(void)
{
	int count = 0, pos_sum = 0, nega_sum = 0, input;

	do {
		printf("정수를 입력하세요 : ");
		scanf_s("%d", &input);

		if (input > 0)
			pos_sum += input;
		else
			nega_sum += input;
		count += 1;

	} while (count < MAX);

	printf("\n입력받은 양의정수 : %d \n입력받은 음의정수 : %d", pos_sum, nega_sum);

	return 0;
}