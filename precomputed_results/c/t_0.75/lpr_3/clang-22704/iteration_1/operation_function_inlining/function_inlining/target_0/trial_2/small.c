int f;

int main() {
	if (f) {
		f = 6;
		return main();
	}

	return 0;
}