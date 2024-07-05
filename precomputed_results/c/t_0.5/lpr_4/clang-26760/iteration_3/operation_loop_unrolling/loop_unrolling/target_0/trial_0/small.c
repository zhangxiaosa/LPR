int g;
short fn1() {
  int j = 0x24F96B7B;
  unsigned k;
  unsigned f;

  // Unrolled loop
  unsigned loopCount = j / 16;
  for (unsigned i = 0; i < loopCount; i++) {
    // Loop body
  }

q:;
  k = k >> 1;
  if (g) {
    k = k << j;
    goto q;
  }
}

int main() {}
