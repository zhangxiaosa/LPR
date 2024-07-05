int main() {
  int i;
  int j = 0x24F96B7BL;
  unsigned k;
  int l = 1L;
  int m = j;
  int n = 0; // Removed reference to 'g'
  int o = n;

q:
  k = k >> l;
  i = o;
  if (i) {
    k = k << m;
    goto q;
  }
}
