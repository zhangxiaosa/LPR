int fn1(int p1, int p2) { return p2 == 0 ? p1 : p1 % p2; }

int fn2(p1) { return (short)p1; }

int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                    : p1 + p2;
}

unsigned n;
int o;
int main() {
  for (; n < 12; n = fn3(n, 3)) {
    int ab;
    int fn1_result = fn1(o, o);
    int intermediate_value = 0x01B28DB7 | (ab = fn1_result);
    int fn2_result = fn2(intermediate_value);
    ab = fn2_result;

    if (0x4F92 < ab)
      ;
    else if (o <= 0xE3)
      ;
    else if (ab)
      break;
  }
  return 0;
}