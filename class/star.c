#include <stdio.h>

void main(void) {
	int Size;  // Size

	printf("숫자: ");
	scanf("%d", &Size);

	for ( int i=0, j=0; i < Size; i++) {		
		for ( int k = 0; k < (Size-j); k++) {
			if (k < j) {
				printf(" ");
			} else { printf("*"); }
		}
			if (i < (Size/2)) {
				j++;
			} else { j--; }
		puts("");
	}
}
