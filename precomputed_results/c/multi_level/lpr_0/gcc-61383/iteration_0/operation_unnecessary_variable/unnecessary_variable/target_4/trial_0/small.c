int fn1(int p1, int p2) { return p2 == 0 ? p1 : p1 % p2; }

unsigned n;
int o;

signed fn6() {
  for (; n < 12; n = fn3(n, 3)) {
    if (o <= 0xE3L)
      ;
    else if (fn1(o, o))
      break;
  }
  return 0;
}

int main() { fn6(); }
