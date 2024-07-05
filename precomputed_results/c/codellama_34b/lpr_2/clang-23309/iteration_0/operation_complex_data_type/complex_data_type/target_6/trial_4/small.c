
#include <stdio.h>

void print_checksum(unsigned p1) {
    printf("checksum = %X\n", p1);
}

int subtract(int p1, int p2) {
    return p1 - p2;
}

unsigned char get_upper_byte(unsigned p1, unsigned p2) {
    return p1;
}

int get_lower_byte(int p1, int p2) {
    return p2;
}

int get_checksum_value(int p1, int p2) {
    return p2;
}

int main() {
    int ap = 0;
    int checksum = 0;
    int value = 0;
    int i;

    for (i = 0; i < 3; i++) {
        value = subtract(value, i);
        checksum = get_checksum_value(value, i);
    }

    print_checksum(checksum);
    return 0;
}
