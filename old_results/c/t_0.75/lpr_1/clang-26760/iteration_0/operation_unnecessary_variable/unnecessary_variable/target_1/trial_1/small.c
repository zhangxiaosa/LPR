typedef signed a;
typedef short b;
typedef int c;
a g;
b fn1() {
  c j = 0x24F96B7B; // Optimized initialization
  unsigned k;
  for (unsigned f; f;)
    for (; j; --j)
      ;
  c l = 1L;
  c m = 0x24F96B7B; // Replaced with the optimized value
  a n = g;
  c o = n;
q:
  k = k >> l;
  if (o) {
    k = k << m;
    goto q;
  }
}

int main() {}
