// ������ ������ ������ ���� ���� ����

#include <stdio.h>

int main(void)
{
	int* ptrint = (int*)100; // ������ ������ �ּҰ��� �ƴ� �Ϲ� ������ ������ ��� ��� �߻� -> ������ �ڷ������� ��ȯ�ϴ� ����� (int*) 100�� ����Ͽ� ����
	char* ptrchar = (char*)100;
	double* ptrd = (double*)100;

	printf("%u	%u	%u\n", (int)(ptrint - 1), (int)(ptrint), (int)(ptrint + 1)); // 4�� Ŀ��/�۾���
	printf("%u	%u	%u\n", (int)(ptrchar - 1), (int)(ptrchar), (int)(ptrchar + 1)); // 1�� Ŀ��/�۾���
	printf("%u	%u	%u\n", (int)(ptrd - 1), (int)(ptrd), (int)(ptrd + 1)); // 8�� Ŀ��/�۾���

	return 0;
}