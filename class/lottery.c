#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef int bool;
#define true 1
#define false 0

int main(void) {
	int t; 				// tickets
	int a;				// auto
	int n; 
	srand(time(NULL));
	int random[6];		// 당첨번호

	for (int i = 0; i < 6; i++) {
		random[i] = rand()%46+1;	// 당첨번호
	}

	printf("몇장? ");
	scanf("%d", &t);
	printf("수동(1)? 자동(2)? ");
	scanf("%d", &a);

	int ox[t];				// 맞춘 갯수
	int num[t][6];
	if ( a == 1 ) {
		for (int i = t; i > 0; i--) {
			printf("번호: ");
			for (int j = 6; j > 0; j--) {
				scanf("%d", &n);
				num[t-i][6-j] = n;
                for (int k = 0; k < 6; k++) {
                    if ( n == random[k] )
                        ox[t-i]++;
				}
			}
		}
	}
	bool re=0;
	if ( a == 2 ) {
		for (int i = t; i > 0; i--) {
			ox[t-i] = 0;
			for (int j = 0; j < 6; j++) {
				n = rand()%46+1;
				num[t-i][j] = n;
				for (int k = 0; k < j; k++) {
					if (n == num[t-i][k]) {
						j--;
						re = 1;
						break;
					}
				re=0;
				}
				if (re==0) {
					for (int l = 0; l<6;l++){
						if ( n == random[l] ) 
							ox[t-i]++;
					}
				}
			}
		}
	}

	printf("당신이 선택한 번호는: \n");

	for (int i = t; i > 0; i--) {
		for (int j = 0; j < 6; j++) {
			printf("%d ", num[t-i][j]);
		}
		puts("");
	}
	printf("입니다. \n");

	printf("이번 당첨 번호는: ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", random[i]);
	}
	printf("입니다. \n");

	printf("당신이 맞춘 갯수는 ");
	for (int i = t; i > 0; i--) {
		printf("%d ", ox[t-i]);
	} 
	printf("개 이고, \n");
    for (int i = t; i > 0; i--) {
		switch (ox[t-i]) {
			case 6:
				printf("1등입니다. 상금은 10억원 입니다.\n");
				break;
			case 5:
				printf("2등입니다. 상금은 1억원 입니다.\n");
				break;
			case 4:
				printf("3등입니다. 상금은 1천만원 입니다.\n");
				break;
			case 3:
				printf("4등입니다. 상금은 5천원 입니다.\n");
				break;
			default:
				printf("꽝 입니다.\n");
				break;
		}
    }
}

