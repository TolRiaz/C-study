#include <stdio.h>

int main() {
	int a = 7;
	int *b = &a;
	printf("%d\n", b);
	printf("%d\n", &b);
	printf("%d\n", *b);
}
