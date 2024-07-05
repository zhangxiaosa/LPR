
#include <stdio.h>

// Decomposed data types
typedef struct {
    unsigned int lo;
    unsigned int hi;
} uint32_t;

// Function to compute the product of two unsigned integers
uint32_t mul(uint32_t a, uint32_t b) {
    uint32_t result;
    result.lo = a.lo * b.lo;
    result.hi = a.lo * b.hi + a.hi * b.lo + (a.hi * b.hi) >> 32;
    return result;
}

// Function to compute the checksum of an unsigned integer
uint32_t checksum(uint32_t a) {
    uint32_t result;
    result.lo = a.lo;
    result.hi = a.hi;
    result.hi ^= a.lo;
    return result.lo;
}

int main() {
    uint32_t v, p, w;
    v.lo = 7L;
    v.hi = 7L;
    p.lo = 248L;
    p.hi = 0;
    w.lo = 0;
    w.hi = 3;

    // Compute the product of p and w
    uint32_t product = mul(p, w);

    // Compute the checksum of the product
    uint32_t checksum = checksum(product);

    // Print the checksum
    printf("checksum = %X\n", checksum.lo);

    return 0;
}
