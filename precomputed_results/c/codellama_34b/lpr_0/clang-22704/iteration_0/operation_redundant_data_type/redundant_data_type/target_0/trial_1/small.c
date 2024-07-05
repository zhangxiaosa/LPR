
#include <stdio.h>

typedef int a;

int main() {
    a h = 6;
    if (h) {
        goto i;
    }
    h = 0;
    i:
    h = 0xEEACFBBFL;
    return h;
}
