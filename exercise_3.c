// for���� while���� �̿��Ͽ� ���� 1�������� ǥ���Է����� ���� ���� ���������� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h>

int main(void)
{
    int i, max, sum;

    printf("������ �Է��Ͻÿ� : ");
    scanf_s("%d", &max);

    for (i = 1, sum = 0; i <= max; i++)
        sum += i;

    printf("\n1���� %3d������ ���� => %3d\n", max, sum);


    i = 1, sum = 0;

    while (i <= max)
    {
        sum += i++;
    }
    printf("\n1���� %3d������ ���� => %3d", max, sum);


    return 0;
}