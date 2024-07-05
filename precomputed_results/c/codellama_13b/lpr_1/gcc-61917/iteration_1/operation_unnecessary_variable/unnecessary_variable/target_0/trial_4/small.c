
short fn1(short p1, short p2) {
  return p1 - p2;
}

short l;
volatile short m[5][8];

short fn3(p1) {
  for (;;) {
    for (; l; l++) {
      p1 = fn1(p1, 6);
    }
    p1 || m[2][5];
  }
}

int main() {}
