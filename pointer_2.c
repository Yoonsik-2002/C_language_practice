#include <stdio.h>

int main(void)
{
	int data = 100;
	char ch = 'A';

	int* ptrint = &data; // int* �� ptrint�� ���� �����ϸ� �����ϱ� ����. ptrint = &data, *ptrint = 100
	char* ptrchar = &ch; // char* ptrchar = &ch �� ��������

	*ptrint = 200;
	*ptrchar = 'B';

	printf("%d %c", data, ch);

	return 0;
}