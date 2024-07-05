unsigned l;
volatile unsigned m[5][8];

unsigned fn3(unsigned p1) {
  for (;;) {
    for (; l; l++)
      for (unsigned k = 0; k >= -27; k -= 6)
        p1 = 24 - p1;
  }
}

int main() {}