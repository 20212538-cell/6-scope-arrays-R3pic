// local.c
#include <stdio.h>

int result;

void Sum(int x, int y) {
	result = x + y;
}

int main(void) {
	int a = 3, b = 5;
	result = Sum(a, b);
		printf("%d + %d = %d", a, b, result);

	return 0;
}