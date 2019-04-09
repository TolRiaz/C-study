#include <stdio.h>

int max(int a, int b);

int main(void) {
	int a, b;
	printf("정수 입력: ");
	scanf("%d", &a);
	printf("정수 입력: ");
	scanf("%d", &b);
//	max(a,b);
	printf("max = %d\n", max(a,b));
	return 0;
}

int max(int a, int b) {
//	a >= b ? printf("%d\n", a):printf("%d\n", b);
	return a >= b ? a:b;
}
