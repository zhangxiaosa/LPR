int g;

short fn1() {
  int i;
  int j = 0x24F96B7B;
  unsigned k;
  for (; 0;) // Optimized loop condition
    for (; j; --j)
      ;
  int m = j;
  unsigned p = g;
q:
  ; // Empty statement
  k = k >> 1;
  i = p;
  if (i) {
    k = k << m;
    goto q;
  }
}

int main() {}
