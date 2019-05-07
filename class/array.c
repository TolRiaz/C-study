#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int score[] = {1,2,3,4,5,6};
	int i, size;

	size=sizeof(score)/sizeof(score[0]);
	
	printf("%d\n", size);

	return 0;
}
