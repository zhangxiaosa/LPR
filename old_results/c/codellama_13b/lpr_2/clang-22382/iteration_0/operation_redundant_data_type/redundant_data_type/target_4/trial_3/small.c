
struct h {
  signed int i;
  long int j;
  unsigned int k;
};

unsigned int fn1(unsigned int p1, short p2, unsigned int p3, unsigned int p4,
                 struct h p5) {
  p5.k;
  goto w;
}

int main() {}
