// gl_game.c
#include <stdio.h>
#include <stdib.h>
#include <time.h>

int rand_num;

void gameinit(void) {
	srand(time(0));
	rand_num = rand() % 10 + 1; // (0-9) + 1 = [1,10]
}

void gamePlay(void) {
	// 지역 변수
	int guess = 0, count = 0, allowed = 5; //5개 추측만 가능

	printf("Guess the number (1-10): ");

	do {
		scanf_s("%d", &guess);
		count++;

		if (guess == rand_num) {
			printf("정답! Good! You win!");
			break;
		}
		else if (guess < rand_num) {
			printf("Too low! Try higher!");
		}
		else if (guess > rand_num) {
			printf("Too high! Try lower!");
		}
	} while (count != allowed);

	if (count > allowed) {
		printf("Too many guesses! You lose!");
	}
}
int main(void) {
	gameinit();
	gamePlay();
	return 0;
}