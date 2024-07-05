unsigned f;
signed g;
int main() {
  signed i;
  int j = 0x24F96B7B;
  unsigned k;

  // Loop unrolling optimization: Remove the target loop
  // for (f = 0; f;)

  int l = 1L;
  int m = j;
  signed n = g;
  int o = n;
  unsigned p = o;
q:;
  k = k >> l;
  i = p;
  if (i) {
    k = k << m;
    goto q;
  }
}