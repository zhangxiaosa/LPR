unsigned fn1(unsigned p2) {
	return p2;
}

struct m {
	signed int n;
	signed int o;
};

int r;
unsigned int t;

int main() {
	struct m ad = {1957};
	ad.o = fn1(5);
	int ae = ad.o;
	ad.o = 0;
	r = t % (4 / ae);
	ad.o;
}