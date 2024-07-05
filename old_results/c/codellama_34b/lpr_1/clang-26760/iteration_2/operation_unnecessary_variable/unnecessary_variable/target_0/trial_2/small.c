
<SYS>

#include <stdio.h>

int main() {
    unsigned i;
    unsigned j = 0x24F96B7BL;
    unsigned k;
    for (unsigned f; f;)
        for (; j; --j)
            ;
    unsigned n = g;
    while (n) {
        k = k >> 1;
        i = n;
        if (i)
            k = k << j;
    }
}

int optimized_main() {
    unsigned i;
    unsigned j = 0x24F96B7BL;
    unsigned k;
    for (unsigned f; f;)
        for (; j; --j)
            ;
    k = k >> 1;
    i = g;
    if (i)
        k = k << j;
}

int main() {
    optimized_main();
    return 0;
}

</SYS>
