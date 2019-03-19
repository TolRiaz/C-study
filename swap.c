/*
    Programming 168쪽 - 03번 문제
*/

#include <stdio.h>

int main(void) {
	int x=10, y=20, temp=0;
	printf("x=%d y=%d\n", x, y);
	temp = x;
	x = y;
	y = temp;
	printf("x=%d y=%d\n", x, y);
}
