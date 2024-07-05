
typedef int d[2];

int fn1() {}

d fn2() { return (d){fn1, fn1}; }

int main() {}
