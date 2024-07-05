typedef int c;
typedef unsigned d;
typedef unsigned e;
d f;
signed g;

int main() {
  c j1 = 0x24F96B7BL;
  c j2 = 0x24F96B7BL;
  c j3 = 0x24F96B7BL;
  c j4 = 0x24F96B7BL;
  e k;

  for (f = 0; j1 || j2 || j3 || j4; --j1, --j2, --j3, --j4) {
    // Loop body unrolled 4 times
  }

  c l = 1L;
  e p = g;

  while (p) {
    k = k >> l;
    if (p)
      k = k << j1;
  }
}