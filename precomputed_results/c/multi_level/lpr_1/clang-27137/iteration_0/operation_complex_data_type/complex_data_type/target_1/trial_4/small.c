#include <stdio.h>

short o;
char p;

void fn1(unsigned int p1, int p2) {
	printf("checksum = %X\n", p1);
}

int main() {
	int i;
	short r = o;
	int s = 1L;

	for (i = 0; i < 10; i++) {
		while (r > s) {
			r -= 1;
		}
	}

	if ((p = (char)r)) {
		;
	}

	fn1((unsigned int)p, 0);
	return 0;
}