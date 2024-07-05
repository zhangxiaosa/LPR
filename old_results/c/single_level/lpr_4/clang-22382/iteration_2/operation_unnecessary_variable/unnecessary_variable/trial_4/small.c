#include <stdint.h>

struct h {
	signed i;
	long j;
	unsigned k;
};

static struct h fn1();

uint32_t fn2(p1) {
	struct h p;
	int q;
	fn1(q, p1, 3);
	for (;;) {
		struct h r;
		p = r;
	}
}

struct h fn1(unsigned p1, unsigned p3, uint32_t p4) {
	w:
	goto w;
}

int main() {}
