#include <stdio.h>

int main(void) {
	short data[9] = { 4, 6, 9, 8, 7, 2, 5, 1, 3 };

	int big = 0, tmp = 0;
	// 가장 큰 값 찾기
	for (int i = 0; i < 9; i++) {
		if (big < data[i])
			big = data[i];
	}

	printf("result: %d\n", big);
}