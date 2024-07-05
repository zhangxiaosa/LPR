
unsigned int multiply(unsigned int x, unsigned int y) {
  unsigned int result = 0;
  while (y) {
    result += x * (y & 1);
    x <<= 1;
    y >>= 1;
  }
  return result;
}

int main() {
  int i;
  unsigned int j = 0x24F96B7BL;
  unsigned int k;
  for (f = 0; f;)
    for (; j; --j)
      ;
  unsigned int l = 1L;
  unsigned int m = j;
  int n = g;
  int o = n;
  int p = o;
  while (p) {
    k = multiply(k, l);
    i = p;
    if (i) {
      k = k << m;
    } else {
      k = 0;
    }
  }
}
