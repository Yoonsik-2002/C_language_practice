// 0~100점 n명 학생의 성적을 입력 받아 평균과 최고점을 출력하는 프로그램을 작성하시오

#include<stdio.h>

int main(void)
{
	int student;
	printf("반 인원을 입력해 주세요 : ");
	scanf_s("%d", &student);

	int score = 0, avg = 0, max = 0, count = 0;
	do {

		printf("학생의 성적을 입력해 주세요 : ");
		scanf_s("%d", &score);

		avg += score;
		if (max < score) {
			max = score;
		}
		count++;
	} while (count < student);

	printf("\n최고점수 : %d \n 반 평균 : %d", max, avg / student);

	return 0;
}
