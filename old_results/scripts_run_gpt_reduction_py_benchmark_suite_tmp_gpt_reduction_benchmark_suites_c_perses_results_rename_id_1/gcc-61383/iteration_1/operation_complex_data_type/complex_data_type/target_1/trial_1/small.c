int fn3(int param1, int param2) {
  int expr1 = param1 && param2 && param1 > 2147483647 - param2;
  int expr2 = param1 < 0 && param2 < 0 && param1;
  int sum = param1 + param2;
  return expr1 || expr2 ? param1 : sum;
}

unsigned n;
int fn5(int p1) {
  for (; n < 12; n = fn3(n, 3)) {
    int ab;
    if (0x4F92L < (ab = p1 == 0 ? p1 : p1 % p1, 6))
      ;
    else if (p1 <= 0xE3L)
      ;
    else if (ab)
      break;
  }
  return n;
}

int main() {
  int param3;
  if (fn5(param3))
    ;
}