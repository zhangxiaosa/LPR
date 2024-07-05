
typedef long d[sizeof(long)];
typedef void (*fn1)();

d fn2() { return (d){fn1}; }
main() {}
