
<SYS>

#include <stdint.h>

int main() {
    uint8_t p1 = 0;
    int32_t p2 = 0;
    int16_t p3 = 0;
    
    p1 = (uint8_t)fn2(p1, p2, p3);
    
    return 0;
}

uint8_t fn2(uint8_t p1, int32_t p2, int16_t p3) {
    for (p3 = 6; p3 != -7; p3--)
        p2 ^= fn1(p3, p2) && 1L;
    return p1;
}

uint8_t fn1(int16_t p1, int32_t p2) {
    return (uint8_t)(p1 * p2);
}

</SYS>
