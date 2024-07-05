char fn1(char p1, char p2) {
	return p1 * p2;
}

int i;
unsigned j_h;
unsigned *fn2(int p1, unsigned *p2) {
	for (int p3 = 13; p3 != -7; p3--)
		j_h ^= fn1(p3, i) && 1L;
	return p2;
}

int main() {
	return 0;
}