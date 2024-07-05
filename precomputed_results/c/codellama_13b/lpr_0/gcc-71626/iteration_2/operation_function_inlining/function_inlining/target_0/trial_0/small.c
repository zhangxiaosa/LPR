
typedef long d __attribute__((__vector_size__(sizeof(long))));
d fn1() { return (d){0}; }
d fn2() { return (d){fn1}; }
main() {}
