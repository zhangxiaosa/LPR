unsigned i;
int l;
short m = 0x809C;
unsigned o = 0xE576516E;

unsigned fn3(unsigned p1) {
  int l_1179;
  short m_1180 = 0x809C;
  unsigned o_1181 = 0xE576516E;
  if (i)
    printf("l_1179=%d\n", l_1179);
  p1 = (0x60781BCD >= m_1180 ^ 4294967287UL) - o_1181;
  if (i)
    printf("l_1179=%d\n", l_1179);
  return p1;
}

int fn4() {
  if (fn3(1))
    ;
}

int main() {
  fn4();
}