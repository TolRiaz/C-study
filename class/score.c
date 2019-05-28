#include <stdio.h>
#define SIZE 2

struct student {
	int num;
	char name[10];
	char major[20];
};

struct grade {
	int mid;
	int fin;
	int att;
	int sub;
	int total;
	float grade;
};

int main(void) {
	struct student slist[SIZE];

	int i;

	for( i=0; i <SIZE; i++) {
		printf("학번: ");
		scanf("%d", &slist[i].num);
		printf("이름: ");
		scanf("%s", slist[i].name);
		printf("전공: ");
		scanf("%s", slist[i].major);
	}
	puts("");

	struct grade glist[SIZE];

	for (i=0; i<SIZE; i++) {
		printf("학번: %d, 이름: %s, 전공: %s\n", slist[i].num, slist[i].name, slist[i].major);
		printf("\t중간고사: ");
		scanf("%d", &glist[i].mid);
		printf("\t기말고사: ");
		scanf("%d", &glist[i].fin);
		printf("\t출석점수: ");
		scanf("%d", &glist[i].att);
		printf("\t과제점수: ");
		scanf("%d", &glist[i].sub);
		glist[i].total = glist[i].mid + glist[i].fin + glist[i].att + glist[i].sub;
		glist[i].grade = glist[i].total;
	}
	puts("");

	for (i=0; i < SIZE; i++) {
		printf("학번: %d, 이름: %s, 전공:%s, 총점: %d/400, 학점: %.1f\n", slist[i].num, slist[i].name, slist[i].major, glist[i].total, glist[i].grade/400*4.5);
	}
}
