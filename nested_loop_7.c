// ÇÇ¶ó¹Ìµå ½×±â

#include<stdio.h>

int main(void)
{
	int i, j, s, n, input;
	printf("¸î ÃþÀ» ½×À»±î? : ");
	scanf_s("%d", &input);

	for (i = 1; i <= input; i++) {
		for (s = i; s <= input - 1; s++) {
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf("*");
			}
		for (n = 1; n <= i - 1; n++) {
			printf("*");
		}
	puts("");
	}

	return 0;
}