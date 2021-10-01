#include <stdio.h>

int main(void)
{
	int data = 27;
	int* ptrint; // 포인터 변수 선언

	ptrint = &data; // ptrint는 data의 주소값을 가리키고 있는 포인터 변수.

	// 변수명, 주소값, 저장값 출력

	printf("변수명		주소값		저장값\n");
	printf("-------------------------------------------\n");
	printf("  data     %p  %8d\n", &data, data);
	printf("ptrint     %p     %p\n", &ptrint, ptrint); // ptrint가 저장하고 있는 값 : data의 주소값(&data) = ptrint

	return 0;
}