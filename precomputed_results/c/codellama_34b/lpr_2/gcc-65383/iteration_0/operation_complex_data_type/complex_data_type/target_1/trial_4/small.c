
#define B_SIZE (sizeof(b_unsigned) + sizeof(b_int))
#define H_SIZE (B_SIZE * 3)
#define H_ALIGN 4

b_unsigned h_unsigned[H_SIZE] __attribute__((aligned(H_ALIGN)));
b_int h_int[H_SIZE] __attribute__((aligned(H_ALIGN)));
