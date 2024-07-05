
#include <stdint.h>

uint32_t g;
uint32_t h2;
uint32_t r_real[0][0][0];
uint32_t q_real;

void fn2() {
    for (;;) {
        r_real[0][0][0] = 0xC3;
        if (h2)
            return q_real;
        g = r_real[0][0][0];
    }
}

int main() {
    q_real = fn2();
}
