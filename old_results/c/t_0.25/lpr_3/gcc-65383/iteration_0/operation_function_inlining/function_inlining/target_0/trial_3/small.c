typedef signed a;
typedef int b;
typedef unsigned c;
typedef unsigned d;
b e;
c f;
d g;
b h[] = {0x92A1D2CDL, 0x92A1D2CDL, 0x92A1D2CDL};
static d i = 0x06D7L;
b j;
d fn2() {
  if (h[2])
    return 0xC3L;
  g = h[i][i][i];
  return j;
}

int main() {
  if (h[2])
    return 0xC3L;
  g = h[i][i][i];
  return j;
}