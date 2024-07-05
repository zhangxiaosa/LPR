short fn3(p1) {
  short m = 0x809C;
  int o = 0xE576516E;
  p1 = (0x60781BCD >= m ^ 4294967287UL) - o;
  return p1;
}

void fn4() {
  if (fn3(1))
    ;
}

int main() {
  fn4();
}