// �� ���� �о� �鿩�� �� �� ���� ū ���� ã�� ����ϴ� ���α׷��� ���� ���α׷��� �ۼ��Ͻÿ�.

#include<stdio.h>

int main(void)
{
	int n1, n2, n3, large;
	printf("���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &n1, &n2, &n3);
	
	if (n1 > n2)
		large = n1;
	else large = n2;

	if (n3 > large)
		large = n3;
	printf("���� ū ���� : %d", large);

	return 0;

}