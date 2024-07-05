
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef long a;

typedef a d __attribute__((__vector_size__(sizeof(a))));

d fn2() { return (d){}; }

main() {}
