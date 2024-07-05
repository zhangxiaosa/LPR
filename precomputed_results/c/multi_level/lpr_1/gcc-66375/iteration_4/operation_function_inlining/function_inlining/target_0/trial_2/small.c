#include <stdio.h>

int u;
short v0_3;

void puthex(int value) {
    if (value == 0) {
        putchar('0');
        return;
    }
    
    int temp = value;
    int digits = 0;
    while (temp > 0) {
        temp /= 16;
        digits++;
    }
    
    char hex_digits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    
    while (digits > 0) {
        int digit_value = (value >> (digits - 1) * 4) & 0xF;
        putchar(hex_digits[digit_value]);
        digits--;
    }
}

int main() {
    int d_ = 2;
    while (u < 51) {
        v0_3 = d_;
        d_ = (char)v0_3 + 0x9EE7F9D1C772505B;
        ++u;
    }
    puts("checksum = ");
    puthex(v0_3);
    putchar('\n');
    return 0;
}