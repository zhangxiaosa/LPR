#include <stdio.h>

int i;
long j;
int k;

static void fn1() {
    // fn1 function
    int temp;
    w:
        goto w;
}

unsigned fn2() {
    int temp;
    fn1();
    for (;;) {
        int temp_r;
        int temp_p;
        temp_p = temp_r = temp_p;
    }
}

int main() {
    // Main function
    return 0;
}
