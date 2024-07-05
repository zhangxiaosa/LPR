short fn1() {
  signed i;
  int j = 0x24F96B7BL;
  unsigned k;
  if (j)
    --j;
  int l = 1L;
  int m = j;
  int g = g; // Modified declaration
  int o = g; // Modified assignment
  unsigned p = o;
q:;
  k = k >> l;
  i = p;
  if (i) {
    k = k << m;
    goto q;
  }
}

int main() {}
