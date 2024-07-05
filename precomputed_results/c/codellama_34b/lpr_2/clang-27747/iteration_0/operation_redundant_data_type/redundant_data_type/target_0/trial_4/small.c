
#include <stdint.h>

typedef int16_t a;
typedef uint16_t b;
typedef struct c {
    int16_t d : 18;
    uint16_t e;
    uint16_t f;
    int16_t g;
    int16_t h;
} c;
c i;
c j;

int main() {
    c l = {24, 6738, 165};
    b m = j.e;
    l.d = m;
    b n = j.h && l.d;
    b o = l.d;
    a p = o | -(l.f && l.d) - n;
    i.g = p;
}
