int fn1(p2) {
  return p2;
}

int r;
int t;

int main() {
  struct {
    int n : 18;
    int o : 1;
  } ad = {1957};

  ad.o = 5; // Replaced fn1(5) with the constant value 5
  ad.o = 0;
  r = t % 4; // Replaced 4 / ae with the constant value 4

  // Removed the statement ad.o;

  return 0;
}