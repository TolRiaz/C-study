#include <stdio.h>
int main(void) {
	int score[] = {31, 63};
	int i;

	for(i=0; i<5;i++)
		printf("score[%d]=%d\n",i,score[i]);

	return 0;
}
