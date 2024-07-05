unsigned f;
signed g;

int main() {
  signed i;
  unsigned k;
  int j = 0x24F96B7BL;
  int l = 1L;
  int m = j;
  signed n = g;
  int o = n;
  unsigned p = o;

q:
  k = k >> l;
  i = p;
  if (i) {
    k = k << m;
    goto q;
  }
}