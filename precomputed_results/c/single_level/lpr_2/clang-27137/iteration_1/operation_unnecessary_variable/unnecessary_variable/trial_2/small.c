int h;
short o;
char p;

char fn5() {
  short q = o;
  while (q > 1L)
    q -= 1;
  while (q > 1L)
    q -= 1;
  while (q > 1L)
    q -= 1;
  while (q > 1L)
    q -= 1;
  while (q > 1L)
    q -= 1;
  while (q > 1L)
    q -= 1;
  if (q)
    ;
}

int main() {
  fn5();
  printf("checksum = %X\n", p);
  return 0;
}