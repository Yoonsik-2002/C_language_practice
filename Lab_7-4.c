// �б⹮ continue���� ����Ͽ� 1���� 15������ ���� �߿��� 5�� ����� �ƴ� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 

#include<stdio.h>
# define MAX 15

int main(void)
{
	for (int i = 1; i <= MAX; i++) {
		if (i % 5 == 0) {
			continue;
		}
		printf("%3d", i);
	}
	puts("");
	return 0;
}