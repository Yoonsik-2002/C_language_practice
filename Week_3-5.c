// n�� �Է¹ް� ������ sum�� psum�� ����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�

#include<stdio.h>

int main(void)
{
	int n, i, j, ssum = 0, temp1, temp2;
	long psum = 0;
	
	printf("n �Է� : ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) {
		temp1 = 0;
		temp2 = 1;
		for (j = 1; j <= i; i++) {
			temp1 += j;
			temp2 += j;
		}
		ssum += temp1;
		psum += temp2;
	}
	printf("ssum = %d\n", ssum);
	printf("psum = %ld\n", psum);

	return 0;
}