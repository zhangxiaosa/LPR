#include <stdio.h>

long a;

void fn1() {}

typedef long d __attribute__((__vector_size__(sizeof a)));

int main() {
    d f = {fn1};
    return 0;
}
