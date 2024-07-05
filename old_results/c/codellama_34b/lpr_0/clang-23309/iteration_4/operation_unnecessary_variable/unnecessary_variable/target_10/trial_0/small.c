
unsigned fn6(unsigned p1, unsigned p2) { return p2 - p1; }
unsigned p;
unsigned v;

int main() {
  int an = 250L;
  short ao = 48873;
  if (fn3(ao, fn6(1L, an)) - 7L & 1L)
    v = 1L;
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
