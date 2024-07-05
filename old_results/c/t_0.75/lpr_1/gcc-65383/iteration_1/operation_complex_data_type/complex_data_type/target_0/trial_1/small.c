int g;
int h2 = 0x92A1D2CDL;

unsigned fn2() {
  for (;;) {
    int r[5][9][5];
    int* ptr = &r[0][0][0];  // Pointer to the first element of r

    if (h2)
      return 0xC3L;

    g = *ptr;  // Assign the value of the first element of r to g
  }
}

int main() {
  fn2();
}