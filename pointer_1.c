#include <stdio.h>

int main(void)
{
	int data = 27;
	int* ptrint; // ������ ���� ����

	ptrint = &data; // ptrint�� data�� �ּҰ��� ����Ű�� �ִ� ������ ����.

	// ������, �ּҰ�, ���尪 ���

	printf("������		�ּҰ�		���尪\n");
	printf("-------------------------------------------\n");
	printf("  data     %p  %8d\n", &data, data);
	printf("ptrint     %p     %p\n", &ptrint, ptrint); // ptrint�� �����ϰ� �ִ� �� : data�� �ּҰ�(&data) = ptrint

	return 0;
}