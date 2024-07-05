unsigned fn1(unsigned p1, int p2) {
	return p2;
}

int r;
static signed s = -5L;
unsigned t;
int u;
unsigned v;

struct m {
	signed n : 18;
	signed o : 1;
};

int main() {
	struct m ad = {1957};
	ad.o = fn1(v, 5);
	signed ae;
	int af = t;

	// Decomposed variables
	signed ad_n = ad.n;
	signed ad_o = ad.o;

	// Optimize target variable
	unsigned p1 = v;

	ae = ad_o;
	ad_o = u;
	r = af % (~s / ae);
	ad_o;
}