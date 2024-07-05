char fn1(char p1, char p2) {
	char result = p1 * p2;
	return result;
}

struct g {
	int h;
};

int i;
struct g j;
unsigned int *fn2(unsigned int p1, int *p2, signed int p3) {
	for (p3 = 6; p3 != -7; p3--) {
		char fn1_result = fn1(p3, i);
		j.h ^= fn1_result && 1L;
	}
	return p2;
}

int main() {
	return 0;
}