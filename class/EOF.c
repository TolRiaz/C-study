#include <stdio.h>

int main(void) {
	int ch;
/*
	while ((ch=getchar()) != EOF ) // EOF = End Of File(^Z)
		putchar(ch);
*/

	while ((ch = _getch()) != 'q')	 // error
		_putch();					 // error

	return 0;
}
