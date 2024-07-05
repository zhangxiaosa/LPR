char fn2(char p1, int p2) {
	return p1;
}

unsigned fn4(unsigned p1, unsigned p2) {
	return p1 + p2;
}

unsigned u;
unsigned v_03;

int main() {
	int d = 2L;
	for (; u < 51; ++u) {
		unsigned e[9];
		e[0] = 0x9EE7F9D1C772505BLL;
		d = fn4(fn2(v_03 = d, 3), e[0]);
	}
	printf("checksum = %X\n", v_03);
	return 0;
}