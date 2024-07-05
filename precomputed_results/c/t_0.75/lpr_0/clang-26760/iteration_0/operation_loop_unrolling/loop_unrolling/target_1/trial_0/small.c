typedef signed a;
typedef unsigned d;
typedef unsigned e;
d f;
a g;

int main() {
  a i;
  int j = 0x24F96B7B;
  e k;
  int l = 1;
  int m = j;
  a n = g;
  int o = n;
  e p = o;

  // Loop unrolling optimization
  k = k >> l;
  i = p;
  if (i) {
    k = k << m;
  }

  while (1) {
    break;
  }
}