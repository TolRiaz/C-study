#include <stdio.h>

int main(void) {
	unsigned int i, mul=1;
	printf("__!\b\b\b");
	scanf("%u", &i);
	for (i; i > 0; i--) {
		mul *= i;
	}
	printf("total = %u\n", mul);
	return 0;
}
