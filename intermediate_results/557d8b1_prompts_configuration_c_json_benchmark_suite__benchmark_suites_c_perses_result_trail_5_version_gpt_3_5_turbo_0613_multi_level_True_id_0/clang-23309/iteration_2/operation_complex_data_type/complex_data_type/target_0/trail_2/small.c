short a = 1;

int main() {
  if (250U) {
    a || (250U);
    if (1U - 250U - a & 1)
      a = 1;
  }
  printf("checksum = %lX\n", a);
  return 0;
}