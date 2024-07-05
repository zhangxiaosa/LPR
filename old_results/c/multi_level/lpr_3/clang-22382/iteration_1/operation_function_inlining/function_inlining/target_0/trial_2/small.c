#include <stdio.h>

struct h {
	int i;
	long j;
	unsigned k;
};

int optimized_fn2() {
	struct h p;
	unsigned p5_k = p.k;
w:
	goto w;
	for (;;) {
		struct h r;
		p = r = p;
	}
}

int main() {}
