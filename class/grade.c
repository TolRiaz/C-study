#include <stdio.h>
#include <string.h>

int main(void) {
	int score = 0;

	printf("점수를 입력하세요: ");
	scanf("%d", &score);

	if (score > 100 || score < 0 ) {
		puts("점수를 100이하 0이상으로 입력해주세요.");
	}

	else {
		switch (score) {
			case 95 ... 100:
				printf("학점은 A+ 입니다.\n");
				break;
			case 90 ... 94:
				printf("학점은 A 입니다.\n");
				break;
			case 85 ... 89:
				printf("학점은 B+ 입니다.\n");
				break;
			case 80 ... 84:
				printf("학점은 B 입니다.\n");
				break;
			case 75 ... 79:
				printf("학점은 C+ 입니다.\n");
				break;
			case 70 ... 74:
				printf("학점은 C 입니다.\n");
				break;
			case 65 ... 69:
				printf("학점은 D+ 입니다.\n");
				break;
			case 60 ... 64:
				printf("학점은 D 입니다.\n");
				break;
			default:
				printf("학점은 F 입니다.\n");
				break;
		}
	}
	/*
		switch (score/5) {
			case 20:
			case 19:
				printf("학점은 A+ 입니다.\n");
				break;
			case 18:
				printf("학점은 A 입니다.\n");
				break;
			...
			...
		}
	*/
}
