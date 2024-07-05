unsigned fn1(unsigned p1, unsigned p2) { return p2 == 0 ? p1 : p1 % p2; }

unsigned n;
unsigned o;

int main() {
	for (; n < 12; n = fn1(n, 3)) {
		if (0x4F92 < (short)o)
			;
		else if (o <= 0xE3)
			;
		else
			break;
	}

	return 0;
}