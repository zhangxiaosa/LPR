c
unsigned fn2_6(unsigned p1, short p2) {
  unsigned v = p1 - p2;
  return v;
}

unsigned fn10(unsigned p1, short p2) {
  unsigned v = fn2_6(p1, p2);
  return v;
}

int main() {
  unsigned v = fn10(v, 0);
  printf("checksum = %X\n", v);
  return 0;
}
