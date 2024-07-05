typedef short a;
typedef int b;
typedef unsigned c;
typedef unsigned d;

unsigned i;

unsigned fn3(short);
int fn4() {
  if (fn3(1))
    ;
  return 0;  // Added return statement to avoid warning
}

unsigned fn3(short p1) {
  short l;
  short m = 0x809CL;
  unsigned o0 = 0xE576516EL;
  if (i)
    printf("l_1179=%d\n", (int)l);
  p1 = (0x60781BCDL >= m ^ 4294967287UL) - o0;
  if (i)
    printf("l_1179=%d\n", (int)l);
  return p1;
}

int main() {
  fn4();
  return 0;
}