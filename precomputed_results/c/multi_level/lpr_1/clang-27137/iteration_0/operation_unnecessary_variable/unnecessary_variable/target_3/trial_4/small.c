void fn1(unsigned p1, int p2) {
  printf("checksum = %X\n", p1);
}

short o;
char p;

int main() {
  int i;
  short r = o;

  for (i = 0; i < 10; i++) {
    while (r > 1)
      r -= 1;
  }

  if (p = r)
    ;
  fn1(p, 0);
  return 0;
}