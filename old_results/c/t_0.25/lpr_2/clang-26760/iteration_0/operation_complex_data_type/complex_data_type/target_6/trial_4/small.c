signed int fn1() {
  signed int m = 0x24F96B7B;
  unsigned int k = 0;
q:;
  k = k >> 1;
  if (m) {
    k = k << m;
    goto q;
  }
}

int main() {}