#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, result = 1;
	scanf("%d", &N);
	printf("");

	for (int i = N; i > 0; i--)
	{
		result *= i;
	}
	printf("%d", result);
}