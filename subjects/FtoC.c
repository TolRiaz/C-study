/*
    Programming 124쪽 - 04번 문제
*/

#include <stdio.h>

int main(void) {
	float f=0, c=0;
	printf("화씨값을 입력하시오: ");
	scanf("%f", &f);
	c = (f-32)*5/9;
	printf("섭씨값은 %f도 입니다.\n", c);
}
