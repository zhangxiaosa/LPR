void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }

char p;
int main() {
  int i;
  int r = 0;
  int s = 1L;
  for (i = 0; i < 10; i++)
    while (r > s)
      r -= 1;
  if (p = r)
    ;
  fn1(p, 0);
  return 0;
}