typedef char b;
int d;
int e;
b fn1() {
	if (e)
		goto i;
	fn1();
	return b(); // Empty constructor call for b
i:
	d = 6L;
	fn1();
	b j = 0xEEACFBBFL;
	return j;
}

int main() {}
