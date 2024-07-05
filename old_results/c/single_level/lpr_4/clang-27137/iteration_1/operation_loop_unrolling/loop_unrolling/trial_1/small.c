unsigned h;
void fn2(p1) { h = p1; }
void fn3(p1) { fn2(p1); }
short o;
int main() {
  short q;
  short r = o;
  q = r;
  int s = 1L;
  q = s;
  q = s;
  q = s;
  q = s;
  q = s;
  q = s;
  fn3(q);
  printf("checksum = %X\n", h);
  return 0;
}