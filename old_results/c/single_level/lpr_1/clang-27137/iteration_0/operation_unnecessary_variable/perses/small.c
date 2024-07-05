unsigned h;
short o;
char p;
void fn2(p1) { h = p1; }
void fn3(p1) { fn2(p1); }
void fn4(unsigned p1, char *p2) { fn3(p1); }
int main() {
  short q;
  int i;
  short r = o;
  q = r;
  int s = 1L;
  for (i = 0; i < 10; i++)
    while (q > s)
      q -= 1;
  if (p = q)
    ;
  fn4(p, "g_4689");
  printf("checksum = %X\n", h);
  return 0;
}
