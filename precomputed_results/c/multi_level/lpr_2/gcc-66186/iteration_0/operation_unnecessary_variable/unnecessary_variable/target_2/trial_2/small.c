int g;

int h;

unsigned fn4(int, unsigned short, unsigned short, unsigned, unsigned short);

int fn5() {
  if (fn4(-7L, 4294967287UL, -7L, g, g))
    ;
  return 0xA3L;
}

unsigned fn4(int p1, unsigned short p2, unsigned short p3, unsigned p4,
             unsigned short p5) {
  return g;
}

int main() {
  fn5();
}
