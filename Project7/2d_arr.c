// 2d_arr.c
#include <stdio.h>

#define NUM_STDS 3
#define NUM_GRADES 4

float catcAvg(int data[]) {
	int sum = 0;
	for (int i = 0; i < NUM_GRADES; i++) {
		sum += data[i];
	}
	return sum / NUM_GRADES;
}

int main(void) {
	int grades[NUM_STDS][NUM_GRADES] = {
		{85, 45, 70, 93}, //학생1
		{74, 86, 93, 45}, //학생2
		{67, 37, 99, 97} //학생3
	};

	//각 학생의 점수 출력
	printf("Student grades:\n");
	for (int i = 0; i < NUM_STDS; i++) {
		printf("Student %d: ", i + 1); 
		for (int j = 0; j < NUM_GRADES; j++) {
			printf("%d", grades[i][j]);
		}
		printf("Average: %2.f\n", catcAvg(grades[A]));
	}
	return 0;
}