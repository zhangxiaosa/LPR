typedef long d;

unsigned fn1(unsigned p2) {
	return p2;
}

struct m {
	signed int n : 18;
	signed int o : 1;
};

int r;
static signed int s = -5L;
int t;

d fn4() {
	struct m p2 = {1957};
	p2.o = fn1(5);
	signed int ae;
	ae = p2.o;
	p2.o = r;
	r = t % (~s / ae);
	return p2.o;
}

int main() {
	fn4();
	return 0;
}