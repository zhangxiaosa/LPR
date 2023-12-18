#include <stdio.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

typedef long long_vector_element_t;

long fn1() {
    // Function implementation...
    return 0;
}

long fn2() {
    long c = fn1();
    d f = {c};

    return f[0];
}

int main() {
    // Main function code...

    return 0;
}
