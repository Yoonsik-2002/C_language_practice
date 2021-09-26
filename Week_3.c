// 세 수를 읽어 들여서 그 중 가장 큰 값을 찾아 출력하는 프로그램에 대한 프로그램을 작성하시오.

#include<stdio.h>

int main(void)
{
	int n1, n2, n3, large;
	printf("정수 세개를 입력하세요 : ");
	scanf_s("%d %d %d", &n1, &n2, &n3);
	
	if (n1 > n2)
		large = n1;
	else large = n2;

	if (n3 > large)
		large = n3;
	printf("가장 큰 값은 : %d", large);

	return 0;

}