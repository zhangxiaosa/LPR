char fn4(unsigned p1, unsigned p2) { return 1; }

unsigned fn6(unsigned p1, unsigned p2) { return 1 - p2; }

unsigned v;
short w;
short ac = 1;
short fn13() {
  short an;
  for (w = 3; w > 0; w -= 1)
    if (false) {
      ac || (an = w);
      if (1 + an + 0xEC - ac & 1)
        v = true;
    }
  return 3;
}

int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}