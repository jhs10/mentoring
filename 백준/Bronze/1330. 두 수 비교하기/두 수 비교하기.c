#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A, B;
	scanf("%d %d", &A, &B);
	printf("");

	if (A > B)
		printf(">");
	else if (A < B)
		printf("<");
	else if (A == B)
		printf("==");
}