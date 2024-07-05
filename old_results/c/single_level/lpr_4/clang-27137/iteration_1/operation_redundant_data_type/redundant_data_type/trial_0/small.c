void fn2(int p1) { h = p1; }
void fn3(int p1) { fn2(p1); }

short o;
int main() {
  short q;
  short r = o;
  q = r;
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

  fn3(q);
  printf("checksum = %X\n", h);
  return 0;
}