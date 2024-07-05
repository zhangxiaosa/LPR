
int p1_lo, p1_hi, p2_lo, p2_hi, p3_lo, p3_hi, p4_lo, p4_hi, ao_lo, ao_hi;

p1_lo = p1 & 0xFFFF;
p1_hi = (p1 >> 16) & 0xFFFF;
p2_lo = p2 & 0xFFFF;
p2_hi = (p2 >> 16) & 0xFFFF;
p3_lo = p3 & 0xFFFF;
p3_hi = (p3 >> 16) & 0xFFFF;
p4_lo = p4 & 0xFF;
p4_hi = (p4 >> 8) & 0xFF;
ao_lo = ao & 0xFFFF;
ao_hi = (ao >> 16) & 0xFFFF;

int an;
while (w) {
    an = 250L;
    if (p2 || (an = w)) {
        short ao = 48873;
        if (fn3(ao, fn6(1L, an)) - p2 & 1L)
            v = 1L;
    }
    w--;
}
