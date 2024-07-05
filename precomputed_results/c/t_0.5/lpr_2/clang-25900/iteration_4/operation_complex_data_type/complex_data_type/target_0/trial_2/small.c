unsigned fn1(unsigned p2) {
	return p2;
}

struct m {
	int n;
	bool o;
};

unsigned r;
static int s = -5L;

int main() {
	struct m ad = {1957, fn1(5)};
	int ae;

	ae = ad.o;
	ad.o = ad.o;
	r = 4 % (~s / ae);
	ad.o;
}