#include <stdio.h>

typedef signed a;
typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;
typedef unsigned g;

void fn1(f p1, int p2)
{
    printf("checksum = %X\n", p1);
}

f j;

struct p
{
    c ab;
    signed q : 22;
};

struct r
{
    unsigned ab;
    unsigned s;
};

struct r t;
f u;
struct p v[1];
struct p w = { 0x1C87E74FL, 816 };

a fn6()
{
    d p1 = t.ab;
    a p2 = 3;
    d p3 = 2;
    f p4 = t.s;
    f p5 = 9;

    struct p a = { 8L, 666 };

    for (p2 = 0; p2 >= 0; p2 -= 1)
    {
        for (; u <= 1; u += 1)
        {
            a = v[p2] = w;
            v[p2] = a;
        }
    }

    j = p1;
}

int main()
{
    int i;
    int b = 0;

    fn6();

    for (i = 0; i < 1; i++)
    {
        a p1 = v[i].q;
        j = p1;
    }

    unsigned fn5(unsigned p1, signed p2, unsigned p3, unsigned p4, unsigned p5)
    {
        d i, j, k, l, m;

        i = p1 - (p2 & 1);
        j = p3 + (p4 & 1);
        k = p5 + 42;
        l = i + j;
        m = l * k;

        return m;
    }
    
    unsigned p1 = t.ab;
    signed p2 = 3;
    unsigned p3 = 2;
    unsigned p4 = t.s;
    unsigned p5 = 9;
    
    unsigned result = fn5(p1, p2, p3, p4, p5);
    
    printf("checksum = %X\n", result);

    return 0;
}