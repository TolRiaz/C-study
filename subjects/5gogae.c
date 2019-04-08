#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int answer, i, random = (rand() % 20) + 1;
	for (i=0; i<5; i++) { 
		printf("정답은? ");
		scanf("%d", &answer);
		if (answer == random) {
			puts("\a정답입니다!");
			break;
		} else { 
			puts("정답이 아닙니다.");
			if ( i == 4 ) { 
				printf("정답은 %d 입니다.\n", random); 
			} 
		}
	}
}
