void fn1(unsigned p1, int p2) {
  printf("checksum = %X\n", p1);
}

short o;
char p;

int main() {
  short q;
  q = o; // Propagated value of `o` directly to `q`
  int s = 1L;
  while (q > s)
    q -= 1;
  while (q > s)
    q -= 1;
  while (q > s)
    q -= 1;
  while (q > s)
    q -= 1;
  while (q > s)
    q -= 1;
  while (q > s)
    q -= 1;
  if (p = q)
    ;
  int t = 0;
  fn1(p, t);
  return 0;
}