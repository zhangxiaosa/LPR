#include <stdio.h>

unsigned fn6(unsigned p1, unsigned p2) {
	return p1 - p2;
}

unsigned p;
int t;
long v;
short w;
short ac_value = 1;

int main() {
	int an;

	// First repetition
	w = 3;
	if (an = 250) {
		t = ac_value || (an = w) == 0x294A85636008822DL;
		short ao = 0xBCD1;
		if ((ao - (fn6(1, an) - 0xECL)) - t & 1)
			v = 1;
	}

	// Second repetition
	w -= 1;
	if (an = 250) {
		t = ac_value || (an = w) == 0x294A85636008822DL;
		short ao = 0xBCD1;
		if ((ao - (fn6(1, an) - 0xECL)) - t & 1)
			v = 1;
	}

	// Third repetition
	w -= 1;
	if (an = 250) {
		t = ac_value || (an = w) == 0x294A85636008822DL;
		short ao = 0xBCD1;
		if ((ao - (fn6(1, an) - 0xECL)) - t & 1)
			v = 1;
	}

	p = v;
	printf("checksum = %X\n", p);
	return 0;
}