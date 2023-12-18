bool fn3(bool p1, bool p2) {
  return p1 && p2 && p1 > 2147483647u - p2 || p1 < 0 && p2 < 0 && p1 ? (int)(p1)
                                                                    : (int)(p1 + p2);
}

unsigned n;
bool o;
int fn6() {
  for (; n < 12; n = fn3(n, 3)) {
    int temp1 = o == false ? 0 : 0 % 0;
    if (o <= 227)
      ;
    else if (temp1)
      break;
  }
  return 0;
}

int main(void) { fn6(); }