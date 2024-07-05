int main() {
  c j = 0x24F96B7BL;

  // Loop unrolling
  while (j >= 4) {
    j -= 4;
    j -= 4;
    j -= 4;
    j -= 4;
  }

  return 0;
}