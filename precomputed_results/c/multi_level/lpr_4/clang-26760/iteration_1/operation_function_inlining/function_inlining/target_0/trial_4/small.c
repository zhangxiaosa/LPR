#include <iostream>

unsigned g;

void inline loop_body(unsigned& k, int& j)
{
    k = k >> 1;
    int i = g;
    if (i)
    {
        k = k << j;
        loop_body(k, j);
    }
}

int main()
{
    int i;
    int j = 0x24F96B7B;
    unsigned k;
    unsigned f;

    loop_body(k, j);

    return 0;
}