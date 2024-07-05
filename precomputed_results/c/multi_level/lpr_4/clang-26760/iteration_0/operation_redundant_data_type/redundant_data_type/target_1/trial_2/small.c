typedef signed a;

typedef unsigned d;
typedef unsigned e;

d f;
a g;

int main() {
  a i;
  int j = 0x24F96B7BL;  // c replaced with int
  e k;

  for (f = 0;)
    for (; j; --j)
      ;

  int l = 1L;  // c replaced with int
  int m = j;  // c replaced with int
  a n = g;
  int o = n;  // c replaced with int
  e p = o;

q:;
  k = k >> l;
  i = p;

  if (i) {
    k = k << m;
    goto q;
  }
}
