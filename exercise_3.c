// for문과 while문을 이용하여 각각 1에서부터 표준입력으로 받은 양의 정수까지의 합을 구하는 프로그램을 작성하시오.

#include <stdio.h>

int main(void)
{
    int i, max, sum;

    printf("정수를 입력하시오 : ");
    scanf_s("%d", &max);

    for (i = 1, sum = 0; i <= max; i++)
        sum += i;

    printf("\n1부터 %3d까지의 합은 => %3d\n", max, sum);


    i = 1, sum = 0;

    while (i <= max)
    {
        sum += i++;
    }
    printf("\n1부터 %3d까지의 합은 => %3d", max, sum);


    return 0;
}