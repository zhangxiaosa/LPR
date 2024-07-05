
#include <stdio.h>
#include <stdint.h>

uint32_t fn13(void) {
    uint32_t an = 250UL;
    uint32_t t = ac || (an = 3L) == 0x294A85636008822DLL;
    uint32_t ao = 0xBCD1L;
    uint32_t v = fn2(ao - fn4(fn6(1L, an), 0xECL), t) & 1UL;
    return v;
}

int main(void) {
    uint32_t p = fn13();
    printf("checksum = %X\n", p);
    return 0;
}
