int fn3(int p2) {
  return 0; // p1 is unused, return a constant value
}

unsigned n;
int o;

int fn6() {
  for (; n < 12; n = fn3(3)) {
    int temp1 = o == 0 ? 0 : o % o;
    if (o <= 0xE3L)
      ;
    else if (temp1)
      break;
  }
  return 0;
}

int main() {
  fn6();
}