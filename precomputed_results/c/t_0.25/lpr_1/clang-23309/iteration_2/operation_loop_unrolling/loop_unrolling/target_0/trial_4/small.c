char fn4(unsigned p1, unsigned p2) { return p1; }

unsigned p;
int v;
short w;
short ac = 1;

int main() {
  int an;

  // First iteration
  w = 3;
  an = 250;
  ac = 1;
  v = 0;
  fn4(1 - an, 0xEC);
  v = 1;

  // Second iteration
  w = 2;
  an = 250;
  ac = 1;
  v = 0;
  fn4(1 - an, 0xEC);
  v = 1;

  // Third iteration
  w = 1;
  an = 250;
  ac = 1;
  v = 0;
  fn4(1 - an, 0xEC);
  v = 1;

  return 0;
}