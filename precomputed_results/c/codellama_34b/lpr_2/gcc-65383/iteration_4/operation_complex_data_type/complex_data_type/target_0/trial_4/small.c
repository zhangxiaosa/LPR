
#include <stdint.h>

uint8_t g_real_low;
uint8_t g_real_high;
uint16_t g_real_mid;
uint32_t g_real;

uint8_t h2_real_low;
uint8_t h2_real_high;
uint16_t h2_real_mid;
uint32_t h2_real;

void fn2() {
    for (;;) {
        uint32_t r_real[45];
        if (h2_real)
            return 0xC3;
        g_real = r_real[0x06D7];
    }
}

int main() {
    fn2();
}
