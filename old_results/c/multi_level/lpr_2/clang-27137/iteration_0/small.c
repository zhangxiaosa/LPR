void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }
short o;
int main() {
  short q;
  q = o;
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
  int t = 0;
  fn1(q, t);
  return 0;
}
