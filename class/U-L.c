#include <stdio.h>
char UtoL(char *c) ;
char LtoU(char *c) ;

int main(void) {
	int ch;
	while ((ch=getchar()) != EOF ) { // EOF = End Of File(^Z)
		if (islower(ch)) 
			LtoU(*ch);
		else UtoL(*ch);
		putchar(ch);
	}

	return 0;
}

char UtoL(char *c) {
	*c = tolower(*c);
}

char LtoU(char *c) {
	*c = toupper(*c);
}

// ERROR
