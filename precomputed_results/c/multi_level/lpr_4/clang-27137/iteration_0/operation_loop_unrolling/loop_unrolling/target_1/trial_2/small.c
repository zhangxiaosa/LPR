#include <stdio.h>

typedef char a;
typedef short b;
typedef int c;
typedef unsigned d;




d h;
b o;
a p;

int main() {

    b q;
    b r = o;
    q = r;
    c s = 1L;
  
    if (p = q)
        ;
    
    // Unrolled loop body
    q -= 1;
    q -= 1;
    q -= 1;
    q -= 1;
    q -= 1;
    q -= 1;
    q -= 1;
    q -= 1;
    q -= 1;
    q -= 1;
    
    h = p;
    printf("checksum = %X\n", h);
    return 0;
}