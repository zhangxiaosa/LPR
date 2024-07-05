char fn1(char p1, char p2) {
	return p1 * p2;
}

signed j;
signed *fn2(unsigned p1, signed *p2, signed p3) {
	for (p3 = 6; p3 >= -7; p3 -= 7) {
		j ^= fn1(p3 - 2) && 1L;
		j ^= fn1(p3 - 3) && 1L;
	}
	return p2;
}

int main() {
	return 0;
}