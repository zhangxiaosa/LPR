
#include <stdint.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() { return (d){0}; }

int main() { return 0; }
