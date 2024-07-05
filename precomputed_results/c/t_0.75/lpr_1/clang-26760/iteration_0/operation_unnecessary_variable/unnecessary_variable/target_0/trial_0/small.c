typedef signed a;
typedef short b;
typedef int c;
a g;

b fn1() {
  c j = 0x24F96B7BL;
  unsigned k;
  for (unsigned f; f;)
    for (; j; --j)
      ;
  c l = 1L;
  c m = j;
  a n = g;
  c o = n;
q:
  k = k >> l;
  o = o; // Copy propagation: Replace 'i' with 'o'
  if (o) { // Usage of 'i' replaced with 'o'
    k = k << m;
    goto q;
  }
}

int main() {}
