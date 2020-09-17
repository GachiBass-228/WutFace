#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int
main()
{
	int a, b;
	printf("Input first number ");
	scanf("%d", &a);
	printf("Input second number ");
	scanf("%d", &b);
	if (b == 0) {
		printf("no solutions");
	}
	else {


		printf("%d %% %d = %d\n", a, b, a % b);
	}
	return 0;
}