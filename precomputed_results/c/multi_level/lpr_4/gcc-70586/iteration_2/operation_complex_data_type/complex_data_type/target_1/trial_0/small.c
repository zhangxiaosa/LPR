unsigned i;

int fn4() {
  printf("l_1179=%u\n", 0);
  unsigned p1_1 = 0x60781BCD;
  unsigned p1_2 = 0x809C;
  unsigned long p1_3 = 4294967287UL;
  unsigned p1_4 = p1_2 ^ p1_3;
  unsigned p1_5 = p1_1 >= p1_4;
  unsigned p1 = p1_5 - 0xE576516E;

  if (i)
    printf(0);
  return p1;
}

int main() { fn4(); }
