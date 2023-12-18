int o;
int p;
short q;
static unsigned r = 0x2A52;
unsigned s = 0x03F238A4;
unsigned t2;

int fn2(signed p1, unsigned p2) { return p1; }

int fn3(int p1, int p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }

static unsigned fn7(short p1) {
  int optimized_ac = fn3(p1, o);
  if (s) {
    unsigned af = 0;
    for (; p1 >= 4; p1 -= 4) {
      // loop body (iteration 1)
      // loop body (iteration 2)
      // loop body (iteration 3)
      // loop body (iteration 4)
    }

    switch (p1) {
      case 3:
        // loop body (iteration 1)
      case 2:
        // loop body (iteration 2)
      case 1:
        // loop body (iteration 3)
    }
  }
  else
    t2 = fn3(fn3(0, q), 0x9CFB623F);

  return p1;
}

static int fn8() {
  if (fn7(1)) {
    // handle fn7(1) condition
  }
}

int main() {
  fn8();
}