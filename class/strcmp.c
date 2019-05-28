#include <stdio.h>
#include <string.h>

int main (void) {
	char s1[], s2[];
	printf("문자 입력: ");
	scanf("%s", s1);
	printf("문자 입력: ");
	scanf("%s", s2);
	int result = strcmp(s1,s2);

	if (result <0)
		printf("%s가 %s 보다 앞에 있다.\n", s1, s2);
	else if (result==0)
		printf("%s가 %s와 같다.\n", s1, s2);
	if (result >0)
		printf("%s가 %s 보다 뒤에 있다.\n", s1, s2);

	return 0;
}

//Error
