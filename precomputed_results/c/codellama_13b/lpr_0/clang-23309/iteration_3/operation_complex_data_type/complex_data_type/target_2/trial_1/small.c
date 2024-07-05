
int p1;
short p2;
unsigned v;
short w;
short ac = 1;

void fn10(unsigned p1, short p2) {
  v = p1 - p2;
  return v;
}

void fn13() {
  fn10(v, 0);
  return 1;
}

int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}
