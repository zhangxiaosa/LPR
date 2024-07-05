
#include <stdint.h>

typedef long d;

void fn1(long x) {}

long fn2() { return (long){fn1(1)}; }

int main() { return 0; }
