#include <stdio.h>
#define SIZE 10

int main(void) {
	int list[SIZE]={10,7,9,3,2,8,4,1,5,0};
	int temp;

	printf("Current list=");
	for (int i=0; i<SIZE; i++) {
		printf(" %d", list[i]);
	}
	puts("");

	for (int i=0; i<SIZE; i++) {
		for (int j=0; j<i; j++) {
			if(list[j] > list[j+1]) {
				temp=list[j];
				list[j]=list[j+1];
				list[j+1]=temp;
				i--;
			}
		}
	}
	printf("New list =");
	for (int i=0; i<SIZE; i++) {
		printf(" %d", list[i]);
	}
	puts("");
}
