#include <stdio.h>

void print_stars(void) ;
int main (void) {
	for( int i=0; i <30; i++) {
	print_stars();
	puts("");
	}
	return 0;
}
void print_stars(void) {
	for(int i = 0; i < 30; i++) 
		printf("*");
		return;
}
