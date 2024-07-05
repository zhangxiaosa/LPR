short ac = 1;

short fn13() {
  short an;
  short w = 3;
  for (; w; w -= 1) {
    an = w;
  }
  return 3;
}

int main() {
  fn13();
  printf("checksum = %X\n", 0);
  return 0;
}