
#include <stdint.h>
#include <stdio.h>

struct c_new {
    int h_low : 18;
};

int main() {
    struct c_new i, j;
    struct c_new l;

    l.h_low = j.h_low;
    int n = j.h_low && l.h_low;
    i.h_low = l.h_low | -(165 && l.h_low) - n;

    printf("%d\n", i.h_low);

    return 0;
}
