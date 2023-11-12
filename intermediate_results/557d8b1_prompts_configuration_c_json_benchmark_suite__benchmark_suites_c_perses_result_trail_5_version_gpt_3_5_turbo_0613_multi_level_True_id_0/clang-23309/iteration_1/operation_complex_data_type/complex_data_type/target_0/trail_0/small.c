long fn1(unsigned long p1, unsigned long p2) {
  return (long)(p1 - p2);
}

unsigned fn2(unsigned p1, unsigned p2) {
  return p1;
}

unsigned short a = 1;

int main() {
  unsigned short d = 0xBCD1;

  if (fn1((long)d, fn2(1U - 250UL, 0xECU)) - (unsigned long)a & 1UL) {
    f = 1UL;
  }

  return 0;
}