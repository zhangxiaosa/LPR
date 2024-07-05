void fn2(p1) { unsigned = p1; }
short o;
int main() {
  short q = o;
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
  fn2(q);
  printf("checksum = %X\n", unsigned);
  return 0;
}