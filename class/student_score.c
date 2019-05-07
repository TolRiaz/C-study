#include <stdio.h>
#define STUDENT 1

int main(void) {
	int score[STUDENT][4];
	int sum = 0;
	int i, average;

	printf("중간고사 성적 입력: ");
	for(i=0; i<STUDENT; i++) {
		scanf("%d", &score[i][0]);
	}
	printf("기말고사 성적 입력: ");
	for(i=0; i<STUDENT; i++) {
		scanf("%d", &score[i][1]);
	}
	printf("과제 성적 입력: ");
	for(i=0; i<STUDENT; i++) {
		scanf("%d", &score[i][2]);
	}
	printf("출석 성적 입력: ");
	for(i=0; i<STUDENT; i++) {
		scanf("%d", &score[i][3]);
	}
	
	for(i=0; i<STUDENT; i++) {
		int sum = score[i][0]+score[i][1]+score[i][2]+score[i][3];
		int avr = sum/4;
		printf("%d번 학생의 총점은 %d점 이고, ", i+1, sum);
		switch (avr/5) {
			case 20: 	puts("학점은 A+입니다.");
				break;
			case 19:	puts("학점은 A입니다.");
				break;
			case 18:	puts("학점은 B+입니다.");
				break;
			case 17:	puts("학점은 B입니다.");
				break;
			case 16:	puts("학점은 C+입니다.");
				break;
			case 15:	puts("학점은 C입니다.");
				break;
			case 14:	puts("학점은 D+입니다.");
				break;
			case 13:	puts("학점은 D입니다.");
				break;
			default: puts("학점은 F입니다.");
				break;
		}
	}
}

