#include <stdio.h>
#define MAX 10

int main(void)
{
	for (int i = 1; i <= MAX; i++)
		printf("%3d", i);

	int r = 1;

	while (r <= MAX)
	{
		printf("%3d", r);
		r++;
	}

	return 0;
}