#include <stdio.h>

struct h {
	int i;
	long j;
	int k;
};

unsigned l;

static struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct h p5) {
	return p5;
}

unsigned fn2(p1) {
	struct h p;
	int q;
	fn1(q, l, p1, 3, p);
	struct h r1, r2, r3, r4;
	p = r1 = p;
	p = r2 = p;
	p = r3 = p;
	p = r4 = p;
}

int main() {
	return 0;
}