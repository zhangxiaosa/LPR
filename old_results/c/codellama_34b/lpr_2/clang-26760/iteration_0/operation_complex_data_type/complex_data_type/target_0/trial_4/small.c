c
#include <stdint.h>

// Decompose f into its binary representation
uint32_t f = 0xAABBCCDD;
uint32_t f_binary = f;

// Extract the individual bits of f
uint8_t f_0 = (f_binary & 0x00000001) >> 0; // 0x00000001
uint8_t f_1 = (f_binary & 0x00000010) >> 1; // 0x00000002
uint8_t f_2 = (f_binary & 0x00000100) >> 2; // 0x00000004
uint8_t f_3 = (f_binary & 0x00001000) >> 3; // 0x00000008

// Convert each bit to a primary data type
int8_t f_0_ = (int8_t)f_0;
int8_t f_1_ = (int8_t)f_1;
int8_t f_2_ = (int8_t)f_2;
int8_t f_3_ = (int8_t)f_3;

// Print the decomposed bits
printf("f_0 = %d\n", f_0_);
printf("f_1 = %d\n", f_1_);
printf("f_2 = %d\n", f_2_);
printf("f_3 = %d\n", f_3_);
