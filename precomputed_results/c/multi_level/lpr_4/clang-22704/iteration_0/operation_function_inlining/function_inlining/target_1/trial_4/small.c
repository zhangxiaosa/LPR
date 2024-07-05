#include <stdio.h>

// Original code

typedef int a;
typedef char b;

struct c {
    a d;
    a e;
};

struct c f;

b fn1() {
    a h = 6L;
    if (f.e)
        goto i;
    fn1();
    b j;
    return j;
i:
    f.d = h;
    fn1();
    j = 0xEEACFBBFL;
    return j;
}

int main() {
    {
        a h = 6L;
        if (f.e)
            goto i;
        {
            a h = 6L;
            if (f.e)
                goto i;
            {
                a h = 6L;
                if (f.e)
                    goto i;
                // remaining nested calls to 'fn1()' go here...
                b j;
                return j;
        i:
                f.d = h;
                // remaining nested calls to 'fn1()' go here...
                j = 0xEEACFBBFL;
                return j;
            }
        }
    }
}