typedef signed a;
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
    for (; j; --j) {
      // Unrolled Loop Body (duplicated 0x24F96B7BL + 1 times)
      ;
      ;
      // ... (duplicated 0x24F96B7BL + 1 times)
      ;
    }
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