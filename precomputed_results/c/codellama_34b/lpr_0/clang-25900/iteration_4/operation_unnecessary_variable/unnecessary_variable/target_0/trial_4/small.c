
<SYS>

// Optimized program
int g(int p1, int p2) { return p2; }
struct m {
  int n : 18;
  int o : 1;
};
int r;
int t;
int main() {
  struct m ad = {1957};
  int p1 = 5;
  int p2 = 5;
  ad.o = g(p1, p2);
  int ae = ad.o;
  ad.o = 5;
  r = t % (17 / ae);
  ad.o;
}

// Optimization
int g(int p1, int p2) { return p2; }
struct m {
  int n : 18;
  int o : 1;
};
int r;
int t;
int main() {
  struct m ad = {1957};
  int p1 = 5;
  int p2 = 5;
  ad.o = g(p1, p2);
  int ae = ad.o;
  ad.o = 5;
  r = t % (17 / ae);
}

// Constant propagation
int g(int p1, int p2) { return p2; }
struct m {
  int n : 18;
  int o : 1;
};
int r;
int t;
int main() {
  struct m ad = {1957};
  int p1 = 5;
  int p2 = 5;
  ad.o = 5;
  r = t % (17 / 5);
}

// Copy propagation
int g(int p1, int p2) { return p2; }
struct m {
  int n : 18;
  int o : 1;
};
int r;
int t;
int main() {
  struct m ad = {1957};
  int p1 = 5;
  int p2 = 5;
  ad.o = 5;
  r = t % (17 / p2);
}

// Removed unused variables
int g(int p1, int p2) { return p2; }
struct m {
  int n : 18;
  int o : 1;
};
int r;
int t;
int main() {
  struct m ad = {1957};
  int p1 = 5;
  int p2 = 5;
  r = t % (17 / p2);
}

// Final optimized program
int g(int p1, int p2) { return p2; }
struct m {
  int n : 18;
  int o : 1;
};
int r;
int t;
int main() {
  struct m ad = {1957};
  int p1 = 5;
  int p2 = 5;
  r = t % (17 / p2);
}

</SYS>
