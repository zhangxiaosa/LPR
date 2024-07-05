int f;

int fn1() {
	if (f != 0) {
		fn1();
		int j = 0xEEACFBBF;
		return j;
	}

	fn1();
	int j;
	return j;
}

int main() {
	fn1();
}