/*#include <stdio.h>

int functionTest() {
	int temp = 5;
	temp += result;

	return temp;
}

int main() {
	int result = 10;
	printf("result ��� : %d", functionTest());

	return 0;
}*/

/*#include <stdio.h>

int global = 10;

void globalTest()
{
	global += 5;
	printf("�Լ����� ���� ���� : %d\n", global);
}

int main()
{
	int result = 10;
	printf("�������� : %d\n", global);
	printf("�������� : %d\n", result);

	globalTest(); // �Լ� ȣ�� ���⼭ globalTest�Լ� ����,���.

	return 0;
}*/


/*#include <stdio.h>

int add1(int a, int b); // �Լ� add1����

void main()
{
	int a = 10, b = 8;

	int sum = add1(a, b); // �Լ� add1 ȣ��, �Լ� ��ȯ���� sum�� ����
	
	printf("�� : %d\n", sum);
}

int add1(int a, int b)
{
	int sum = a + b;

	return (sum); // ��ȣ ���� ���� 
}*/

// 1 �������� ǥ���Է����� ���� ���� �������� ���� ���ϴ� �Լ� getsum()

/*#include <stdio.h>

int getsum(int);

void main()
{
	int max;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &max);

	printf("1���� %d������ ���� : %d", max, getsum(max));

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

	printf("�� ����, �ִ밪�� : %d\n", findMax(a, b));

	int minimum = findMin(a, b);
	printf("�� ����, �ּҰ��� : %d\n", minimum);

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

	printf("�� ���� �� : %d\n", sum);
}*/

/*#include <stdio.h>

int add2(int, int);		// - �Լ� ����
int findMax(int, int);
void findMin(int, int); // -

void main()
{
	int a = 20, b = 30;

	printf("a + b : %d\n", add2(a, b)); // �Լ� ȣ��

	int Max = findMax(a, b); // �Լ� ȣ��
	printf("�ִ밪 : %d\n", Max); 

	findMin(a, b); // (��ȯ���� ����) �Լ� ȣ��--``

	return 0;
}*/

#include <stdio.h>

int sumary(int* ary, int SIZE); 
// int summaryf(int ary[], int SIZE); �� �����ϴ�.

int main(void)
{
	int point[] = { 95, 88, 76, 54, 85, 33, 65, 78, 99, 82 };
	int* address = point;	
	int aryLength = sizeof(point) / sizeof(int); // �迭 point�� {95 ~ 82} 10 ���� int�� �����Ͱ� ����Ǿ� �ִ�. => 4 * 10 = 40 Byte.  �̰��� int (4 Byte)�� ������. �̰��� �迭 point�� �迭ũ�� �̴�.

	int sum = 0; 
	 
	for (int i = 0; i < aryLength; i++)
		sum += *(point + 1);
	/* sum += *(point++)�� �Ұ����ϴ�.�Ϲ������� �迭���� '������ ���' ��� �Ѵ�.�̴� ������ ������ ��������� ����� Ư���� ��Ÿ���ٴ� �ǹ��̴�.
	�迭���� �迭 ��ü�� �ǹ��ϱ⵵ ������, �迭�� �����ּҰ��� ��Ÿ���⵵ �Ѵ�. (�迭�� ���۹��� : point[0]�� �ּҰ��� &point[0])
	�迭�� ���۹����� �������� �޸𸮻� ���������� �پ��ֱ� ������ point(�迭�̸� - �迭�� �����ּ�)�� ����Ű�� �ּҰ� ���ϰ� �Ǹ� �迭 ������ ������ �ȴ�. 
	�׷��� point(�迭�̸�)�� ����Ű�� �ּҸ� ���ٲٰ� �ϱ� ���� �迭 �������� ��������� �����Ǿ� �ִ�.*/

	// sum += *(address++);�� address�� ������ �����̱� ������ �����ϴ�.

	printf("���ο��� ���� ���� %d\n", sum);
	address = point; // ������ ���� address = &point[0];
	printf("�Լ� summary() ȣ��� ���� ���� %d\n", sumary(point, aryLength));
	printf("�Լ� summary() ȣ��� ���� ���� %d\n", sumary(&point[0], aryLength));
	printf("�Լ� summary() ȣ��� ���� ���� %d\n", sumary(address, aryLength));

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