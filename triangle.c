/*
    Programming 124쪽 - 03번 문제
*/

#include <stdio.h>

int main(void) {
	float b=0, h=0, area = 0;
	printf("삼각형의 밑변: ");
	scanf("%f", &b);
	printf("삼각형의 높이: ");
	scanf("%f", &h);
	area = b*h/2;
	printf("삼각형의 넓이: %f\n", area);
	return 0;
}
