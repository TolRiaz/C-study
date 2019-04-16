#include <stdio.h>

void prime(unsigned int a);

int main(void) {
	unsigned int a = 0;
//	printf("prime number: ");
//	scanf("%u", &a);
	for (a=2; a <=100; a++) {
		prime(a);
	}
}

void prime(unsigned int a) {
	for (int i=a-1; i > 1; i--) {
		if (a%i == 0){
//			printf("%u는 소수가 아닙니다.\n", a);
//			break;
			continue;
		} else { printf("%u는 소수입니다.\n", a); break; }
//		if (i == 2)
//			printf("%u는 소수 입니다.\n", a);
	}
}
