#include <stdio.h>

int main(void) {
	char *pc;
	int *pi;
	double *pd;

	pc = (char *) 10000;
	pi = (int *) 10000;
	pd = (double *) 10000;
	printf("Before: pc = %d, pi = %d, pd = %d\n", pc, pi, pd);

	pc++;
	pi++;
	pd++;
	printf("After: pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
	printf("Add 2: pc = %d, pi = %d, pd = %d\n", pc+2, pi+2, pd+2);
}
