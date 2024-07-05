unsigned fn3(short);
int fn4() {
  // Removed the if (fn3(1)) statement
}

unsigned fn3(short p1) {
  int l;
  short m = 0x809CL;
  unsigned o0 = 0xE576516EL;

  // Removed the printf("l_1179=%d\n", l); statement

  p1 = (0x60781BCDL >= m ^ 4294967287UL) - o0;

  // Removed the printf("l_1179=%d\n", l); statement

  return p1;
}

int main() {
  fn4();
}