
fn3(long p1, long p2) {
  return p1 - p2;
}

fn6(unsigned p1, unsigned p2) {
  return p2 - p1;
}

unsigned p;
unsigned v;
signed w = 3;

short fn12(int p1, int p2, long p3, signed p4) {
  int an = 250L;
  if (p2 || (an = w)) {
    v = 1L;
  }
  return 0;
}

int main() {
  fn12(7L, 7L, 248L, 0);
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
