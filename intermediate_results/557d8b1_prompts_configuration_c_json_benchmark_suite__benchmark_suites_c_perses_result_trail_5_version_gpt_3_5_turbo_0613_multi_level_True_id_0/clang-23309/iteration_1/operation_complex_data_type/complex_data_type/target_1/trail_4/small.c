long fn1(long p1, long p2) {
  return p1 - p2;
}

unsigned fn2(unsigned p1, unsigned p2) {
  return p1;
}

unsigned f;
short g;

int main() {
  for (g = 3; g; g -= 1) {
    if (250UL) {
      f = 1L;
    }
  }
  
  printf("checksum = %X\n", f);
  return 0;
}