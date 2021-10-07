#include <stdio.h>

int main(void)
{
	int data = 100;
	char ch = 'A';

	int* ptrint = &data; // int* 과 ptrint를 따로 생각하면 이해하기 쉬움. ptrint = &data, *ptrint = 100
	char* ptrchar = &ch; // char* ptrchar = &ch 도 마찬가지

	*ptrint = 200;
	*ptrchar = 'B';

	printf("%d %c", data, ch);

	return 0;
}