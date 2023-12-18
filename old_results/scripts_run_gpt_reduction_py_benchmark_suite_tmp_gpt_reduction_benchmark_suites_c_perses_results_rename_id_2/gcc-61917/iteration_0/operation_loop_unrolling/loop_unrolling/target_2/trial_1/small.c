#include <stdio.h>

typedef signed a;
typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;

c k;
e l;
volatile f m[5][8];

d fn3(p1)
{
    for (;;)
    {
        for (; l; l++)
        {
            p1 = 5 * p1; // Iteration 1: k = 0
            p1 = 5 * p1; // Iteration 2: k = -6
            p1 = 5 * p1; // Iteration 3: k = -12
            p1 = 5 * p1; // Iteration 4: k = -18
            p1 = 5 * p1; // Iteration 5: k = -24
            if (l == 0)
                break;
        }
        p1 || m[2][5];
    }
}
