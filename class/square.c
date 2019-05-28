#include <stdio.h>

struct point {
	int x;
	int y;
};

// double struct
struct rect {
	struct point p1;
	struct point p2;
};

int main(void) {
	struct rect r;
	int w, h, area, peri;

	printf("p1: ");
	scanf("%d %d", &r.p1.x, &r.p1.y);
	printf("p2: ");
	scanf("%d %d", &r.p2.x, &r.p2.y);

	if (r.p1.x == r.p2.x && r.p1.y == r.p2.y) {
		printf("It has same pointers\n");
		return 0;
	}

	w = r.p2.x - r.p1.x;
	h = r.p2.y - r.p1.y;
	area = w*h;
	peri = 2*w + 2*h;
	printf("area = %d, peri = %d\n", area, peri);

	return 0;
}
