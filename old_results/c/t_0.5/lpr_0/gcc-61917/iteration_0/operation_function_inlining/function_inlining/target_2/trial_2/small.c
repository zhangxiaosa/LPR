typedef int c;

int main() {
  c p1 = 0x4FL;
  for (;;) {
    for (unsigned e = 0; e < 20; e++) {
      for (c k = 0; k >= -27; k = k - 6) {
        p1 = 79 - p1;
      }
    }
    p1 || 0;
  }
}