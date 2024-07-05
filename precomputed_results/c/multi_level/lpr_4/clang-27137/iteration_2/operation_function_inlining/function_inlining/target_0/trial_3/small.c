#include <stdio.h>

int main() {
    int q = 0;
    for (int loop_var = 0; loop_var < 10; loop_var++) {
        int q_tmp = q;
        while (q_tmp > 1L) {
            q_tmp -= 1;
        }
        q = q_tmp;
    }
    printf("checksum = %X\n", q);
    return 0;
}