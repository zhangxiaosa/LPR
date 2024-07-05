
#include <stdio.h>

// Define constants
const int MAX_SIZE = 100;
const int MAX_VALUE = 100;

// Define functions
int get_value(int p1, int p2) {
    return p1 - p2;
}

long get_long_value(long p1, long p2) {
    return p1 - p2;
}

unsigned char get_unsigned_char_value(unsigned char p1, unsigned char p2) {
    return p1;
}

unsigned get_unsigned_value(unsigned p1, unsigned p2) {
    return p2;
}

unsigned get_unsigned_value2(unsigned p1, unsigned p2) {
    return p2 - p1;
}

void print_result(unsigned p1, char *p2, int p3) {
    printf("checksum = %X\n", p1);
}

int main() {
    int ap = 0;

    // Call functions
    unsigned result = get_value(1, 2);
    long long_result = get_long_value(3, 4);
    unsigned char unsigned_char_result = get_unsigned_char_value(5, 6);
    unsigned unsigned_result = get_unsigned_value(7, 8);
    unsigned unsigned_result2 = get_unsigned_value2(9, 10);

    // Print result
    print_result(result, "g_170", ap);

    return 0;
}
