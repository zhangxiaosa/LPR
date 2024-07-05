typedef long d __attribute__((__vector_size__(sizeof(long))));

void fn2() {
	long c = fn1;
	return {c};
}

int main() {}