typedef long d __attribute__((__vector_size__(sizeof(long))));

void fn1() {}

long fn2() { return (long){fn1}; }

int main() {}
