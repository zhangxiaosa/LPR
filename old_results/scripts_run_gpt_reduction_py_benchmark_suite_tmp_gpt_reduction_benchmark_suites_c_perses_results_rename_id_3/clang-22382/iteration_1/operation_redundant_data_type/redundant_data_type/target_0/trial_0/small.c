#include<stdio.h>

static void fn1(unsigned p5_k) {
	w:
		goto w;
}

int fn2() {
	unsigned p;
	fn1(p);
	for (;;) {
		unsigned r;
		p = r;
	}
}