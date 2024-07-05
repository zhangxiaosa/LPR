int fn1(int p1, int p2) { return p2 == 0 ? p1 : p1 % p2; }

int fn2(short p1) { return p1; }

int fn3(int p1, int p2) { return p1 + p2; }

unsigned n;
int o;
static unsigned p = 0x01B28DB7L;

int main() {
  for (; n < 12; n++) {
    int ab;
    if (0x4F92L < fn2(p | (ab = fn1(o, o))))
      ;
    else {
      if (o <= 0xE3L)
        ;
      else if (ab)
        break;
    }
  }
  return 0;
}