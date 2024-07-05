
fn1() {}
typedef long __attribute__((__vector_size__(sizeof(long))));
__attribute__((__vector_size__(sizeof(long)))); fn2() { return (__attribute__((__vector_size__(sizeof(long))));){fn1}; }
main() {}
