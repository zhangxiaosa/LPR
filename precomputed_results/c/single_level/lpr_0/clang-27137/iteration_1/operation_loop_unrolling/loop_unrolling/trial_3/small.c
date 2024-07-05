void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }

unsigned h;
short o;
char p;

char fn5() {
  short q;
  int i;
  short r = o;
  q = r;

  while (q > 1) {
    q -= 1;
    q -= 1;
    q -= 1;
    q -= 1;
    q -= 1;
    q -= 1;
    q -= 1;
    q -= 1;
    q -= 1;
  }

  if (p = q)
    ; // Empty statement

  return p; // Added return statement
}

int main() {
  int t = 0;
  fn5();
  h = p;
  fn1(h, t);
  return 0;
}