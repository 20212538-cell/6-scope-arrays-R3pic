#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand_num;

void gameInit(void) {
	srand(time(0));
	rand_num = rand() % 10 + 1;

}

void gamePlay(void) {
	int guess = 0, count = 0, allowed = 5;

	printf("Guess Number (1~10): ");
}

int main(void) {
	gameInit();
	gamePlay();

	return 0;
}