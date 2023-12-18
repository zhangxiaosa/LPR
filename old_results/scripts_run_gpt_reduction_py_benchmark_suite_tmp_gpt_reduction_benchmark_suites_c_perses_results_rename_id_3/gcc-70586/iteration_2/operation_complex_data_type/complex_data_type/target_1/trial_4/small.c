#include <stdio.h>

unsigned s = 0x03F238A4L;
short u[6] = {0};

void fn7() {
    if (!s) {
        u[4] = fn3(0x7D765DB6L, u[4]);
    }
}

int main() {
    fn7();
    return 0;
}