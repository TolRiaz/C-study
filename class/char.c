#include <stdio.h>
int main(void) {
	int i=0;
	char str[4] = {'a', 'b', 'c', '\0'};
/*
	while (str[i] != '\0') {
		printf("%c", str[i]);
		i++;
	}
*/

	for (i=0; str[i] != '\0'; i++) {
		printf("%c",str[i]);
	}
	puts("");
	return 0;
}
