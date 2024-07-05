char p;
int main() {
	short q;
	int i;
	short r = 0;
	q = r;
	int s = 1L;

	// Unrolled loop
	// First iteration
	while (q > s)
	  q -= 1;

	// Second iteration
	while (q > s)
	  q -= 1;

	if (p = q)
	  ;

	printf("checksum = %X\n", p);
	return 0;
}