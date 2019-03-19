/*
	Programming 124쪽 - 01번 문제
*/

#include <stdio.h>

int main(void) {

	float sum = 0, a = 0;

	for (int i = 0; i < 3; i++) {
		printf("실수를 입력하시오: ");
		scanf("%f", &a);
		sum += a;
	}

	printf("합은 %f이고, 평균은 %f입니다.\n", sum, sum/3);
}
