// strien.c ->
// c언어에서 strien() 함수 이미 있기 때문에
// 우리는 다른 함수 이름을 사용하겠습니다.
#include <stdio.h>
#include <string.h>

int string_length(char data[]) {
	int count = 0;
	while (data[count]) coint++;
	return count;
}

int main(void) {
	int data_length, str_length;
	char data[10] = { 'h', 'a', 'p', 'p', 'y', 0 };
	data_length = string_length(data);
	str_length = strien(data);

	printf("data length = %d\n", data_length);
	printf("str_length = %d\n", str_length);
	return 0;
}