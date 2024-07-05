#include <stdio.h>

short int fn2(short int p1, short int p2) {
	return p1 - p2;
}

unsigned char fn4(unsigned int p1, unsigned int p2) {
	return p1;
}

unsigned int fn5(unsigned int p1, unsigned int p2) {
	return p2;
}

unsigned int fn6(unsigned int p1, unsigned int p2) {
	return p1 - p2;
}

unsigned int p;
long int v;
short int w;
unsigned int ab;
short int ac = 1L;

short int fn13() {
	short int al = 3L;
	long int am = 1L;
	short int an;

	for (w = 3; w; w -= 1) {
		if (an = 250UL) {
			ab = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
			short int ao = 0xBCD1L;

			if (fn2(ao - fn4(fn6(am, an), 0xECL), ab) & 1UL) {
				v = 1UL;
			}
		}
	}

	return al;
}

int main() {
	fn13();
	p = v;
	printf("checksum = %X\n", p);
	return 0;
}