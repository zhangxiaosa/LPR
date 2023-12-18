int fn3(int p1, int p2) {
  int result;

  if (p1 != 0 && p2 != 0 && p1 > 2147483647 - p2)
    result = p1;
  else if (p1 < 0 && p2 < 0 && p1 != 0)
    result = p1;
  else
    result = p1 + p2;

  return result;
}

unsigned m;
unsigned n;
int o;

short fn5(int p1) {
  int ab;

  while (n < 12) {
    ab = p1 == 0 ? p1 : p1 % p1;

    if (0x4F92L < ab && ab < 6)
      ;
    else if (p1 <= 0xE3L)
      ;
    else if (ab)
      break;

    n = fn3(n, 3);
  }

  return m;
}

int main() {
  if (fn5(o))
    ;
}