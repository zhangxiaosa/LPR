#include <stdint.h>

int r;
static signed s = -5L;
int t;
int u;
int v;

struct m {
	signed int n;
	signed int o;
};

int fn1(uint32_t p1, int p2) {
	return p2;
}

int fn4() {
	struct m ad = {1957};
	ad.o = fn1(v, 5);
	int ae;
	int af = t;
	ae = ad.o;
	ad.o = u;
	r = af % (~s / ae);
	return ad.o;
}

int main() {
	fn4();
}
