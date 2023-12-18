int g;

unsigned fn1() {
  unsigned j = 0x24F96B7BL;
  unsigned k;

  // Removed loop for (int f; f;)

  unsigned m = j;
  unsigned n = g;

q:
  k = k >> 1L;
  if (n) {
    k = k << m;
    goto q;
  }
}

int main() {}
