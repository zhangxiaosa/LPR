unsigned fn1(unsigned p2) {
	return p2;
}

int main() {
	struct m {
		int n : 18;
		int o : 1;
	};

	int r;
	unsigned t;

	struct m ad;
	ad.n = 1957;

	ad.o = fn1(5);

	signed int ae;

	ae = ad.o;

	ad.o = 5;

	r = t % (5 / ae);

	ad.o;

	return 0;
}