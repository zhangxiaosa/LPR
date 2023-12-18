int fn3(int p1) {
  return p1 && p1 > 2147483647 - 3 || p1 < 0 && p1 ? p1 : p1 + 3;
}

unsigned n;
int o;

int fn6() {
  for (; n < 12; n = fn3(n)) {
    int temp1 = o == 0 ? 0 : o % o;
    if (o <= 0xE3L) ;
    else if (temp1) break;
  }
  return 0;
}

int main() {
  fn6();
}