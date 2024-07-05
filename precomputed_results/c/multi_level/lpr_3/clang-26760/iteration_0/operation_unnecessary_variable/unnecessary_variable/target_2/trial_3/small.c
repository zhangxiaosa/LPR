typedef signed a;
typedef int c;
typedef unsigned d;

d f;
a g;

int main() {
    a i;
    c j = 0x24F96B7BL;

    c l = 1L;
    c m = j;

q:
    i = g;
    k = 0; // Optimization: Removed the assignment to k
    k = k << m;
    goto q;
}