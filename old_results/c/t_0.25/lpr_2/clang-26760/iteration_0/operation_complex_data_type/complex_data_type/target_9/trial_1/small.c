unsigned int f;
signed int g;

signed int fn1() {
  signed int i;
  int j = 0x24F96B7B;
  unsigned int k;
  for (f = 0;)
    for (; j; --j)
      ;
  int l = 1L;
  int m = j;
  unsigned int p = g;  // Optimized assignment of p
q:;
  k = k >> l;
  i = p;
  if (i) {
    k = k << m;
    goto q;
  }
}

int main() {}