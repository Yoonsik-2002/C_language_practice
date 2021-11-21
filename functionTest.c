/*#include <stdio.h>

int functionTest() {
	int temp = 5;
	temp += result;

	return temp;
}

int main() {
	int result = 10;
	printf("result 결과 : %d", functionTest());

	return 0;
}*/

/*#include <stdio.h>

int global = 10;

void globalTest()
{
	global += 5;
	printf("함수에서 전역 변수 : %d\n", global);
}

int main()
{
	int result = 10;
	printf("전역변수 : %d\n", global);
	printf("지역변수 : %d\n", result);

	globalTest(); // 함수 호출 여기서 globalTest함수 실행,출력.

	return 0;
}*/


/*#include <stdio.h>

int add1(int a, int b); // 함수 add1선언

void main()
{
	int a = 10, b = 8;

	int sum = add1(a, b); // 함수 add1 호출, 함수 반환값을 sum에 저장
	
	printf("함 : %d\n", sum);
}

int add1(int a, int b)
{
	int sum = a + b;

	return (sum); // 괄호 생략 가능 
}*/

// 1 에서부터 표준입력으로 받은 양의 정수까지 합을 구하는 함수 getsum()

/*#include <stdio.h>

int getsum(int);

void main()
{
	int max;

	printf("정수를 입력하세요 : ");
	scanf_s("%d", &max);

	printf("1부터 %d까지의 합은 : %d", max, getsum(max));

	return 0;
}

int getsum(int n)
{
	int sum = 0; 

	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}

	return sum;
}*/


/*#include <stdio.h>

int findMax(int, int);
int findMin(int, int);
void add2(int, int);

void main()
{
	int a = 10, b = 17;

	printf("두 수중, 최대값은 : %d\n", findMax(a, b));

	int minimum = findMin(a, b);
	printf("두 수중, 최소값은 : %d\n", minimum);

	add2(a, b);

	return 0;
}

int findMax(int a, int b)
{
	int max;

	if (a >= b)
		max = a;
	else
		max = b;

	return max;
}

int findMin(int a, int b)
{
	int min;

	if (a <= b)
		min = a;
	else
		min = b;

	return min;
}

void add2(int a, int b)
{
	int sum;
	sum = a + b;

	printf("두 수의 합 : %d\n", sum);
}*/

/*#include <stdio.h>

int add2(int, int);		// - 함수 선언
int findMax(int, int);
void findMin(int, int); // -

void main()
{
	int a = 20, b = 30;

	printf("a + b : %d\n", add2(a, b)); // 함수 호출

	int Max = findMax(a, b); // 함수 호출
	printf("최대값 : %d\n", Max); 

	findMin(a, b); // (반환값이 없는) 함수 호출--``

	return 0;
}*/

#include <stdio.h>

int sumary(int* ary, int SIZE); 
// int summaryf(int ary[], int SIZE); 도 가능하다.

int main(void)
{
	int point[] = { 95, 88, 76, 54, 85, 33, 65, 78, 99, 82 };
	int* address = point;	
	int aryLength = sizeof(point) / sizeof(int); // 배열 point는 {95 ~ 82} 10 개의 int형 데이터가 저장되어 있다. => 4 * 10 = 40 Byte.  이것을 int (4 Byte)로 나눈다. 이것이 배열 point의 배열크기 이다.

	int sum = 0; 
	 
	for (int i = 0; i < aryLength; i++)
		sum += *(point + 1);
	/* sum += *(point++)는 불가능하다.일반적으로 배열명은 '포인터 상수' 라고 한다.이는 포인터 변수와 비슷하지만 상수적 특성을 나타낸다는 의미이다.
	배열명은 배열 전체를 의미하기도 하지만, 배열의 시작주소값을 나타내기도 한다. (배열의 시작번지 : point[0]의 주소값인 &point[0])
	배열은 시작번지를 시작으로 메모리상에 연속적으로 붙어있기 때문에 point(배열이름 - 배열의 시작주소)가 가리키는 주소가 변하게 되면 배열 정보가 엉망이 된다. 
	그래서 point(배열이름)가 가리키는 주소를 못바꾸게 하기 위해 배열 생성부터 상수값으로 고정되어 있다.*/

	// sum += *(address++);는 address는 포인터 변수이기 때문에 가능하다.

	printf("메인에서 구한 합은 %d\n", sum);
	address = point; // 포인터 변수 address = &point[0];
	printf("함수 summary() 호출로 구한 합은 %d\n", sumary(point, aryLength));
	printf("함수 summary() 호출로 구한 합은 %d\n", sumary(&point[0], aryLength));
	printf("함수 summary() 호출로 구한 합은 %d\n", sumary(address, aryLength));

	return 0;
}

int sumary(int* ary, int SIZE)
{
	int sum = 0;
	for (int i = 0; i < SIZE; i++) {
		sum += *(ary + i);
	}

	return sum;
}