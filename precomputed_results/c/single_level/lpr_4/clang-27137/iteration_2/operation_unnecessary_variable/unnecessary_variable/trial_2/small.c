unsigned h;
void fn2(p1) { h = p1; }
short o;
int main() {
  int s = 1L;
  while (o > s)
    o -= 1;
  while (o > s)
    o -= 1;
  while (o > s)
    o -= 1;
  while (o > s)
    o -= 1;
  while (o > s)
    o -= 1;
  while (o > s)
    o -= 1;
  fn2(o);
  printf("checksum = %X\n", h);
  return 0;
}