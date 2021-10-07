// 포인터 변수의 간단한 덧셈 뺄셈 연산

#include <stdio.h>

int main(void)
{
	int* ptrint = (int*)100; // 포인터 변수에 주소값이 아닌 일반 정수를 저장할 경우 경고 발생 -> 포인터 자료형으로 반환하는 연산식 (int*) 100을 사용하여 저장
	char* ptrchar = (char*)100;
	double* ptrd = (double*)100;

	printf("%u	%u	%u\n", (int)(ptrint - 1), (int)(ptrint), (int)(ptrint + 1)); // 4씩 커짐/작아짐
	printf("%u	%u	%u\n", (int)(ptrchar - 1), (int)(ptrchar), (int)(ptrchar + 1)); // 1씩 커짐/작아짐
	printf("%u	%u	%u\n", (int)(ptrd - 1), (int)(ptrd), (int)(ptrd + 1)); // 8씩 커짐/작아짐

	return 0;
}