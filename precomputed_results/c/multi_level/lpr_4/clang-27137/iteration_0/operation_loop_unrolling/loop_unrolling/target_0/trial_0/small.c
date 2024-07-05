typedef char a;

typedef short b;

typedef int c;

typedef unsigned d;

d h;
b o;
a p;
int main() {
	b q;
	int i;
	b r = o;
	q = r;
	c s = 1L;

	// Loop unrolling optimized code
	while (q > s) {
		q -= 1;
		q -= 1;
		q -= 1;
		q -= 1;
		q -= 1;
		q -= 1;
		q -= 1;
		q -= 1;
		q -= 1;
		q -= 1;
	}

	if (p = q)
		;

	h = p;
	printf("checksum = %X\n", h);
	return 0;
}