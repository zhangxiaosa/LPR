
short p;

int main() {
  for (int i = 0; i < 3; i++) {
    p = fn6(1L, 250UL);
  }
  printf("checksum = %X\n", p);
  return 0;
}
