int fn3(int p1, int p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }

signed o;
signed p;
short q;
static signed r = 0x2A52L;
unsigned s = 0x03F238A4L;
unsigned t[7][1];
static int fn7(short p1) {
  int ac;
  ac = fn3(p1, o);
  if (s) {
    unsigned af = 0;
    for (; p1; --p1) {
      // Loop body 1
    }

    for (; p1; --p1) {
      // Loop body 2
    }

    for (; p1; --p1) {
      // Loop body 3
    }

    for (; p1; --p1) {
      // Loop body 4
    }
  } else
    t[2][0] = fn3(fn3(q, q), 0x9CFB623FL);
  return p1;
}

static int fn8() {
  if (fn7(1)) {
    // Conditional body
  }
}

int main() {
  fn8();
}