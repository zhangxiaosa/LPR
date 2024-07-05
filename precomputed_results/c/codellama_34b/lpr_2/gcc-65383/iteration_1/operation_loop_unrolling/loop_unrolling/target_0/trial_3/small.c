
#include <stdint.h>

typedef uint32_t b;

b g;
b h[] = {0x92A1D2CDL, 0x92A1D2CDL, 0x92A1D2CDL};

uint32_t fn2() {
    uint32_t q_real = 0xC3L;
    uint32_t r_real[5][9][5];

    if (h[2])
        return q_real;

    g = r_real[0x06D7L][0x06D7L][0x06D7L];

    // Loop unrolling
    for (uint32_t i = 0; i < 5; i++) {
        for (uint32_t j = 0; j < 9; j++) {
            for (uint32_t k = 0; k < 5; k++) {
                uint32_t temp = r_real[i][j][k];
                temp = temp >> 2;
                r_real[i][j][k] = temp;
            }
        }
    }
}

int main() {
    uint32_t q_real = fn2();
    return 0;
}
