signed fn1(signed p1, signed p2) { return p2 == 0 ? p1 : p1 % p2; }

short fn2(short p1, int p2) { return p1; }

int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

unsigned n;
signed o;
static unsigned p = 0x01B28DB7L;

int main() {
  int ab;
  signed ac;

  if (0x4F92L < fn2(p | fn1(o, o), 6))
    ;
  else {
    ac = 0xE3L;
    if (o > ac && ab)
      break;
    if (o > ac && ab)
      break;
    if (o > ac && ab)
      break;
    if (o > ac && ab)
      break;
    if (o > ac && ab)
      break;
    if (o > ac && ab)
      break;
    if (o > ac && ab)
      break;
    if (o > ac && ab)
      break;
    if (o > ac && ab)
      break;
    if (o > ac && ab)
      break;
    if (o > ac && ab)
      break;
    if (o > ac && ab)
      break;
  }

  return 0;
}