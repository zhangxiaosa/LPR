#include <stdio.h>

typedef int a;
typedef char b;
struct c {
  a d;
  a e;
};
struct c f;

int main() {
    a h = 6L;
    if (f.e)
        goto i;
    h = 6L;
    if (f.e)
        goto i;
    f.d = h;
    f.d = h;
    return 0xEEACFBBFL;
i:
    f.d = h;
    h = 0xEEACFBBFL;
    return h;
}