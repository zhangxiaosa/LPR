int main() {
  unsigned k = 0;
  for (;;) {
    k = k >> 1;
    if (0x24F96B7B != 0) {
      k = k << 0x24F96B7B;
    } else {
      break;
    }
  }
}