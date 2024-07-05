
#include <stdio.h>

int d;
int e;

int fn1(int *h) {
    if (e) {
        d = *h;
        return 0xEEACFBBFL;
    }
    return 0xEEACFBBFL;
}

int main() {
    int h = 0;
    fn1(&h);
    return 0;
}
