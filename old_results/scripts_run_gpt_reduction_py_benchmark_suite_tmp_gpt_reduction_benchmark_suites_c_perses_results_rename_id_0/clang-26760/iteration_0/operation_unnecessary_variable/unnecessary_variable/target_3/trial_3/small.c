typedef int a;
typedef int c;
typedef unsigned d;
typedef unsigned e;
d f;
a g;
int main() {
  a i;
  c j = 0x24F96B7BL;
  e k;
  for (f = 0;)
    for (; j; --j)
      ;
  c l = 1L;
  c m = j;
q:
  k = k >> l;
  // i = n; (Optimized out)
  // if (i) { (Optimized out)
  //   k = k << m; (Optimized out)
  //   goto q; (Optimized out)
  // }
}
