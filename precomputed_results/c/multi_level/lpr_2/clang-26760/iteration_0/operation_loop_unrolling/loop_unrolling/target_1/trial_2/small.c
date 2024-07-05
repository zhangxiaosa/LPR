typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned e;
d f = 0;
a g;

b fn1() {
  a i;
  c j = 0x24F96B7BL;
  e k;

  // No need for loop unrolling

  c l = 1L;
  c m = j;
  a n = g;
  c o = n;
  e p = o;

q:
  k = k >> l;
  i = p;
  if (i) {
    k = k << m;
    goto q;
  }
}

int main() {
  // Empty main function
}