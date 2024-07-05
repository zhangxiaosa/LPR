unsigned fn1(unsigned p2) {
	return p2;
}

struct m {
	signed n;
	signed o;
};

unsigned r;
static signed s = -5L;
unsigned t;

int main() {
	struct m ad = {1957, fn1(5)};
	signed ae;

	ae = ad.o;
	ad.o = ad.o;

	r = t % (~s / ae);

	ad.o;
}
