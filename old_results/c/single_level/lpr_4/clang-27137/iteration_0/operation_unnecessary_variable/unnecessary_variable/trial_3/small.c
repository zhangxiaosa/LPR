unsigned h;
void fn2(p1) { h = p1; }
void fn3(p1) { fn2(p1); }
void fn4(unsigned p1, char *p2, int p3) { fn3(p1); }
short o;
char p;
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
  if (p = q)
    ;
  fn4(p, "g_4689", 0);
  printf("checksum = %X\n", h);
  return 0;
}