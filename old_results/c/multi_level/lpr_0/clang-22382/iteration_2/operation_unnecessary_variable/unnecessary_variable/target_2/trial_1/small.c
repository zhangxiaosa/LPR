#include <stdio.h>

struct original_data_type {
    int i;
    long j;
};

static unsigned fn1(unsigned p1) {
    w:
    goto w;
}

unsigned fn2() {
    while (1) {
        struct original_data_type r;
    }
}

int main() {
    return 0;
}