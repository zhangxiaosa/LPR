
int main() {
  int i;
  int j = 0x24F96B7BL;
  unsigned k = 0;

  // Unroll the loop by a factor of 4
  for (f = 0; f < 4; f++) {
    k = k << j;
    i = n;
    if (i) {
      k = k << j;
    }
  }
}
