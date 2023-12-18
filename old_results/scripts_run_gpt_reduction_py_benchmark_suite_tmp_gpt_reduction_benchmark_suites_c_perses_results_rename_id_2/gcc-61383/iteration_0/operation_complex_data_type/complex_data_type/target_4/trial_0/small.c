int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                    : p1 + p2;
}

unsigned m;
unsigned n;
int o_value = 0;
int o_divisor = 0;
int o_replacement = 0;
bool o_replacement_valid = false;

short fn6() {
  for (; n < 12; n = fn3(n, 3)) {
    int ab;
    if (0x4F92L < (ab = o_value == 0 ? o_value : o_value % o_divisor, 6))
      ;
    else {
      if (o_value <= 0xE3L)
        ;
      else if (ab)
        break;
    }
  }
  return m;
}

int main() {
  fn6();
}